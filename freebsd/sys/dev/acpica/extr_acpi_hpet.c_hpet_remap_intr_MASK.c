
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef scalar_t__ u_int ;
struct hpet_timer {scalar_t__ irq; } ;
struct hpet_softc {int num_timers; int mem_res; struct hpet_timer* t; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,scalar_t__,int *,int *) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ) ;
 struct hpet_softc* FUNC_5 (int ) ;
 int FUNC_6 (struct hpet_softc*) ;
 int FUNC_7 (struct hpet_softc*) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_1, device_t VAR_2, u_int VAR_3)
{
 struct hpet_softc *VAR_4 = FUNC_5(VAR_1);
 struct hpet_timer *VAR_5;
 uint64_t VAR_6;
 uint32_t VAR_7;
 int VAR_8, VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_4->num_timers; VAR_9++) {
  VAR_5 = &VAR_4->t[VAR_9];
  if (VAR_5->irq != VAR_3)
   continue;
  VAR_8 = FUNC_2(
      FUNC_4(FUNC_4(VAR_1)), VAR_1,
      VAR_3, &VAR_6, &VAR_7);
  if (VAR_8)
   return (VAR_8);
  FUNC_6(VAR_4);
  FUNC_3(VAR_4->mem_res, FUNC_0(VAR_9), VAR_6);
  FUNC_3(VAR_4->mem_res, FUNC_1(VAR_9), VAR_7);
  FUNC_7(VAR_4);
  return (0);
 }
 return (VAR_0);
}
