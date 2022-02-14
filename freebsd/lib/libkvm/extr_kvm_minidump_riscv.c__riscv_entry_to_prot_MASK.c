
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_prot_t ;
typedef int riscv_pt_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static vm_prot_t
FUNC_0(riscv_pt_entry_t VAR_5)
{
 vm_prot_t VAR_6 = VAR_3;

 if ((VAR_5 & VAR_0) != 0)
  VAR_6 |= VAR_4;
 if ((VAR_5 & VAR_1) != 0)
  VAR_6 |= VAR_2;
 return VAR_6;
}
