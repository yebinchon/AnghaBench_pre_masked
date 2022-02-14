
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_short ;
typedef int u_int ;
typedef int u_char ;
struct rsvp_common_header {int msg_type; int checksum; int ttl; int version_flags; int length; } ;
struct TYPE_6__ {int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct rsvp_common_header const) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (TYPE_1__*,int const*,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (TYPE_1__*,int const*,int,int const*,char*,int,struct rsvp_common_header const*) ;
 int FUNC_8 (int ,char*,int) ;
 int VAR_3 ;

void
FUNC_9(netdissect_options *VAR_4,
           register const u_char *VAR_5, register u_int VAR_6)
{
    const struct rsvp_common_header *VAR_7;
    const u_char *VAR_8;
    u_short VAR_9, VAR_10;

    VAR_8=VAR_5;

    VAR_7 = (const struct rsvp_common_header *)VAR_5;
    FUNC_2(*VAR_7);




    if (FUNC_4(VAR_7->version_flags) != VAR_0) {
 FUNC_1((VAR_4, "ERROR: RSVP version %u packet not supported",
               FUNC_4(VAR_7->version_flags)));
 return;
    }


    if (VAR_4->ndo_vflag < 1) {
        FUNC_1((VAR_4, "RSVPv%u %s Message, length: %u",
               FUNC_4(VAR_7->version_flags),
               FUNC_8(VAR_2, "unknown (%u)",VAR_7->msg_type),
               VAR_6));
        return;
    }



    VAR_9 = VAR_10 = FUNC_0(VAR_7->length);

    FUNC_1((VAR_4, "\n\tRSVPv%u %s Message (%u), Flags: [%s], length: %u, ttl: %u, checksum: 0x%04x",
           FUNC_4(VAR_7->version_flags),
           FUNC_8(VAR_2, "unknown, type: %u",VAR_7->msg_type),
           VAR_7->msg_type,
           FUNC_5(VAR_1,"none",FUNC_3(VAR_7->version_flags)),
           VAR_10,
           VAR_7->ttl,
           FUNC_0(VAR_7->checksum)));

    if (VAR_10 < sizeof(const struct rsvp_common_header)) {
        FUNC_1((VAR_4, "ERROR: common header too short %u < %lu", VAR_10,
               (unsigned long)sizeof(const struct rsvp_common_header)));
        return;
    }

    VAR_8+=sizeof(const struct rsvp_common_header);
    VAR_10-=sizeof(const struct rsvp_common_header);

    switch(VAR_7->msg_type) {

    case 138:





        while(VAR_10 > 0) {
            const u_char *VAR_11=VAR_8, *VAR_12;
            u_short VAR_13, VAR_14;

            VAR_12=VAR_11;

            VAR_7 = (const struct rsvp_common_header *)VAR_11;
            FUNC_2(*VAR_7);




            if (FUNC_4(VAR_7->version_flags) != VAR_0) {
                FUNC_1((VAR_4, "ERROR: RSVP version %u packet not supported",
                       FUNC_4(VAR_7->version_flags)));
                return;
            }

            VAR_13 = VAR_14 = FUNC_0(VAR_7->length);

            FUNC_1((VAR_4, "\n\t  RSVPv%u %s Message (%u), Flags: [%s], length: %u, ttl: %u, checksum: 0x%04x",
                   FUNC_4(VAR_7->version_flags),
                   FUNC_8(VAR_2, "unknown, type: %u",VAR_7->msg_type),
                   VAR_7->msg_type,
                   FUNC_5(VAR_1,"none",FUNC_3(VAR_7->version_flags)),
                   VAR_14,
                   VAR_7->ttl,
                   FUNC_0(VAR_7->checksum)));

            if (VAR_14 < sizeof(const struct rsvp_common_header)) {
                FUNC_1((VAR_4, "ERROR: common header too short %u < %lu", VAR_14,
                       (unsigned long)sizeof(const struct rsvp_common_header)));
                return;
            }

            if (VAR_10 < VAR_14) {
                FUNC_1((VAR_4, "ERROR: common header too large %u > %u", VAR_14,
                       VAR_10));
                return;
            }

            VAR_12+=sizeof(const struct rsvp_common_header);
            VAR_14-=sizeof(const struct rsvp_common_header);




            if (FUNC_7(VAR_4, VAR_11, VAR_13, VAR_12, "\n\t    ", VAR_14, VAR_7) == -1)
                return;

            VAR_8+=VAR_14+sizeof(const struct rsvp_common_header);
            VAR_10-=VAR_14+sizeof(const struct rsvp_common_header);
        }

        break;

    case 135:
    case 132:
    case 134:
    case 130:
    case 133:
    case 129:
    case 131:
    case 136:
    case 137:
    case 139:
    case 128:



        if (FUNC_7(VAR_4, VAR_5, VAR_9, VAR_8, "\n\t  ", VAR_10, VAR_7) == -1)
            return;
        break;

    default:
        FUNC_6(VAR_4, VAR_8, "\n\t    ", VAR_10);
        break;
    }

    return;
trunc:
    FUNC_1((VAR_4, "\n\t\t"));
    FUNC_1((VAR_4, "%s", VAR_3));
}
