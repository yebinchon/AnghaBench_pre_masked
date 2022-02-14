
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int dummy; } ;
struct TYPE_2__ {int (* file_mmap ) (struct file*,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long) ;} ;


 int FUNC_0 (struct file*,unsigned long) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (struct file*,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long) ;

int FUNC_2(struct file *VAR_1, unsigned long VAR_2,
   unsigned long VAR_3, unsigned long VAR_4,
   unsigned long VAR_5, unsigned long VAR_6)
{
 int VAR_7;

 VAR_7 = VAR_0->file_mmap(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 if (VAR_7)
  return VAR_7;
 return FUNC_0(VAR_1, VAR_3);
}
