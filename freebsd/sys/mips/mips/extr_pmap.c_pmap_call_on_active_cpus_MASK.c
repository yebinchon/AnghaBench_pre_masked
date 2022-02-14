
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* pmap_t ;
struct TYPE_6__ {TYPE_1__* pm_asid; int pm_active; } ;
struct TYPE_5__ {scalar_t__ gen; } ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static __inline void
FUNC_3(pmap_t VAR_0, void (*VAR_1)(void *), void *VAR_2)
{
 int VAR_3;

 if (FUNC_2(VAR_0)) {
  VAR_1(VAR_2);
  return;
 }
 VAR_3 = FUNC_1(VAR_3);
 if (!FUNC_0(VAR_3, &VAR_0->pm_active))
  VAR_0->pm_asid[VAR_3].gen = 0;
 else
  VAR_1(VAR_2);
}
