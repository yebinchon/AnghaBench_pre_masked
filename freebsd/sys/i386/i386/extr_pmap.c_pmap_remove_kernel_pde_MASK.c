
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef int pmap_t ;
typedef int pd_entry_t ;
struct TYPE_4__ {scalar_t__ valid; } ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int) ;
 TYPE_1__* FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,int*,int) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void
FUNC_11(pmap_t VAR_7, pd_entry_t *VAR_8, vm_offset_t VAR_9)
{
 pd_entry_t VAR_10;
 vm_paddr_t VAR_11;
 vm_page_t VAR_12;

 FUNC_0(VAR_7, VAR_1);
 VAR_12 = FUNC_7(VAR_7, VAR_9);
 if (VAR_12 == ((void*)0))
  FUNC_4("pmap_remove_kernel_pde: Missing pt page.");

 VAR_11 = FUNC_1(VAR_12);
 VAR_10 = VAR_11 | VAR_3 | VAR_2 | VAR_4 | VAR_5;





 if (VAR_12->valid != 0)
  FUNC_3((void *)&VAR_0[FUNC_2(FUNC_9(VAR_9))]);




 if (VAR_6)
  FUNC_8(VAR_7, VAR_9, VAR_8, VAR_10);
 else
  FUNC_6(VAR_9, VAR_10);




 FUNC_5(VAR_7, (vm_offset_t)FUNC_10(VAR_9));
}
