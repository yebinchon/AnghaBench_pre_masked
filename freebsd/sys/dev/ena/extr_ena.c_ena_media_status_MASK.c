
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifmediareq {int ifm_active; int ifm_status; } ;
struct ena_adapter {int global_mtx; } ;
typedef int if_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct ena_adapter*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,char*) ;
 struct ena_adapter* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(if_t VAR_8, struct ifmediareq *VAR_9)
{
 struct ena_adapter *VAR_10 = FUNC_2(VAR_8);
 FUNC_1(VAR_0, "enter\n");

 FUNC_3(&VAR_10->global_mtx);

 VAR_9->ifm_status = VAR_4;
 VAR_9->ifm_active = VAR_5;

 if (!FUNC_0(VAR_1, VAR_10)) {
  FUNC_4(&VAR_10->global_mtx);
  FUNC_1(VAR_2, "Link is down\n");
  return;
 }

 VAR_9->ifm_status |= VAR_3;
 VAR_9->ifm_active |= VAR_7 | VAR_6;

 FUNC_4(&VAR_10->global_mtx);
}
