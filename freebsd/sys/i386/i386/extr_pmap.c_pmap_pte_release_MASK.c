
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int pt_entry_t ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static __inline void
FUNC_1(pt_entry_t *VAR_3)
{

 if ((pt_entry_t *)((vm_offset_t)VAR_3 & ~VAR_1) == VAR_0)
  FUNC_0(&VAR_2);
}
