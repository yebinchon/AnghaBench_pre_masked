
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_2__* vm_page_t ;
typedef TYPE_3__* pv_entry_t ;
struct TYPE_10__ {int pv_va; } ;
struct TYPE_8__ {int pv_list; } ;
struct TYPE_9__ {TYPE_1__ md; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int *) ;
 TYPE_3__* FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;

void
FUNC_3(vm_page_t VAR_2)
{
 pv_entry_t VAR_3;

 if (VAR_2 != ((void*)0)) {
  for (VAR_3 = FUNC_0(&VAR_2->md.pv_list); VAR_3;
      VAR_3 = FUNC_1(VAR_3, VAR_1)) {
   FUNC_2(VAR_3->pv_va, VAR_0);
  }
 }
}
