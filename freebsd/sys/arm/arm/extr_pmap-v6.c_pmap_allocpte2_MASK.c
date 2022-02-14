
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int * vm_page_t ;
typedef int vm_offset_t ;
typedef int u_int ;
typedef int pt1_entry_t ;
typedef TYPE_1__* pmap_t ;
struct TYPE_5__ {int * pm_pt1; } ;


 int * FUNC_0 (int ) ;
 int VAR_0 ;
 int * FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (TYPE_1__*,int *,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static vm_page_t
FUNC_9(pmap_t VAR_1, vm_offset_t VAR_2, u_int VAR_3)
{
 u_int VAR_4;
 pt1_entry_t *VAR_5, VAR_6;
 vm_page_t VAR_7;

 VAR_4 = FUNC_4(VAR_2);
retry:
 VAR_5 = VAR_1->pm_pt1 + VAR_4;
 VAR_6 = FUNC_8(VAR_5);





 if (FUNC_6(VAR_6)) {
  (void)FUNC_2(VAR_1, VAR_5, VAR_2);






  VAR_6 = FUNC_8(VAR_5);
 }





 if (FUNC_5(VAR_6)) {
  VAR_7 = FUNC_0(FUNC_7(VAR_6));
  FUNC_3(VAR_7, VAR_4);
 } else {




  VAR_7 = FUNC_1(VAR_1, VAR_2, VAR_3);
  if (VAR_7 == ((void*)0) && (VAR_3 & VAR_0) == 0)
   goto retry;
 }

 return (VAR_7);
}
