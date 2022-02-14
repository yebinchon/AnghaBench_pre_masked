
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int u_int64_t ;
typedef int pd_entry_t ;


 int FUNC_0 (int,char*) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static __inline pd_entry_t *
FUNC_1(vm_offset_t VAR_6)
{
 u_int64_t VAR_7 = ((1ul << (VAR_0 + VAR_1 + VAR_2)) - 1);

 FUNC_0(VAR_6 >= VAR_5, ("vtopde on a uva/gpa 0x%0lx", VAR_6));

 return (VAR_4 + ((VAR_6 >> VAR_3) & VAR_7));
}
