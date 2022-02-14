
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int vm_flags; } ;
struct TYPE_2__ {int mm; } ;


 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct vm_area_struct*,unsigned long,unsigned long) ;
 TYPE_1__* VAR_6 ;
 struct vm_area_struct* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct vm_area_struct*) ;
 int FUNC_4 (unsigned long,unsigned long) ;

long FUNC_5(struct vm_area_struct *VAR_7,
   unsigned long VAR_8, unsigned long VAR_9)
{
 int VAR_10 = (VAR_9 - VAR_8) / VAR_0;
 FUNC_0(!(VAR_7->vm_flags & VAR_3));




 if (VAR_7->vm_flags & (VAR_2 | VAR_4))
  goto no_mlock;

 if (!((VAR_7->vm_flags & (VAR_1 | VAR_5)) ||
   FUNC_3(VAR_7) ||
   VAR_7 == FUNC_2(VAR_6->mm))) {

  FUNC_1(VAR_7, VAR_8, VAR_9);


  return 0;
 }
 FUNC_4(VAR_8, VAR_9);

no_mlock:
 VAR_7->vm_flags &= ~VAR_3;
 return VAR_10;
}
