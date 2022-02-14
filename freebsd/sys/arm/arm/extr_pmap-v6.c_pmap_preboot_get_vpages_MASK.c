
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef int u_int ;


 int VAR_0 ;
 int FUNC_0 (void*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int,int) ;
 int VAR_1 ;

vm_offset_t
FUNC_3(u_int VAR_2)
{
 vm_paddr_t VAR_3;
 vm_offset_t VAR_4;


 VAR_3 = FUNC_1(VAR_2);


 VAR_4 = VAR_1;
 VAR_1 += VAR_2 * VAR_0;


 FUNC_2(VAR_3, VAR_4, VAR_2);
 FUNC_0((void *)VAR_4, VAR_2 * VAR_0);

 return (VAR_4);
}
