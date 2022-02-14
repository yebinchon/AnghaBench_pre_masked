
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
struct TYPE_2__ {scalar_t__ pv_kva; int pv_list; } ;
struct vm_page {TYPE_1__ md; } ;
struct pv_entry {scalar_t__ pv_pmap; scalar_t__ pv_va; } ;
typedef scalar_t__ pmap_t ;


 int VAR_0 ;
 struct pv_entry* FUNC_0 (int *) ;
 struct pv_entry* FUNC_1 (struct pv_entry*,int ) ;
 int FUNC_2 (struct vm_page*,scalar_t__,struct pv_entry*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static struct pv_entry *
FUNC_4(struct vm_page *VAR_3, pmap_t VAR_4, vm_offset_t VAR_5)
{
 struct pv_entry *VAR_6;

 FUNC_3(&VAR_2, VAR_0);
 VAR_6 = FUNC_0(&VAR_3->md.pv_list);

 while (VAR_6) {
  if (VAR_6->pv_pmap == VAR_4 && VAR_6->pv_va == VAR_5) {
   FUNC_2(VAR_3, VAR_4, VAR_6);
   break;
  }
  VAR_6 = FUNC_1(VAR_6, VAR_1);
 }

 if (VAR_6 == ((void*)0) && VAR_3->md.pv_kva == VAR_5)
  VAR_3->md.pv_kva = 0;

 return(VAR_6);
}
