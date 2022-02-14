
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int ** uint8_t ;
typedef int u_int ;
typedef int u_char ;
struct eigrp_tlv_sw_version_t {int eigrp_minor; int eigrp_major; int ios_minor; int ios_major; } ;
struct eigrp_tlv_ip_int_t {int plen; int load; int reliability; int hopcount; int mtu; int *** bandwidth; int *** delay; int *** nexthop; int destination; } ;
struct eigrp_tlv_ip_ext_t {int plen; int proto_id; int load; int reliability; int hopcount; int mtu; int *** bandwidth; int *** delay; int **** metric; int **** tag; int flags; int **** origin_as; int **** origin_router; int *** nexthop; int destination; } ;
struct eigrp_tlv_header {int *** type; int *** length; } ;
struct eigrp_tlv_general_parm_t {int k5; int k4; int k3; int k2; int k1; int **** holdtime; } ;
struct eigrp_tlv_at_int_t {int load; int reliability; int hopcount; int mtu; int *** bandwidth; int *** delay; int **** nexthop; int *** cable_end; int *** cable_start; } ;
struct eigrp_tlv_at_ext_t {int proto_id; int load; int reliability; int hopcount; int mtu; int *** bandwidth; int *** delay; int **** metric; int **** tag; int flags; int **** origin_as; int **** origin_router; int **** nexthop; int *** cable_end; int *** cable_start; } ;
struct eigrp_tlv_at_cable_setup_t {int *** router_id; int *** cable_end; int *** cable_start; } ;
struct eigrp_common_header {scalar_t__ version; int opcode; int *** asn; int *** ack; int *** seq; int *** flags; int *** checksum; } ;
struct TYPE_6__ {int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;
 scalar_t__ VAR_0 ;
 int FUNC_0 (int ***) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ***) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct eigrp_common_header const) ;
 int FUNC_5 (int const,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (TYPE_1__*,int ***) ;
 int FUNC_7 (int ***,int *,int) ;
 int FUNC_8 (int ***,int ,int) ;
 int FUNC_9 (TYPE_1__*,int const*,char*,int) ;
 int FUNC_10 (int ,char*,int) ;

void
FUNC_11(netdissect_options *VAR_5, register const u_char *VAR_6, register u_int VAR_7)
{
    const struct eigrp_common_header *VAR_8;
    const struct eigrp_tlv_header *VAR_9;
    const u_char *VAR_10,*VAR_11;
    u_int VAR_12,VAR_13,VAR_14,VAR_15, VAR_16, VAR_17;
    uint8_t VAR_18[4];

    union {
        const struct eigrp_tlv_general_parm_t *eigrp_tlv_general_parm;
        const struct eigrp_tlv_sw_version_t *eigrp_tlv_sw_version;
        const struct eigrp_tlv_ip_int_t *eigrp_tlv_ip_int;
        const struct eigrp_tlv_ip_ext_t *eigrp_tlv_ip_ext;
        const struct eigrp_tlv_at_cable_setup_t *eigrp_tlv_at_cable_setup;
        const struct eigrp_tlv_at_int_t *eigrp_tlv_at_int;
        const struct eigrp_tlv_at_ext_t *eigrp_tlv_at_ext;
    } VAR_19;

    VAR_10=VAR_6;
    VAR_8 = (const struct eigrp_common_header *)VAR_6;
    FUNC_4(*VAR_8);




    if (VAR_8->version != VAR_0) {
 FUNC_3((VAR_5, "EIGRP version %u packet not supported",VAR_8->version));
 return;
    }


    if (VAR_5->ndo_vflag < 1) {
        FUNC_3((VAR_5, "EIGRP %s, length: %u",
               FUNC_10(VAR_3, "unknown (%u)",VAR_8->opcode),
               VAR_7));
        return;
    }



    if (VAR_7 < sizeof(struct eigrp_common_header)) {
        FUNC_3((VAR_5, "EIGRP %s, length: %u (too short, < %u)",
               FUNC_10(VAR_3, "unknown (%u)",VAR_8->opcode),
               VAR_7, (u_int) sizeof(struct eigrp_common_header)));
        return;
    }
    VAR_12=VAR_7-sizeof(struct eigrp_common_header);


    FUNC_3((VAR_5, "\n\tEIGRP v%u, opcode: %s (%u), chksum: 0x%04x, Flags: [%s]\n\tseq: 0x%08x, ack: 0x%08x, AS: %u, length: %u",
           VAR_8->version,
           FUNC_10(VAR_3, "unknown, type: %u",VAR_8->opcode),
           VAR_8->opcode,
           FUNC_0(&VAR_8->checksum),
           FUNC_10(VAR_1,
                   "none",
                   FUNC_2(&VAR_8->flags)),
           FUNC_2(&VAR_8->seq),
           FUNC_2(&VAR_8->ack),
           FUNC_2(&VAR_8->asn),
           VAR_12));

    VAR_10+=sizeof(const struct eigrp_common_header);

    while(VAR_12>0) {

        FUNC_5(*VAR_10, sizeof(struct eigrp_tlv_header));

        VAR_9 = (const struct eigrp_tlv_header *)VAR_10;
        VAR_13=FUNC_0(&VAR_9->length);
        VAR_14=FUNC_0(&VAR_9->type);


        if (VAR_13 < sizeof(struct eigrp_tlv_header) ||
            VAR_13 > VAR_12) {
            FUNC_9(VAR_5,VAR_10+sizeof(struct eigrp_tlv_header),"\n\t    ",VAR_12);
            return;
        }

        FUNC_3((VAR_5, "\n\t  %s TLV (0x%04x), length: %u",
               FUNC_10(VAR_4,
                       "Unknown",
                       VAR_14),
               VAR_14,
               VAR_13));

        if (VAR_13 < sizeof(struct eigrp_tlv_header)) {
                FUNC_3((VAR_5, " (too short, < %u)",
                        (u_int) sizeof(struct eigrp_tlv_header)));
                break;
        }
        VAR_11=VAR_10+sizeof(struct eigrp_tlv_header);
        VAR_15=VAR_13-sizeof(struct eigrp_tlv_header);


        FUNC_5(*VAR_10, VAR_13);

        switch(VAR_14) {

        case 135:
            VAR_19.eigrp_tlv_general_parm = (const struct eigrp_tlv_general_parm_t *)VAR_11;
            if (VAR_15 < sizeof(*VAR_19.eigrp_tlv_general_parm)) {
                FUNC_3((VAR_5, " (too short, < %u)",
                    (u_int) (sizeof(struct eigrp_tlv_header) + sizeof(*VAR_19.eigrp_tlv_general_parm))));
                break;
            }

            FUNC_3((VAR_5, "\n\t    holdtime: %us, k1 %u, k2 %u, k3 %u, k4 %u, k5 %u",
                   FUNC_0(*VAR_19.eigrp_tlv_general_parm->holdtime),
                   VAR_19.eigrp_tlv_general_parm->k1,
                   VAR_19.eigrp_tlv_general_parm->k2,
                   VAR_19.eigrp_tlv_general_parm->k3,
                   VAR_19.eigrp_tlv_general_parm->k4,
                   VAR_19.eigrp_tlv_general_parm->k5));
            break;

        case 128:
            VAR_19.eigrp_tlv_sw_version = (const struct eigrp_tlv_sw_version_t *)VAR_11;
            if (VAR_15 < sizeof(*VAR_19.eigrp_tlv_sw_version)) {
                FUNC_3((VAR_5, " (too short, < %u)",
                    (u_int) (sizeof(struct eigrp_tlv_header) + sizeof(*VAR_19.eigrp_tlv_sw_version))));
                break;
            }

            FUNC_3((VAR_5, "\n\t    IOS version: %u.%u, EIGRP version %u.%u",
                   VAR_19.eigrp_tlv_sw_version->ios_major,
                   VAR_19.eigrp_tlv_sw_version->ios_minor,
                   VAR_19.eigrp_tlv_sw_version->eigrp_major,
                   VAR_19.eigrp_tlv_sw_version->eigrp_minor));
            break;

        case 131:
            VAR_19.eigrp_tlv_ip_int = (const struct eigrp_tlv_ip_int_t *)VAR_11;
            if (VAR_15 < sizeof(*VAR_19.eigrp_tlv_ip_int)) {
                FUNC_3((VAR_5, " (too short, < %u)",
                    (u_int) (sizeof(struct eigrp_tlv_header) + sizeof(*VAR_19.eigrp_tlv_ip_int))));
                break;
            }

            VAR_17 = VAR_19.eigrp_tlv_ip_int->plen;
            if (VAR_17 > 32) {
                FUNC_3((VAR_5, "\n\t    illegal prefix length %u",VAR_17));
                break;
            }
            VAR_16 = (VAR_17 + 7) / 8;
            FUNC_8(VAR_18, 0, 4);
            FUNC_7(VAR_18,&VAR_19.eigrp_tlv_ip_int->destination,VAR_16);

            FUNC_3((VAR_5, "\n\t    IPv4 prefix: %15s/%u, nexthop: ",
                   FUNC_6(VAR_5, VAR_18),
                   VAR_17));
            if (FUNC_2(&VAR_19.eigrp_tlv_ip_int->nexthop) == 0)
                FUNC_3((VAR_5, "self"));
            else
                FUNC_3((VAR_5, "%s",FUNC_6(VAR_5, &VAR_19.eigrp_tlv_ip_int->nexthop)));

            FUNC_3((VAR_5, "\n\t      delay %u ms, bandwidth %u Kbps, mtu %u, hop %u, reliability %u, load %u",
                   (FUNC_2(&VAR_19.eigrp_tlv_ip_int->delay)/100),
                   FUNC_2(&VAR_19.eigrp_tlv_ip_int->bandwidth),
                   FUNC_1(&VAR_19.eigrp_tlv_ip_int->mtu),
                   VAR_19.eigrp_tlv_ip_int->hopcount,
                   VAR_19.eigrp_tlv_ip_int->reliability,
                   VAR_19.eigrp_tlv_ip_int->load));
            break;

        case 132:
            VAR_19.eigrp_tlv_ip_ext = (const struct eigrp_tlv_ip_ext_t *)VAR_11;
            if (VAR_15 < sizeof(*VAR_19.eigrp_tlv_ip_ext)) {
                FUNC_3((VAR_5, " (too short, < %u)",
                    (u_int) (sizeof(struct eigrp_tlv_header) + sizeof(*VAR_19.eigrp_tlv_ip_ext))));
                break;
            }

            VAR_17 = VAR_19.eigrp_tlv_ip_ext->plen;
            if (VAR_17 > 32) {
                FUNC_3((VAR_5, "\n\t    illegal prefix length %u",VAR_17));
                break;
            }
            VAR_16 = (VAR_17 + 7) / 8;
            FUNC_8(VAR_18, 0, 4);
            FUNC_7(VAR_18,&VAR_19.eigrp_tlv_ip_ext->destination,VAR_16);

            FUNC_3((VAR_5, "\n\t    IPv4 prefix: %15s/%u, nexthop: ",
                   FUNC_6(VAR_5, VAR_18),
                   VAR_17));
            if (FUNC_2(&VAR_19.eigrp_tlv_ip_ext->nexthop) == 0)
                FUNC_3((VAR_5, "self"));
            else
                FUNC_3((VAR_5, "%s",FUNC_6(VAR_5, &VAR_19.eigrp_tlv_ip_ext->nexthop)));

            FUNC_3((VAR_5, "\n\t      origin-router %s, origin-as %u, origin-proto %s, flags [0x%02x], tag 0x%08x, metric %u",
                   FUNC_6(VAR_5, *VAR_19.eigrp_tlv_ip_ext->origin_router),
                   FUNC_2(*VAR_19.eigrp_tlv_ip_ext->origin_as),
                   FUNC_10(VAR_2,"unknown",VAR_19.eigrp_tlv_ip_ext->proto_id),
                   VAR_19.eigrp_tlv_ip_ext->flags,
                   FUNC_2(*VAR_19.eigrp_tlv_ip_ext->tag),
                   FUNC_2(*VAR_19.eigrp_tlv_ip_ext->metric)));

            FUNC_3((VAR_5, "\n\t      delay %u ms, bandwidth %u Kbps, mtu %u, hop %u, reliability %u, load %u",
                   (FUNC_2(&VAR_19.eigrp_tlv_ip_ext->delay)/100),
                   FUNC_2(&VAR_19.eigrp_tlv_ip_ext->bandwidth),
                   FUNC_1(&VAR_19.eigrp_tlv_ip_ext->mtu),
                   VAR_19.eigrp_tlv_ip_ext->hopcount,
                   VAR_19.eigrp_tlv_ip_ext->reliability,
                   VAR_19.eigrp_tlv_ip_ext->load));
            break;

        case 139:
            VAR_19.eigrp_tlv_at_cable_setup = (const struct eigrp_tlv_at_cable_setup_t *)VAR_11;
            if (VAR_15 < sizeof(*VAR_19.eigrp_tlv_at_cable_setup)) {
                FUNC_3((VAR_5, " (too short, < %u)",
                    (u_int) (sizeof(struct eigrp_tlv_header) + sizeof(*VAR_19.eigrp_tlv_at_cable_setup))));
                break;
            }

            FUNC_3((VAR_5, "\n\t    Cable-range: %u-%u, Router-ID %u",
                   FUNC_0(&VAR_19.eigrp_tlv_at_cable_setup->cable_start),
                   FUNC_0(&VAR_19.eigrp_tlv_at_cable_setup->cable_end),
                   FUNC_2(&VAR_19.eigrp_tlv_at_cable_setup->router_id)));
            break;

        case 137:
            VAR_19.eigrp_tlv_at_int = (const struct eigrp_tlv_at_int_t *)VAR_11;
            if (VAR_15 < sizeof(*VAR_19.eigrp_tlv_at_int)) {
                FUNC_3((VAR_5, " (too short, < %u)",
                    (u_int) (sizeof(struct eigrp_tlv_header) + sizeof(*VAR_19.eigrp_tlv_at_int))));
                break;
            }

            FUNC_3((VAR_5, "\n\t     Cable-Range: %u-%u, nexthop: ",
                   FUNC_0(&VAR_19.eigrp_tlv_at_int->cable_start),
                   FUNC_0(&VAR_19.eigrp_tlv_at_int->cable_end)));

            if (FUNC_2(&VAR_19.eigrp_tlv_at_int->nexthop) == 0)
                FUNC_3((VAR_5, "self"));
            else
                FUNC_3((VAR_5, "%u.%u",
                       FUNC_0(&VAR_19.eigrp_tlv_at_int->nexthop),
                       FUNC_0(VAR_19.eigrp_tlv_at_int->nexthop[2])));

            FUNC_3((VAR_5, "\n\t      delay %u ms, bandwidth %u Kbps, mtu %u, hop %u, reliability %u, load %u",
                   (FUNC_2(&VAR_19.eigrp_tlv_at_int->delay)/100),
                   FUNC_2(&VAR_19.eigrp_tlv_at_int->bandwidth),
                   FUNC_1(&VAR_19.eigrp_tlv_at_int->mtu),
                   VAR_19.eigrp_tlv_at_int->hopcount,
                   VAR_19.eigrp_tlv_at_int->reliability,
                   VAR_19.eigrp_tlv_at_int->load));
            break;

        case 138:
            VAR_19.eigrp_tlv_at_ext = (const struct eigrp_tlv_at_ext_t *)VAR_11;
            if (VAR_15 < sizeof(*VAR_19.eigrp_tlv_at_ext)) {
                FUNC_3((VAR_5, " (too short, < %u)",
                    (u_int) (sizeof(struct eigrp_tlv_header) + sizeof(*VAR_19.eigrp_tlv_at_ext))));
                break;
            }

            FUNC_3((VAR_5, "\n\t     Cable-Range: %u-%u, nexthop: ",
                   FUNC_0(&VAR_19.eigrp_tlv_at_ext->cable_start),
                   FUNC_0(&VAR_19.eigrp_tlv_at_ext->cable_end)));

            if (FUNC_2(&VAR_19.eigrp_tlv_at_ext->nexthop) == 0)
                FUNC_3((VAR_5, "self"));
            else
                FUNC_3((VAR_5, "%u.%u",
                       FUNC_0(&VAR_19.eigrp_tlv_at_ext->nexthop),
                       FUNC_0(VAR_19.eigrp_tlv_at_ext->nexthop[2])));

            FUNC_3((VAR_5, "\n\t      origin-router %u, origin-as %u, origin-proto %s, flags [0x%02x], tag 0x%08x, metric %u",
                   FUNC_2(*VAR_19.eigrp_tlv_at_ext->origin_router),
                   FUNC_2(*VAR_19.eigrp_tlv_at_ext->origin_as),
                   FUNC_10(VAR_2,"unknown",VAR_19.eigrp_tlv_at_ext->proto_id),
                   VAR_19.eigrp_tlv_at_ext->flags,
                   FUNC_2(*VAR_19.eigrp_tlv_at_ext->tag),
                   FUNC_0(*VAR_19.eigrp_tlv_at_ext->metric)));

            FUNC_3((VAR_5, "\n\t      delay %u ms, bandwidth %u Kbps, mtu %u, hop %u, reliability %u, load %u",
                   (FUNC_2(&VAR_19.eigrp_tlv_at_ext->delay)/100),
                   FUNC_2(&VAR_19.eigrp_tlv_at_ext->bandwidth),
                   FUNC_1(&VAR_19.eigrp_tlv_at_ext->mtu),
                   VAR_19.eigrp_tlv_at_ext->hopcount,
                   VAR_19.eigrp_tlv_at_ext->reliability,
                   VAR_19.eigrp_tlv_at_ext->load));
            break;






        case 136:
        case 129:
        case 130:
        case 133:
        case 134:

        default:
            if (VAR_5->ndo_vflag <= 1)
                FUNC_9(VAR_5,VAR_11,"\n\t    ",VAR_15);
            break;
        }

        if (VAR_5->ndo_vflag > 1)
            FUNC_9(VAR_5,VAR_10+sizeof(struct eigrp_tlv_header),"\n\t    ",
                               VAR_13-sizeof(struct eigrp_tlv_header));

        VAR_10+=VAR_13;
        VAR_12-=VAR_13;
    }
    return;
trunc:
    FUNC_3((VAR_5, "\n\t\t packet exceeded snapshot"));
}
