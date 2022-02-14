
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct lwapp_transport_header {int version; int frag_id; int length; } ;
struct lwapp_control_header {int msg_type; int session_id; int seq_num; int len; } ;
struct TYPE_5__ {int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct lwapp_transport_header const) ;
 int FUNC_7 (int const,int) ;
 int FUNC_8 (int ,char*,int) ;
 int FUNC_9 (TYPE_1__*,int const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_10 (int ,char*,int) ;

void
FUNC_11(netdissect_options *VAR_3,
                    const u_char *VAR_4, u_int VAR_5, int VAR_6)
{
    const struct lwapp_transport_header *VAR_7;
    const struct lwapp_control_header *VAR_8;
    const u_char *VAR_9;
    int VAR_10;
    int VAR_11;

    VAR_9=VAR_4;

    if (VAR_6) {

        FUNC_7(*VAR_9, 6);
        VAR_7 = (const struct lwapp_transport_header *)(VAR_4+6);
    } else {
        VAR_7 = (const struct lwapp_transport_header *)VAR_4;
    }
    FUNC_6(*VAR_7);




    if (FUNC_4(VAR_7->version) != VAR_0) {
 FUNC_5((VAR_3, "LWAPP version %u packet not supported",
               FUNC_4(VAR_7->version)));
 return;
    }


    if (VAR_3->ndo_vflag < 1) {
        FUNC_5((VAR_3, "LWAPPv%u, %s frame, Flags [%s], length %u",
               FUNC_4(VAR_7->version),
               FUNC_2(VAR_7->version) ? "Control" : "Data",
               FUNC_8(VAR_1,"none",(VAR_7->version)&0x07),
               VAR_5));
        return;
    }


    VAR_10=FUNC_0(VAR_7->length);

    FUNC_5((VAR_3, "LWAPPv%u, %s frame, Radio-id %u, Flags [%s], Frag-id %u, length %u",
           FUNC_4(VAR_7->version),
           FUNC_2(VAR_7->version) ? "Control" : "Data",
           FUNC_3(VAR_7->version),
           FUNC_8(VAR_1,"none",(VAR_7->version)&0x07),
    VAR_7->frag_id,
    VAR_10));

    if (VAR_6) {
        FUNC_5((VAR_3, "\n\tAP identity: %s", FUNC_9(VAR_3, VAR_9)));
        VAR_9+=sizeof(const struct lwapp_transport_header)+6;
    } else {
        VAR_9+=sizeof(const struct lwapp_transport_header);
    }

    while(VAR_10>0) {


        FUNC_7(*VAR_9, sizeof(struct lwapp_control_header));

        VAR_8 = (const struct lwapp_control_header *)VAR_9;
 VAR_11 = FUNC_0(VAR_8->len);


        FUNC_5((VAR_3, "\n\t  Msg type: %s (%u), Seqnum: %u, Msg len: %d, Session: 0x%08x",
               FUNC_10(VAR_2,"Unknown",VAR_8->msg_type),
               VAR_8->msg_type,
               VAR_8->seq_num,
               VAR_11,
               FUNC_1(VAR_8->session_id)));


        FUNC_7(*VAR_9, VAR_11);


        switch(VAR_8->msg_type) {
        case 149:
        case 148:
        case 141:
        case 140:
        case 143:
        case 142:
        case 155:
        case 154:
        case 153:
        case 152:
        case 129:
        case 128:
        case 158:
        case 157:
        case 147:
        case 146:
        case 145:
        case 144:
        case 133:
        case 132:
        case 139:
        case 138:
        case 135:
        case 134:
        case 151:
        case 150:
        case 156:
        case 131:
        case 130:
        case 137:
        case 136:
        default:
            break;
        }

        VAR_9 += sizeof(struct lwapp_control_header) + VAR_11;
        VAR_10 -= sizeof(struct lwapp_control_header) + VAR_11;
    }
    return;

 trunc:
    FUNC_5((VAR_3, "\n\t\t packet exceeded snapshot"));
}
