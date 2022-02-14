
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef size_t u_int ;
typedef TYPE_2__* pmap_t ;
struct TYPE_5__ {TYPE_1__* pm_pcids; } ;
struct TYPE_4__ {scalar_t__ pm_pcid; int pm_gen; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static uint64_t
FUNC_4(pmap_t VAR_7, u_int VAR_8)
{
 uint32_t VAR_9, VAR_10, VAR_11;

 FUNC_0(VAR_4);
 VAR_9 = FUNC_2(VAR_5);
 if (VAR_7->pm_pcids[VAR_8].pm_pcid == VAR_1)
  return (VAR_6 ? 0 : VAR_0);
 if (VAR_7->pm_pcids[VAR_8].pm_gen == VAR_9)
  return (VAR_0);
 VAR_11 = FUNC_2(VAR_11);
 FUNC_1((!VAR_6 && VAR_11 <= VAR_2) ||
     (VAR_6 && VAR_11 <= VAR_3),
     ("cpu %d pcid_next %#x", VAR_8, VAR_11));
 if ((!VAR_6 && VAR_11 == VAR_2) ||
     (VAR_6 && VAR_11 == VAR_3)) {
  VAR_10 = VAR_9 + 1;
  if (VAR_10 == 0)
   VAR_10 = 1;
  FUNC_3(VAR_5, VAR_10);
  VAR_11 = VAR_1 + 1;
 } else {
  VAR_10 = VAR_9;
 }
 VAR_7->pm_pcids[VAR_8].pm_pcid = VAR_11;
 VAR_7->pm_pcids[VAR_8].pm_gen = VAR_10;
 FUNC_3(VAR_11, VAR_11 + 1);
 return (0);
}
