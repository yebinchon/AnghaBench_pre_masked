
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct poll_table_struct {int dummy; } ;
struct file {int f_mode; } ;
struct TYPE_3__ {scalar_t__ locked; scalar_t__ count; scalar_t__ max_active; scalar_t__ block_size; scalar_t__ rear_size; int action_queue; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct file*,int *,struct poll_table_struct*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static unsigned int FUNC_2(struct file *VAR_4, struct poll_table_struct *VAR_5)
{
 unsigned int VAR_6 = 0;
 int VAR_7;

 if (VAR_3.locked == 0) {
  if ((VAR_7 = FUNC_1(&VAR_3)) < 0)
   return VAR_7;
  return 0;
 }
 if (VAR_4->f_mode & VAR_0 )
  FUNC_0(VAR_4, &VAR_3.action_queue, VAR_5);
 if (VAR_4->f_mode & VAR_0)
  if (VAR_3.count < VAR_3.max_active || VAR_3.block_size - VAR_3.rear_size > 0)
   VAR_6 |= VAR_1 | VAR_2;
 return VAR_6;

}
