
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int vm_offset_t ;
struct spglist {int dummy; } ;
typedef int pmap_t ;
typedef int pd_entry_t ;
struct TYPE_6__ {scalar_t__ pindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*,struct spglist*,int ) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int ,int ) ;
 int* FUNC_5 (int ,int ) ;
 int* FUNC_6 (int ,int ) ;
 int* FUNC_7 (int ,int ) ;
 int FUNC_8 (int*) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int ,TYPE_1__*,struct spglist*) ;

__attribute__((used)) static void
FUNC_11(pmap_t VAR_5, vm_offset_t VAR_6, vm_page_t VAR_7, struct spglist *VAR_8)
{

 FUNC_1(VAR_5, VAR_1);



 if (VAR_7->pindex >= (VAR_3 + VAR_2)) {

  pd_entry_t *VAR_9;

  VAR_9 = FUNC_5(VAR_5, VAR_6);
  FUNC_3(VAR_9);
 } else if (VAR_7->pindex >= VAR_3) {

  pd_entry_t *VAR_10;

  VAR_10 = FUNC_6(VAR_5, VAR_6);
  FUNC_3(VAR_10);
 } else {

  pd_entry_t *VAR_11;

  VAR_11 = FUNC_7(VAR_5, VAR_6);
  FUNC_3(VAR_11);
 }
 FUNC_9(VAR_5, 1);
 if (VAR_7->pindex < VAR_3) {

  pd_entry_t *VAR_12, VAR_13;
  vm_page_t VAR_14;

  VAR_12 = FUNC_6(VAR_5, VAR_6);
  VAR_13 = FUNC_8(VAR_12);
  VAR_14 = FUNC_0(VAR_13 & ~VAR_0);
  FUNC_10(VAR_5, VAR_6, VAR_14, VAR_8);
 } else if (VAR_7->pindex < (VAR_3 + VAR_2)) {

  pd_entry_t *VAR_15, VAR_16;
  vm_page_t VAR_17;

  VAR_15 = FUNC_5(VAR_5, VAR_6);
  VAR_16 = FUNC_8(VAR_15);
  VAR_17 = FUNC_0(VAR_16 & ~VAR_0);
  FUNC_10(VAR_5, VAR_6, VAR_17, VAR_8);
 }
 FUNC_4(VAR_5, VAR_6);





 FUNC_2(VAR_7, VAR_8, VAR_4);
}
