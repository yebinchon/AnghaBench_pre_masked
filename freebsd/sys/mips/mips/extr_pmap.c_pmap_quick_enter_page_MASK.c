
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef int vm_paddr_t ;
typedef void* vm_offset_t ;
typedef int pt_entry_t ;


 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int ) ;
 int VAR_4 ;
 int VAR_5 ;

vm_offset_t
FUNC_10(vm_page_t VAR_6)
{



 vm_offset_t VAR_7;
 vm_paddr_t VAR_8;
 pt_entry_t *VAR_9, VAR_10;

 VAR_8 = FUNC_7(VAR_6);

 if (FUNC_1(VAR_8)) {
  if (FUNC_9(VAR_6) != VAR_3)
   return (FUNC_3(VAR_8));
  else
   return (FUNC_2(VAR_8));
 }
 FUNC_8();
 VAR_7 = FUNC_4(VAR_4);
 VAR_9 = FUNC_4(VAR_5);

 FUNC_0(*VAR_9 == VAR_1, ("pmap_quick_enter_page: PTE busy"));

 VAR_10 = FUNC_6(VAR_8) | VAR_0 | VAR_2 | VAR_1;
 FUNC_5(VAR_10, VAR_8, VAR_6);
 *VAR_9 = VAR_10;

 return (VAR_7);

}
