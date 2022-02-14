
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct TYPE_2__ {int (* file_mprotect ) (struct vm_area_struct*,unsigned long,unsigned long) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct vm_area_struct*,unsigned long,unsigned long) ;

int FUNC_1(struct vm_area_struct *VAR_1, unsigned long VAR_2,
       unsigned long VAR_3)
{
 return VAR_0->file_mprotect(VAR_1, VAR_2, VAR_3);
}
