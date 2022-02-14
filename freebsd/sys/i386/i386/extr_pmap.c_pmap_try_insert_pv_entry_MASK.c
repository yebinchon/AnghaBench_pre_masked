
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_2__* vm_page_t ;
typedef int vm_offset_t ;
typedef TYPE_3__* pv_entry_t ;
typedef int pmap_t ;
typedef int boolean_t ;
struct TYPE_9__ {int pv_va; } ;
struct TYPE_7__ {int pv_list; } ;
struct TYPE_8__ {TYPE_1__ md; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,TYPE_3__*,int ) ;
 int VAR_3 ;
 TYPE_3__* FUNC_2 (int ,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static boolean_t
FUNC_4(pmap_t VAR_8, vm_offset_t VAR_9, vm_page_t VAR_10)
{
 pv_entry_t VAR_11;

 FUNC_3(&VAR_7, VAR_2);
 FUNC_0(VAR_8, VAR_1);
 if (VAR_4 < VAR_5 &&
     (VAR_11 = FUNC_2(VAR_8, VAR_3)) != ((void*)0)) {
  VAR_11->pv_va = VAR_9;
  FUNC_1(&VAR_10->md.pv_list, VAR_11, VAR_6);
  return (VAR_3);
 } else
  return (VAR_0);
}
