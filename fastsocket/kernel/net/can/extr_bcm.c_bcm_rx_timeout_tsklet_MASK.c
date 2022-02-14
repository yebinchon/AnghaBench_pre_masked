
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm_op {int can_id; int ival2; int ival1; int count; int flags; } ;
struct bcm_msg_head {scalar_t__ nframes; int can_id; int ival2; int ival1; int count; int flags; int opcode; } ;


 int VAR_0 ;
 int FUNC_0 (struct bcm_op*,struct bcm_msg_head*,int *,int ) ;

__attribute__((used)) static void FUNC_1(unsigned long VAR_1)
{
 struct bcm_op *VAR_2 = (struct bcm_op *)VAR_1;
 struct bcm_msg_head VAR_3;


 VAR_3.opcode = VAR_0;
 VAR_3.flags = VAR_2->flags;
 VAR_3.count = VAR_2->count;
 VAR_3.ival1 = VAR_2->ival1;
 VAR_3.ival2 = VAR_2->ival2;
 VAR_3.can_id = VAR_2->can_id;
 VAR_3.nframes = 0;

 FUNC_0(VAR_2, &VAR_3, ((void*)0), 0);
}
