
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int u_int ;
typedef int u_char ;
struct mpcp_reg_t {int const* assigned_port; int flags; int const* sync_time; int echoed_pending_grants; } ;
struct mpcp_reg_req_t {int flags; int pending_grants; } ;
struct mpcp_reg_ack_t {int const* echoed_assigned_port; int flags; int const* echoed_sync_time; } ;
struct mpcp_grant_t {int const* duration; int starttime; } ;
struct mpcp_common_header_t {int const* opcode; int timestamp; } ;
struct TYPE_5__ {int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int const VAR_1 ;






 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int const,int) ;
 int FUNC_4 (int ,char*,int const) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (TYPE_1__*,int const*,char*,int ) ;
 int FUNC_6 (int ,char*,int) ;

void
FUNC_7(netdissect_options *VAR_11, register const u_char *VAR_12, register u_int VAR_13)
{
    union {
        const struct mpcp_common_header_t *common_header;
        const struct mpcp_grant_t *grant;
        const struct mpcp_reg_req_t *reg_req;
        const struct mpcp_reg_t *reg;
        const struct mpcp_reg_ack_t *reg_ack;
    } VAR_14;


    const u_char *VAR_15;
    uint16_t VAR_16;
    uint8_t VAR_17, VAR_18;
    uint8_t VAR_19, VAR_20, VAR_21, VAR_22;

    VAR_15=VAR_12;
    VAR_14.common_header = (const struct mpcp_common_header_t *)VAR_12;

    FUNC_3(*VAR_15, sizeof(const struct mpcp_common_header_t));
    VAR_16 = FUNC_0(VAR_14.common_header->opcode);
    FUNC_2((VAR_11, "MPCP, Opcode %s", FUNC_6(VAR_6, "Unknown (%u)", VAR_16)));
    if (VAR_16 != 132) {
        FUNC_2((VAR_11, ", Timestamp %u ticks", FUNC_1(VAR_14.common_header->timestamp)));
    }
    FUNC_2((VAR_11, ", length %u", VAR_13));

    if (!VAR_11->ndo_vflag)
        return;

    VAR_15 += sizeof(const struct mpcp_common_header_t);

    switch (VAR_16) {
    case 132:
        break;

    case 133:
        FUNC_3(*VAR_15, VAR_0);
        VAR_17 = *VAR_15 & VAR_1;
        FUNC_2((VAR_11, "\n\tGrant Numbers %u, Flags [ %s ]",
               VAR_17,
               FUNC_4(VAR_5,
                          "?",
                          *VAR_15 &~ VAR_1)));
        VAR_15++;

        for (VAR_18 = 1; VAR_18 <= VAR_17; VAR_18++) {
            FUNC_3(*VAR_15, sizeof(const struct mpcp_grant_t));
            VAR_14.grant = (const struct mpcp_grant_t *)VAR_15;
            FUNC_2((VAR_11, "\n\tGrant #%u, Start-Time %u ticks, duration %u ticks",
                   VAR_18,
                   FUNC_1(VAR_14.grant->starttime),
                   FUNC_0(VAR_14.grant->duration)));
            VAR_15 += sizeof(const struct mpcp_grant_t);
        }

        FUNC_3(*VAR_15, VAR_4);
        FUNC_2((VAR_11, "\n\tSync-Time %u ticks", FUNC_0(VAR_15)));
        break;


    case 128:
        FUNC_3(*VAR_15, VAR_2);
        VAR_19 = *VAR_15;
        VAR_15+=VAR_2;
        FUNC_2((VAR_11, "\n\tTotal Queue-Sets %u", VAR_19));

        for (VAR_20 = 1; VAR_20 < VAR_19; VAR_20++) {
            FUNC_3(*VAR_15, VAR_3);
            VAR_21 = *(VAR_15);
            FUNC_2((VAR_11, "\n\t  Queue-Set #%u, Report-Bitmap [ %s ]",
                   VAR_19,
                   FUNC_4(VAR_10, "Unknown", VAR_21)));
            VAR_15++;

            VAR_22=1;
            while (VAR_21 != 0) {
                if (VAR_21 & 1) {
                    FUNC_3(*VAR_15, VAR_4);
                    FUNC_2((VAR_11, "\n\t    Q%u Report, Duration %u ticks",
                           VAR_22,
                           FUNC_0(VAR_15)));
                    VAR_15+=VAR_4;
                }
                VAR_22++;
                VAR_21 = VAR_21 >> 1;
            }
        }
        break;

    case 129:
        FUNC_3(*VAR_15, sizeof(const struct mpcp_reg_req_t));
        VAR_14.reg_req = (const struct mpcp_reg_req_t *)VAR_15;
        FUNC_2((VAR_11, "\n\tFlags [ %s ], Pending-Grants %u",
               FUNC_4(VAR_9, "Reserved", VAR_14.reg_req->flags),
               VAR_14.reg_req->pending_grants));
        break;

    case 131:
        FUNC_3(*VAR_15, sizeof(const struct mpcp_reg_t));
        VAR_14.reg = (const struct mpcp_reg_t *)VAR_15;
        FUNC_2((VAR_11, "\n\tAssigned-Port %u, Flags [ %s ]" "\n\tSync-Time %u ticks, Echoed-Pending-Grants %u",

               FUNC_0(VAR_14.reg->assigned_port),
               FUNC_4(VAR_8, "Reserved", VAR_14.reg->flags),
               FUNC_0(VAR_14.reg->sync_time),
               VAR_14.reg->echoed_pending_grants));
        break;

    case 130:
        FUNC_3(*VAR_15, sizeof(const struct mpcp_reg_ack_t));
        VAR_14.reg_ack = (const struct mpcp_reg_ack_t *)VAR_15;
        FUNC_2((VAR_11, "\n\tEchoed-Assigned-Port %u, Flags [ %s ]" "\n\tEchoed-Sync-Time %u ticks",

               FUNC_0(VAR_14.reg_ack->echoed_assigned_port),
               FUNC_4(VAR_7, "Reserved", VAR_14.reg_ack->flags),
               FUNC_0(VAR_14.reg_ack->echoed_sync_time)));
        break;

    default:

        FUNC_5(VAR_11,VAR_12, "\n\t", VAR_13);
        break;
    }

    return;

trunc:
    FUNC_2((VAR_11, "\n\t[|MPCP]"));
}
