
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ tv64; } ;
struct bcm_op {scalar_t__ count; int flags; TYPE_1__ kt_ival2; int timer; TYPE_1__ kt_ival1; int can_id; int ival2; int ival1; } ;
struct bcm_msg_head {int flags; scalar_t__ count; scalar_t__ nframes; int can_id; int ival2; int ival1; int opcode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bcm_op*) ;
 int FUNC_1 (struct bcm_op*,struct bcm_msg_head*,int *,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int ,TYPE_1__) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_3)
{
 struct bcm_op *VAR_4 = (struct bcm_op *)VAR_3;
 struct bcm_msg_head VAR_5;

 if (VAR_4->kt_ival1.tv64 && (VAR_4->count > 0)) {

  VAR_4->count--;
  if (!VAR_4->count && (VAR_4->flags & VAR_1)) {


   VAR_5.opcode = VAR_2;
   VAR_5.flags = VAR_4->flags;
   VAR_5.count = VAR_4->count;
   VAR_5.ival1 = VAR_4->ival1;
   VAR_5.ival2 = VAR_4->ival2;
   VAR_5.can_id = VAR_4->can_id;
   VAR_5.nframes = 0;

   FUNC_1(VAR_4, &VAR_5, ((void*)0), 0);
  }
 }

 if (VAR_4->kt_ival1.tv64 && (VAR_4->count > 0)) {


  FUNC_0(VAR_4);
  FUNC_2(&VAR_4->timer,
         FUNC_3(FUNC_4(), VAR_4->kt_ival1),
         VAR_0);

 } else {
  if (VAR_4->kt_ival2.tv64) {


   FUNC_0(VAR_4);
   FUNC_2(&VAR_4->timer,
          FUNC_3(FUNC_4(), VAR_4->kt_ival2),
          VAR_0);
  }
 }
}
