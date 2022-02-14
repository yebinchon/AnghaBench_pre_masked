
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct can_frame {int can_dlc; } ;
struct bcm_op {int frames_filtered; int frames_abs; int can_id; int ival2; int ival1; int count; int flags; } ;
struct bcm_msg_head {int nframes; int can_id; int ival2; int ival1; int count; int flags; int opcode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bcm_op*,struct bcm_msg_head*,struct can_frame*,int) ;

__attribute__((used)) static void FUNC_1(struct bcm_op *VAR_4, struct can_frame *VAR_5)
{
 struct bcm_msg_head VAR_6;


 VAR_4->frames_filtered++;


 if (VAR_4->frames_filtered > VAR_3/100)
  VAR_4->frames_filtered = VAR_4->frames_abs = 0;


 VAR_5->can_dlc &= (VAR_0|VAR_2);

 VAR_6.opcode = VAR_1;
 VAR_6.flags = VAR_4->flags;
 VAR_6.count = VAR_4->count;
 VAR_6.ival1 = VAR_4->ival1;
 VAR_6.ival2 = VAR_4->ival2;
 VAR_6.can_id = VAR_4->can_id;
 VAR_6.nframes = 1;

 FUNC_0(VAR_4, &VAR_6, VAR_5, 1);
}
