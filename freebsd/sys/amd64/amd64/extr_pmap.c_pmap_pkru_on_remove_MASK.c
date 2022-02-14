
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef TYPE_1__* pmap_t ;
struct TYPE_4__ {scalar_t__ pm_type; int pm_pkru; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(pmap_t VAR_5, vm_offset_t VAR_6, vm_offset_t VAR_7)
{

 FUNC_0(VAR_5, VAR_1);
 if (VAR_5->pm_type == VAR_2 &&
     (VAR_3 & VAR_0) != 0) {
  FUNC_1(&VAR_5->pm_pkru, VAR_6, VAR_7,
      VAR_4);
 }
}
