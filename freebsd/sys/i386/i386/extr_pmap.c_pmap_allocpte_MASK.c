
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef size_t vm_offset_t ;
typedef size_t u_int ;
typedef TYPE_2__* pmap_t ;
typedef int pd_entry_t ;
struct TYPE_10__ {int* pm_pdir; } ;
struct TYPE_9__ {int ref_count; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int) ;
 size_t VAR_3 ;
 TYPE_1__* FUNC_1 (TYPE_2__*,size_t,size_t) ;
 int FUNC_2 (TYPE_2__*,int*,size_t) ;

__attribute__((used)) static vm_page_t
FUNC_3(pmap_t VAR_4, vm_offset_t VAR_5, u_int VAR_6)
{
 u_int VAR_7;
 pd_entry_t VAR_8;
 vm_page_t VAR_9;




 VAR_7 = VAR_5 >> VAR_0;
retry:



 VAR_8 = VAR_4->pm_pdir[VAR_7];





 if (VAR_8 & VAR_2) {
  (void)FUNC_2(VAR_4, &VAR_4->pm_pdir[VAR_7], VAR_5);
  VAR_8 = VAR_4->pm_pdir[VAR_7];
 }





 if (VAR_8) {
  VAR_9 = FUNC_0(VAR_8 & VAR_1);
  VAR_9->ref_count++;
 } else {




  VAR_9 = FUNC_1(VAR_4, VAR_7, VAR_6);
  if (VAR_9 == ((void*)0) && (VAR_6 & VAR_3) == 0)
   goto retry;
 }
 return (VAR_9);
}
