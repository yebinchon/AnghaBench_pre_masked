
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef int vm_offset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;

void
FUNC_3(vm_offset_t VAR_4, vm_size_t VAR_5)
{

 vm_offset_t VAR_6, VAR_7;


 if (VAR_4 >= VAR_1 && VAR_4 <= VAR_0)
  return;

 VAR_6 = FUNC_2(VAR_4);
 VAR_7 = VAR_4 & VAR_2;
 VAR_5 = FUNC_1(VAR_5 + VAR_7, VAR_3);
 FUNC_0(VAR_6, VAR_5);

}
