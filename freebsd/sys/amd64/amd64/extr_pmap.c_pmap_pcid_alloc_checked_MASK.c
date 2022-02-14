
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
typedef size_t u_int ;
typedef TYPE_2__* pmap_t ;
struct TYPE_7__ {TYPE_1__* pm_pcids; } ;
struct TYPE_6__ {scalar_t__ pm_pcid; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_1 (TYPE_2__*,size_t) ;

__attribute__((used)) static uint64_t
FUNC_2(pmap_t VAR_3, u_int VAR_4)
{
 uint64_t VAR_5;

 VAR_5 = FUNC_1(VAR_3, VAR_4);
 FUNC_0(VAR_3->pm_pcids[VAR_4].pm_pcid < VAR_1,
     ("pmap %p cpu %d pcid %#x", VAR_3, VAR_4,
     VAR_3->pm_pcids[VAR_4].pm_pcid));
 FUNC_0(VAR_3->pm_pcids[VAR_4].pm_pcid != VAR_0 ||
     VAR_3 == VAR_2,
     ("non-kernel pmap pmap %p cpu %d pcid %#x",
     VAR_3, VAR_4, VAR_3->pm_pcids[VAR_4].pm_pcid));
 return (VAR_5);
}
