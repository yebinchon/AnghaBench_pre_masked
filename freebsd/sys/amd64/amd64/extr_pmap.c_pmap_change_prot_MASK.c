
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef int vm_prot_t ;
typedef scalar_t__ vm_offset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__,int ,int ,int,int ) ;

int
FUNC_3(vm_offset_t VAR_4, vm_size_t VAR_5, vm_prot_t VAR_6)
{
 int VAR_7;


 if (VAR_4 < VAR_2)
  return (VAR_0);

 FUNC_0(VAR_3);
 VAR_7 = FUNC_2(VAR_4, VAR_5, VAR_6, -1,
     VAR_1);
 FUNC_1(VAR_3);
 return (VAR_7);
}
