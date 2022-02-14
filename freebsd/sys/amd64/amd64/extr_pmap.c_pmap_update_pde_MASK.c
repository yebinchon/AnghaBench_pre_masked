
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef TYPE_2__* pmap_t ;
typedef int pd_entry_t ;
struct TYPE_9__ {TYPE_1__* pm_pcids; } ;
struct TYPE_8__ {scalar_t__ pm_gen; } ;


 TYPE_2__* FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 (TYPE_2__*,int *,int ) ;

__attribute__((used)) static void
FUNC_3(pmap_t VAR_2, vm_offset_t VAR_3, pd_entry_t *VAR_4, pd_entry_t VAR_5)
{

 FUNC_2(VAR_2, VAR_4, VAR_5);
 if (VAR_2 == VAR_1 || VAR_2 == FUNC_0(VAR_0))
  FUNC_1(VAR_2, VAR_3, VAR_5);
 else
  VAR_2->pm_pcids[0].pm_gen = 0;
}
