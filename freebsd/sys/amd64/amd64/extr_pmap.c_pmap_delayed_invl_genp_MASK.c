
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef int u_long ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 int * VAR_1 ;

__attribute__((used)) static u_long *
FUNC_2(vm_page_t VAR_2)
{

 return (&VAR_1[FUNC_1(FUNC_0(VAR_2)) % VAR_0]);
}
