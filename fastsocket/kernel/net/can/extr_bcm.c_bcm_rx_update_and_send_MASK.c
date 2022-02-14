
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct can_frame {int can_dlc; } ;
struct TYPE_7__ {int tv64; } ;
struct TYPE_8__ {int tv64; } ;
struct bcm_op {TYPE_1__ kt_lastmsg; TYPE_3__ kt_ival2; int thrtimer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bcm_op*,struct can_frame*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (TYPE_1__,TYPE_3__) ;
 TYPE_1__ FUNC_4 () ;
 scalar_t__ FUNC_5 (TYPE_3__) ;
 scalar_t__ FUNC_6 (TYPE_1__,TYPE_1__) ;
 int FUNC_7 (struct can_frame*,struct can_frame const*,int ) ;

__attribute__((used)) static void FUNC_8(struct bcm_op *VAR_4,
       struct can_frame *VAR_5,
       const struct can_frame *VAR_6)
{
 FUNC_7(VAR_5, VAR_6, VAR_0);


 VAR_5->can_dlc |= (VAR_2|VAR_3);


 if (!VAR_4->kt_ival2.tv64) {

  FUNC_0(VAR_4, VAR_5);
  return;
 }


 if (FUNC_1(&VAR_4->thrtimer))
  return;


 if (!VAR_4->kt_lastmsg.tv64)
  goto rx_changed_settime;


 if (FUNC_6(FUNC_4(), VAR_4->kt_lastmsg) <
     FUNC_5(VAR_4->kt_ival2)) {

  FUNC_2(&VAR_4->thrtimer,
         FUNC_3(VAR_4->kt_lastmsg, VAR_4->kt_ival2),
         VAR_1);
  return;
 }


rx_changed_settime:
 FUNC_0(VAR_4, VAR_5);
 VAR_4->kt_lastmsg = FUNC_4();
}
