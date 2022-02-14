
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef int u_int ;
struct pmap_pkru_range {int pkru_flags; int pkru_keyidx; } ;
typedef TYPE_1__* pmap_t ;
struct TYPE_4__ {scalar_t__ pm_type; int pm_pkru; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ,int ,struct pmap_pkru_range*) ;
 struct pmap_pkru_range* FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,struct pmap_pkru_range*) ;

__attribute__((used)) static int
FUNC_6(pmap_t VAR_10, vm_offset_t VAR_11, vm_offset_t VAR_12, u_int VAR_13,
    int VAR_14)
{
 struct pmap_pkru_range *VAR_15;
 int VAR_16;

 FUNC_1(VAR_10, VAR_5);
 FUNC_0(VAR_10->pm_type == VAR_7);
 FUNC_0((VAR_8 & VAR_2) != 0);
 if ((VAR_14 & VAR_0) != 0 &&
     !FUNC_2(&VAR_10->pm_pkru, VAR_11, VAR_12))
  return (VAR_3);
 VAR_15 = FUNC_4(VAR_9, VAR_6);
 if (VAR_15 == ((void*)0))
  return (VAR_4);
 VAR_15->pkru_keyidx = VAR_13;
 VAR_15->pkru_flags = VAR_14 & VAR_1;
 VAR_16 = FUNC_3(&VAR_10->pm_pkru, VAR_11, VAR_12, VAR_15);
 if (VAR_16 != 0)
  FUNC_5(VAR_9, VAR_15);
 return (VAR_16);
}
