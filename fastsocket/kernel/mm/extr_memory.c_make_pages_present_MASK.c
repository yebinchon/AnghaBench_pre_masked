
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {int vm_flags; unsigned long vm_end; } ;
struct TYPE_3__ {int mm; } ;


 int FUNC_0 (int) ;
 unsigned long FUNC_1 (unsigned long,unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 struct vm_area_struct* FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (TYPE_1__*,int ,unsigned long,int,int,int ,int *,int *) ;

int FUNC_4(unsigned long VAR_6, unsigned long VAR_7)
{
 int VAR_8, VAR_9, VAR_10;
 struct vm_area_struct * VAR_11;

 VAR_11 = FUNC_2(VAR_5->mm, VAR_6);
 if (!VAR_11)
  return -VAR_1;





 VAR_10 = (VAR_11->vm_flags & (VAR_4 | VAR_3)) == VAR_4;
 FUNC_0(VAR_6 >= VAR_7);
 FUNC_0(VAR_7 > VAR_11->vm_end);
 VAR_9 = FUNC_1(VAR_7, VAR_2) - VAR_6/VAR_2;
 VAR_8 = FUNC_3(VAR_5, VAR_5->mm, VAR_6,
   VAR_9, VAR_10, 0, ((void*)0), ((void*)0));
 if (VAR_8 < 0)
  return VAR_8;
 return VAR_8 == VAR_9 ? 0 : -VAR_0;
}
