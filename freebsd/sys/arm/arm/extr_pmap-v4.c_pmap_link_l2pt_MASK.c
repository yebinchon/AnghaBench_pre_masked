
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t vm_offset_t ;
typedef size_t u_int ;
struct pv_addr {int pv_pa; int pv_va; } ;
typedef int pd_entry_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int *,struct pv_addr*,int ) ;
 int VAR_3 ;
 int FUNC_3 (char*,int,int) ;
 int VAR_4 ;

void
FUNC_4(vm_offset_t VAR_5, vm_offset_t VAR_6, struct pv_addr *VAR_7)
{
 pd_entry_t *VAR_8 = (pd_entry_t *) VAR_5, VAR_9;
 u_int VAR_10 = VAR_6 >> VAR_1;

 VAR_9 = FUNC_0(VAR_2) | VAR_0;





 VAR_8[VAR_10 + 0] = VAR_9 | (VAR_7->pv_pa + 0x000);

 FUNC_1(&VAR_8[VAR_10]);

 FUNC_2(&VAR_3, VAR_7, VAR_4);


}
