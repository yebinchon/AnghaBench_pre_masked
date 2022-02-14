
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef int pt_entry_t ;
typedef TYPE_1__* pmap_t ;
typedef int pd_entry_t ;
struct TYPE_4__ {int * pm_l0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (TYPE_1__*,int ) ;
 int * FUNC_1 (int *,int ) ;
 int * FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;

bool
FUNC_5(pmap_t VAR_6, vm_offset_t VAR_7, pd_entry_t **VAR_8, pd_entry_t **VAR_9,
    pd_entry_t **VAR_10, pt_entry_t **VAR_11)
{
 pd_entry_t *VAR_12, *VAR_13, *VAR_14;

 if (VAR_6->pm_l0 == ((void*)0))
  return (0);

 VAR_12 = FUNC_0(VAR_6, VAR_7);
 *VAR_8 = VAR_12;

 if ((FUNC_4(VAR_12) & VAR_0) != VAR_1)
  return (0);

 VAR_13 = FUNC_1(VAR_12, VAR_7);
 *VAR_9 = VAR_13;

 if ((FUNC_4(VAR_13) & VAR_0) == VAR_2) {
  *VAR_10 = ((void*)0);
  *VAR_11 = ((void*)0);
  return (1);
 }

 if ((FUNC_4(VAR_13) & VAR_0) != VAR_3)
  return (0);

 VAR_14 = FUNC_2(VAR_13, VAR_7);
 *VAR_10 = VAR_14;

 if ((FUNC_4(VAR_14) & VAR_0) == VAR_4) {
  *VAR_11 = ((void*)0);
  return (1);
 }

 if ((FUNC_4(VAR_14) & VAR_0) != VAR_5)
  return (0);

 *VAR_11 = FUNC_3(VAR_14, VAR_7);

 return (1);
}
