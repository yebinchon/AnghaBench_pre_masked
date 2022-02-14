
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_type; } ;
struct bstp_state {int bs_bplist; } ;
struct bstp_port {int bp_active; int bp_flags; struct ifnet* bp_ifp; struct bstp_state* bp_bs; } ;


 int FUNC_0 (struct bstp_state*) ;
 int VAR_0 ;
 int FUNC_1 (struct bstp_state*) ;
 int VAR_1 ;

 int FUNC_2 (int,char*) ;
 int FUNC_3 (int *,struct bstp_port*,int ) ;
 int VAR_2 ;
 int FUNC_4 (struct bstp_state*) ;
 int FUNC_5 (struct bstp_state*,struct bstp_port*) ;

int
FUNC_6(struct bstp_port *VAR_3)
{
 struct bstp_state *VAR_4 = VAR_3->bp_bs;
 struct ifnet *VAR_5 = VAR_3->bp_ifp;

 FUNC_2(VAR_3->bp_active == 0, ("already a bstp member"));

 switch (VAR_5->if_type) {
  case 128:
   break;
  default:

   return (VAR_1);
 }

 FUNC_0(VAR_4);
 FUNC_3(&VAR_4->bs_bplist, VAR_3, VAR_2);
 VAR_3->bp_active = 1;
 VAR_3->bp_flags |= VAR_0;
 FUNC_4(VAR_4);
 FUNC_5(VAR_4, VAR_3);
 FUNC_1(VAR_4);
 return (0);
}
