
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef int pt_entry_t ;
typedef scalar_t__ pd_entry_t ;
struct TYPE_5__ {TYPE_1__* pm_asid; int pm_pvchunk; int pm_active; scalar_t__* pm_segtab; } ;
struct TYPE_4__ {scalar_t__ gen; int asid; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int VAR_6 ;
 int FUNC_3 (int,int) ;
 TYPE_2__* VAR_7 ;
 scalar_t__* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6(void)
{
 int VAR_11, VAR_12;
 vm_offset_t VAR_13;
 pt_entry_t *VAR_14;
 VAR_8 = (pd_entry_t *)FUNC_5(VAR_3);
 VAR_10 = VAR_0;
 VAR_13 = FUNC_5(VAR_3 * VAR_10);
 for (VAR_11 = 0, VAR_14 = (pt_entry_t *)VAR_13; VAR_11 < (VAR_10 * VAR_2); VAR_11++, VAR_14++)
  *VAR_14 = VAR_5;
 for (VAR_11 = 0, VAR_12 = FUNC_4(VAR_6); VAR_11 < VAR_10; VAR_11++, VAR_12++)
  VAR_8[VAR_12] = (pd_entry_t)(VAR_13 + (VAR_11 * VAR_3));


 FUNC_1(VAR_7);
 VAR_7->pm_segtab = VAR_8;
 FUNC_0(&VAR_7->pm_active);
 FUNC_2(&VAR_7->pm_pvchunk);
 VAR_7->pm_asid[0].asid = VAR_4;
 VAR_7->pm_asid[0].gen = 0;
 VAR_9 += VAR_10 * VAR_2 * VAR_3;
}
