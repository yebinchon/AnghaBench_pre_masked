
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef TYPE_2__* vm_page_t ;
typedef scalar_t__ vm_offset_t ;
typedef int u_int ;
typedef TYPE_3__* pmap_t ;
typedef int * pd_entry_t ;
struct TYPE_13__ {int resident_count; } ;
struct TYPE_15__ {TYPE_1__ pm_stats; int ** pm_segtab; } ;
struct TYPE_14__ {int ref_count; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 TYPE_2__* FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (TYPE_2__*) ;
 TYPE_2__* FUNC_6 (unsigned int,int) ;
 int FUNC_7 (int) ;
 int VAR_6 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;

__attribute__((used)) static vm_page_t
FUNC_12(pmap_t VAR_7, unsigned VAR_8, u_int VAR_9)
{
 vm_offset_t VAR_10;
 vm_page_t VAR_11;
 int VAR_12;




 VAR_12 = VAR_5;
 if ((VAR_11 = FUNC_6(VAR_8, VAR_12)) == ((void*)0)) {
  if ((VAR_9 & VAR_3) == 0) {
   FUNC_4(VAR_7);
   FUNC_9(&VAR_6);
   FUNC_7(VAR_12);
   FUNC_8(&VAR_6);
   FUNC_3(VAR_7);
  }





  return (((void*)0));
 }





 VAR_10 = FUNC_1(FUNC_5(VAR_11));
 VAR_7->pm_segtab[VAR_8] = (pd_entry_t)VAR_10;

 VAR_7->pm_stats.resident_count++;
 return (VAR_11);
}
