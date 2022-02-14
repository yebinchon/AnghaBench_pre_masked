
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct pptp_msg_stopccrq {int reason; int reserved1; int reserved2; } ;
struct TYPE_4__ {scalar_t__ ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(netdissect_options *VAR_1,
                    const u_char *VAR_2)
{
 const struct pptp_msg_stopccrq *VAR_3 = (const struct pptp_msg_stopccrq *)VAR_2;

 FUNC_1(VAR_3->reason);
 FUNC_0((VAR_1, " REASON(%u", VAR_3->reason));
 if (VAR_1->ndo_vflag) {
  switch (VAR_3->reason) {
  case 1:
   FUNC_0((VAR_1, ":None"));
   break;
  case 2:
   FUNC_0((VAR_1, ":Stop-Protocol"));
   break;
  case 3:
   FUNC_0((VAR_1, ":Stop-Local-Shutdown"));
   break;
  default:
   FUNC_0((VAR_1, ":?"));
   break;
  }
 }
 FUNC_0((VAR_1, ")"));
 FUNC_1(VAR_3->reserved1);
 FUNC_1(VAR_3->reserved2);

 return;

trunc:
 FUNC_0((VAR_1, "%s", VAR_0));
}
