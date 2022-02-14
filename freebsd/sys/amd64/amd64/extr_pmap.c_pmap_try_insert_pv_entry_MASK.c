
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_2__* vm_page_t ;
typedef int vm_offset_t ;
struct rwlock {int dummy; } ;
typedef TYPE_3__* pv_entry_t ;
typedef int pmap_t ;
typedef int boolean_t ;
struct TYPE_10__ {int pv_va; } ;
struct TYPE_8__ {int pv_gen; int pv_list; } ;
struct TYPE_9__ {TYPE_1__ md; } ;


 int FUNC_0 (struct rwlock**,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,TYPE_3__*,int ) ;
 int VAR_2 ;
 TYPE_3__* FUNC_3 (int ,int *) ;
 int VAR_3 ;

__attribute__((used)) static boolean_t
FUNC_4(pmap_t VAR_4, vm_offset_t VAR_5, vm_page_t VAR_6,
    struct rwlock **VAR_7)
{
 pv_entry_t VAR_8;

 FUNC_1(VAR_4, VAR_1);

 if ((VAR_8 = FUNC_3(VAR_4, ((void*)0))) != ((void*)0)) {
  VAR_8->pv_va = VAR_5;
  FUNC_0(VAR_7, VAR_6);
  FUNC_2(&VAR_6->md.pv_list, VAR_8, VAR_3);
  VAR_6->md.pv_gen++;
  return (VAR_2);
 } else
  return (VAR_0);
}
