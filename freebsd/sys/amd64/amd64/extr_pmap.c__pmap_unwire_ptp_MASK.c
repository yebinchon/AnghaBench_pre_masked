
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef scalar_t__ vm_offset_t ;
struct spglist {int dummy; } ;
typedef int pml4_entry_t ;
typedef TYPE_2__* pmap_t ;
typedef int pdp_entry_t ;
typedef scalar_t__ pd_entry_t ;
struct TYPE_15__ {int* pm_pml4u; } ;
struct TYPE_14__ {scalar_t__ pindex; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (TYPE_1__*,struct spglist*,int ) ;
 scalar_t__* FUNC_3 (TYPE_2__*,scalar_t__) ;
 int* FUNC_4 (TYPE_2__*,scalar_t__) ;
 int* FUNC_5 (TYPE_2__*,scalar_t__) ;
 size_t FUNC_6 (scalar_t__) ;
 int FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (TYPE_2__*,scalar_t__,TYPE_1__*,struct spglist*) ;

__attribute__((used)) static void
FUNC_9(pmap_t VAR_6, vm_offset_t VAR_7, vm_page_t VAR_8, struct spglist *VAR_9)
{

 FUNC_1(VAR_6, VAR_0);



 if (VAR_8->pindex >= (VAR_1 + VAR_2)) {

  pml4_entry_t *VAR_10;
  VAR_10 = FUNC_5(VAR_6, VAR_7);
  *VAR_10 = 0;
  if (VAR_6->pm_pml4u != ((void*)0) && VAR_7 <= VAR_5) {
   VAR_10 = &VAR_6->pm_pml4u[FUNC_6(VAR_7)];
   *VAR_10 = 0;
  }
 } else if (VAR_8->pindex >= VAR_1) {

  pdp_entry_t *VAR_11;
  VAR_11 = FUNC_4(VAR_6, VAR_7);
  *VAR_11 = 0;
 } else {

  pd_entry_t *VAR_12;
  VAR_12 = FUNC_3(VAR_6, VAR_7);
  *VAR_12 = 0;
 }
 FUNC_7(VAR_6, 1);
 if (VAR_8->pindex < VAR_1) {

  vm_page_t VAR_13;

  VAR_13 = FUNC_0(*FUNC_4(VAR_6, VAR_7) & VAR_3);
  FUNC_8(VAR_6, VAR_7, VAR_13, VAR_9);
 }
 if (VAR_8->pindex >= VAR_1 && VAR_8->pindex < (VAR_1 + VAR_2)) {

  vm_page_t VAR_14;

  VAR_14 = FUNC_0(*FUNC_5(VAR_6, VAR_7) & VAR_3);
  FUNC_8(VAR_6, VAR_7, VAR_14, VAR_9);
 }





 FUNC_2(VAR_8, VAR_9, VAR_4);
}
