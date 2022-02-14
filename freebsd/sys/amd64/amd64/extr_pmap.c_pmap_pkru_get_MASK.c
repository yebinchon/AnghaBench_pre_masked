
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
struct pmap_pkru_range {int pkru_keyidx; } ;
typedef int pt_entry_t ;
typedef TYPE_1__* pmap_t ;
struct TYPE_4__ {scalar_t__ pm_type; int pm_pkru; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 struct pmap_pkru_range* FUNC_2 (int *,scalar_t__) ;

__attribute__((used)) static pt_entry_t
FUNC_3(pmap_t VAR_5, vm_offset_t VAR_6)
{
 struct pmap_pkru_range *VAR_7;

 FUNC_0(VAR_5, VAR_1);
 if (VAR_5->pm_type != VAR_2 ||
     (VAR_4 & VAR_0) == 0 ||
     VAR_6 >= VAR_3)
  return (0);
 VAR_7 = FUNC_2(&VAR_5->pm_pkru, VAR_6);
 if (VAR_7 != ((void*)0))
  return (FUNC_1(VAR_7->pkru_keyidx));
 return (0);
}
