
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef scalar_t__ vm_pindex_t ;
typedef TYPE_1__* vm_page_t ;
typedef scalar_t__ vm_offset_t ;
typedef int pmap_t ;
struct TYPE_8__ {scalar_t__ pindex; int object; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_0 ;
 TYPE_1__* FUNC_5 (int ,scalar_t__,TYPE_1__*,int ,TYPE_1__*) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void
FUNC_9(pmap_t VAR_2, vm_offset_t VAR_3, vm_offset_t VAR_4,
    vm_page_t VAR_5, vm_prot_t VAR_6)
{
 vm_page_t VAR_7, VAR_8;
 vm_pindex_t VAR_9, VAR_10;

 FUNC_3(VAR_5->object);

 VAR_10 = FUNC_4(VAR_4 - VAR_3);
 VAR_8 = ((void*)0);
 VAR_7 = VAR_5;
 FUNC_7(&VAR_1);
 FUNC_0(VAR_2);
 while (VAR_7 != ((void*)0) && (VAR_9 = VAR_7->pindex - VAR_5->pindex) < VAR_10) {
  VAR_8 = FUNC_5(VAR_2, VAR_3 + FUNC_6(VAR_9), VAR_7,
      VAR_6, VAR_8);
  VAR_7 = FUNC_2(VAR_7, VAR_0);
 }
 FUNC_8(&VAR_1);
  FUNC_1(VAR_2);
}
