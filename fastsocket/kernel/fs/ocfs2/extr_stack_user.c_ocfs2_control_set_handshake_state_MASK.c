
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_control_private {int op_state; } ;
struct file {struct ocfs2_control_private* private_data; } ;



__attribute__((used)) static inline void FUNC_0(struct file *VAR_0,
           int VAR_1)
{
 struct ocfs2_control_private *VAR_2 = VAR_0->private_data;
 VAR_2->op_state = VAR_1;
}
