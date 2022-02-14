
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct ftrace_buffer_info {scalar_t__ spare; TYPE_1__* tr; } ;
struct file {struct ftrace_buffer_info* private_data; } ;
struct TYPE_2__ {int buffer; } ;


 int FUNC_0 (struct ftrace_buffer_info*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0, struct file *VAR_1)
{
 struct ftrace_buffer_info *VAR_2 = VAR_1->private_data;

 if (VAR_2->spare)
  FUNC_1(VAR_2->tr->buffer, VAR_2->spare);
 FUNC_0(VAR_2);

 return 0;
}
