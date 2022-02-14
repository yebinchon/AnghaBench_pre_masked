
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bstp_state {int (* bs_rtage_cb ) (int ,int) ;} ;
struct bstp_port {int bp_protover; int bp_desg_fdelay; int bp_active; scalar_t__ bp_fdbflush; int bp_ifp; struct bstp_state* bp_bs; } ;


 int FUNC_0 (struct bstp_state*) ;


 int VAR_0 ;
 int FUNC_1 (struct bstp_state*) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void
FUNC_3(void *VAR_1, int VAR_2)
{
 struct bstp_port *VAR_3 = (struct bstp_port *)VAR_1;
 struct bstp_state *VAR_4 = VAR_3->bp_bs;
 int VAR_5 = 0;

 FUNC_0(VAR_4);
 switch (VAR_3->bp_protover) {
  case 128:

   VAR_5 = VAR_3->bp_desg_fdelay / VAR_0;
   break;

  case 129:
   VAR_5 = 0;
   break;
 }
 FUNC_1(VAR_4);

 if (VAR_3->bp_active == 1 && VAR_4->bs_rtage_cb != ((void*)0))
  (*VAR_4->bs_rtage_cb)(VAR_3->bp_ifp, VAR_5);


 FUNC_0(VAR_4);
 VAR_3->bp_fdbflush = 0;
 FUNC_1(VAR_4);
}
