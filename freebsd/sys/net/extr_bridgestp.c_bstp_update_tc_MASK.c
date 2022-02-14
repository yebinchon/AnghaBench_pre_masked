
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bstp_port {int bp_tcstate; TYPE_1__* bp_ifp; int bp_operedge; int bp_state; int bp_role; int bp_tc_prop; int bp_rcvdtca; int bp_rcvdtcn; int bp_rcvdtc; int bp_fdbflush; } ;
struct TYPE_2__ {int if_xname; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct bstp_port*,int const) ;

__attribute__((used)) static void
FUNC_2(struct bstp_port *VAR_5)
{
 switch (VAR_5->bp_tcstate) {
  case 134:
   if ((VAR_5->bp_role != VAR_3 &&
       VAR_5->bp_role != VAR_4) || VAR_5->bp_operedge)
    FUNC_1(VAR_5, 131);

   if (VAR_5->bp_rcvdtcn)
    FUNC_1(VAR_5, 128);
   if (VAR_5->bp_rcvdtc)
    FUNC_1(VAR_5, 129);

   if (VAR_5->bp_tc_prop && !VAR_5->bp_operedge)
    FUNC_1(VAR_5, 130);

   if (VAR_5->bp_rcvdtca)
    FUNC_1(VAR_5, 135);
   break;

  case 132:
   if ((VAR_5->bp_state == VAR_2 ||
       VAR_5->bp_state == VAR_1) &&
       VAR_5->bp_fdbflush == 0)
    FUNC_1(VAR_5, 131);
   break;

  case 131:
   if (VAR_5->bp_rcvdtc || VAR_5->bp_rcvdtcn || VAR_5->bp_rcvdtca ||
       VAR_5->bp_tc_prop)
    FUNC_1(VAR_5, 131);
   else if (VAR_5->bp_role != VAR_3 &&
     VAR_5->bp_role != VAR_4 &&
     VAR_5->bp_state == VAR_0)
    FUNC_1(VAR_5, 132);

   if ((VAR_5->bp_role == VAR_3 ||
       VAR_5->bp_role == VAR_4) &&
       VAR_5->bp_state == VAR_1 &&
       !VAR_5->bp_operedge)
    FUNC_1(VAR_5, 133);
   break;


  case 133:
  case 128:
  case 129:
  case 130:
  case 135:
   FUNC_0("Invalid TC state for %s\n",
       VAR_5->bp_ifp->if_xname);
   break;
 }

}
