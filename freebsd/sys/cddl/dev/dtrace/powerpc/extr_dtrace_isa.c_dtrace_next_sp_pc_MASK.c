
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
struct trapframe {uintptr_t* fixreg; uintptr_t srr0; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static __inline void
FUNC_0(uintptr_t VAR_6, uintptr_t *VAR_7, uintptr_t *VAR_8)
{
 vm_offset_t VAR_9;
 struct trapframe *VAR_10;




 VAR_9 = *(vm_offset_t *)(VAR_6 + VAR_2);






 if ((VAR_9 + VAR_1 == (vm_offset_t) &VAR_5 ||
     VAR_9 + VAR_1 == (vm_offset_t) &VAR_4)) {

  VAR_10 = (struct trapframe *)(VAR_6 + VAR_0);

  if (VAR_7 != ((void*)0))
   *VAR_7 = VAR_10->fixreg[1];
  if (VAR_8 != ((void*)0))
   *VAR_8 = VAR_10->srr0;
  return;
 }

 if (VAR_7 != ((void*)0))
  *VAR_7 = *(uintptr_t *)VAR_6;
 if (VAR_8 != ((void*)0))
  *VAR_8 = VAR_9;
}
