
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct trapframe {int srr1; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (uintptr_t) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static __inline int
FUNC_1(uintptr_t VAR_7)
{
 struct trapframe *VAR_8;
 vm_offset_t VAR_9;


 if (!FUNC_0(VAR_7) || (VAR_7 & 0xf) != 0)
  return (0);



 VAR_9 = *(vm_offset_t *)(VAR_7 + VAR_3);

 if ((VAR_9 & 3) || (VAR_9 < 0x100))
  return (0);





 if (VAR_9 + VAR_1 == (vm_offset_t) &VAR_6 ||
     VAR_9 + VAR_1 == (vm_offset_t) &VAR_5) {
  VAR_8 = (struct trapframe *)(VAR_7 + VAR_0);

  return ((VAR_8->srr1 & VAR_2) == 0);
 }

 return (1);
}
