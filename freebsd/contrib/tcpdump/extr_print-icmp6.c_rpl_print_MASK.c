
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct icmp6_hdr {int icmp6_code; } ;
struct TYPE_7__ {int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (TYPE_1__*) ;




 int FUNC_1 (TYPE_1__*,int const*,int ) ;
 int FUNC_2 (TYPE_1__*,int const*,int ) ;
 int FUNC_3 (TYPE_1__*,int const*,int ) ;

__attribute__((used)) static void
FUNC_4(netdissect_options *VAR_0,
          const struct icmp6_hdr *VAR_1,
          const u_char *VAR_2, u_int VAR_3)
{
        int VAR_4 = VAR_1->icmp6_code & 0x80;
        int VAR_5= VAR_1->icmp6_code & 0x7f;

        if(VAR_4) {
                FUNC_0((VAR_0, ", (SEC) [worktodo]"));




                return;
        } else {
                FUNC_0((VAR_0, ", (CLR)"));
        }

        switch(VAR_5) {
        case 130:
                FUNC_0((VAR_0, "DODAG Information Solicitation"));
                if(VAR_0->ndo_vflag) {
                }
                break;
        case 131:
                FUNC_0((VAR_0, "DODAG Information Object"));
                if(VAR_0->ndo_vflag) {
                        FUNC_3(VAR_0, VAR_2, VAR_3);
                }
                break;
        case 129:
                FUNC_0((VAR_0, "Destination Advertisement Object"));
                if(VAR_0->ndo_vflag) {
                        FUNC_1(VAR_0, VAR_2, VAR_3);
                }
                break;
        case 128:
                FUNC_0((VAR_0, "Destination Advertisement Object Ack"));
                if(VAR_0->ndo_vflag) {
                        FUNC_2(VAR_0, VAR_2, VAR_3);
                }
                break;
        default:
                FUNC_0((VAR_0, "RPL message, unknown code %u",VAR_1->icmp6_code));
                break;
        }
 return;







}
