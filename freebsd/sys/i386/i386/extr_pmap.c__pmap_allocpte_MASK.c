
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_2__* vm_page_t ;
typedef int vm_paddr_t ;
typedef size_t u_int ;
typedef TYPE_3__* pmap_t ;
typedef scalar_t__ pd_entry_t ;
struct TYPE_11__ {int resident_count; } ;
struct TYPE_13__ {scalar_t__* pm_pdir; TYPE_1__ pm_stats; } ;
struct TYPE_12__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_10 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_2__* FUNC_6 (int *,size_t,int) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static vm_page_t
FUNC_8(pmap_t VAR_11, u_int VAR_12, u_int VAR_13)
{
 vm_paddr_t VAR_14;
 vm_page_t VAR_15;




 if ((VAR_15 = FUNC_6(((void*)0), VAR_12, VAR_7 |
     VAR_8 | VAR_9)) == ((void*)0)) {
  if ((VAR_13 & VAR_6) == 0) {
   FUNC_1(VAR_11);
   FUNC_5(&VAR_10);
   FUNC_7(((void*)0));
   FUNC_4(&VAR_10);
   FUNC_0(VAR_11);
  }





  return (((void*)0));
 }
 if ((VAR_15->flags & VAR_5) == 0)
  FUNC_3(VAR_15);






 VAR_11->pm_stats.resident_count++;

 VAR_14 = FUNC_2(VAR_15);
 VAR_11->pm_pdir[VAR_12] =
  (pd_entry_t) (VAR_14 | VAR_3 | VAR_2 | VAR_4 | VAR_0 | VAR_1);

 return (VAR_15);
}
