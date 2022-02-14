
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ tv_sec; } ;
struct interface {scalar_t__ int_rdisc_cnt; int int_name; TYPE_1__ int_rdisc_timer; } ;
struct dr {scalar_t__ dr_ts; struct interface* dr_ifp; scalar_t__ dr_life; int dr_gate; } ;
typedef int naddr ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 struct dr* VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int ,int ,...) ;

__attribute__((used)) static void
FUNC_4(struct dr *VAR_3)
{
 struct interface *VAR_4;
 naddr VAR_5;
 int VAR_6;


 FUNC_0(VAR_5 = VAR_3->dr_gate, 0);
 VAR_3->dr_ts = 0;
 VAR_3->dr_life = 0;




 VAR_6 = 0;
 VAR_4 = VAR_3->dr_ifp;
 for (VAR_3 = VAR_2; VAR_3 < &VAR_2[VAR_0]; VAR_3++) {
  if (VAR_3->dr_ts != 0
      && VAR_3->dr_ifp == VAR_4)
   VAR_6++;
 }





 if (VAR_6 != 0) {
  FUNC_3("discovered router %s via %s"
     " is bad--have %d remaining",
     FUNC_1(VAR_5), VAR_4->int_name, VAR_6);
 } else if (VAR_4->int_rdisc_cnt >= VAR_1) {
  FUNC_3("last discovered router %s via %s"
     " is bad--re-solicit",
     FUNC_1(VAR_5), VAR_4->int_name);
  VAR_4->int_rdisc_cnt = 0;
  VAR_4->int_rdisc_timer.tv_sec = 0;
  FUNC_2();
 } else {
  FUNC_3("last discovered router %s via %s"
     " is bad--wait to solicit",
     FUNC_1(VAR_5), VAR_4->int_name);
 }
}
