
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef int u_int64_t ;


 int VAR_0 ;
 int FUNC_0 (void*,int) ;

__attribute__((used)) static u_int64_t
FUNC_1(vm_paddr_t *VAR_1, int VAR_2)
{
 u_int64_t VAR_3;

 VAR_3 = *VAR_1;
 FUNC_0((void *)VAR_3, VAR_2 * VAR_0);
 *VAR_1 += VAR_2 * VAR_0;
 return (VAR_3);
}
