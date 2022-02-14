
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {scalar_t__ link_active; int link_speed; int feat_en; int task_requests; int hw; scalar_t__ link_up; } ;
typedef int if_ctx_t ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ) ;
 struct adapter* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct adapter*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct adapter*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct adapter*) ;

__attribute__((used)) static void
FUNC_14(if_ctx_t VAR_11)
{
 struct adapter *VAR_12 = FUNC_3(VAR_11);
 device_t VAR_13 = FUNC_2(VAR_11);

 if (VAR_12->link_up) {
  if (VAR_12->link_active == VAR_0) {
   if (VAR_10)
    FUNC_1(VAR_13, "Link is up %d Gbps %s \n",
        ((VAR_12->link_speed == 128) ? 10 : 1),
        "Full Duplex");
   VAR_12->link_active = VAR_9;

   FUNC_6(&VAR_12->hw);

   FUNC_5(VAR_12);

   FUNC_4(VAR_11, VAR_8, FUNC_0(10));

   if (VAR_12->feat_en & VAR_1)
    FUNC_11(VAR_12);
  }
 } else {
  if (VAR_12->link_active == VAR_9) {
   if (VAR_10)
    FUNC_1(VAR_13, "Link is Down\n");
   FUNC_4(VAR_11, VAR_7, 0);
   VAR_12->link_active = VAR_0;
   if (VAR_12->feat_en & VAR_1)
    FUNC_11(VAR_12);
  }
 }


 if (VAR_12->task_requests & VAR_4)
  FUNC_8(VAR_11);
 if (VAR_12->task_requests & VAR_5)
  FUNC_9(VAR_11);
 if (VAR_12->task_requests & VAR_3)
  FUNC_7(VAR_11);
 if (VAR_12->task_requests & VAR_2)
  FUNC_12(VAR_11);
 if (VAR_12->task_requests & VAR_6)
  FUNC_10(VAR_11);
 VAR_12->task_requests = 0;

 FUNC_13(VAR_12);
}
