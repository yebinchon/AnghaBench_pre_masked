
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct hpet_softc {int useirq; int num_timers; int * t; int mem_res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(void *VAR_3)
{
 struct hpet_softc *VAR_4 = (struct hpet_softc *)VAR_3;
 int VAR_5;
 uint32_t VAR_6;

 VAR_6 = FUNC_0(VAR_4->mem_res, VAR_2);
 if (VAR_6) {
  FUNC_1(VAR_4->mem_res, VAR_2, VAR_6);
  VAR_6 &= VAR_4->useirq;
  for (VAR_5 = 0; VAR_5 < VAR_4->num_timers; VAR_5++) {
   if ((VAR_6 & (1 << VAR_5)) == 0)
    continue;
   FUNC_2(&VAR_4->t[VAR_5]);
  }
  return (VAR_0);
 }
 return (VAR_1);
}
