
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct hpet_timer {scalar_t__ irq; scalar_t__ mode; int next; int caps; int div; int num; } ;
struct hpet_softc {int num_timers; scalar_t__ legacy_route; int freq; int mem_res; struct hpet_timer* t; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ,int ,scalar_t__,int*,int*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ) ;
 struct hpet_softc* FUNC_8 (int ) ;
 int FUNC_9 (struct hpet_softc*) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_7)
{
 struct hpet_softc *VAR_8;
 struct hpet_timer *VAR_9;
 int VAR_10;


 VAR_8 = FUNC_8(VAR_7);
 FUNC_9(VAR_8);

 for (VAR_10 = 0; VAR_10 < VAR_8->num_timers; VAR_10++) {
  VAR_9 = &VAR_8->t[VAR_10];
  if (VAR_9->mode == VAR_6)
   continue;
  VAR_9->next = FUNC_5(VAR_8->mem_res, VAR_1);
  if (VAR_9->mode == VAR_5 &&
      (VAR_9->caps & VAR_2) != 0) {
   VAR_9->caps |= VAR_3;
   VAR_9->next += VAR_9->div;
   FUNC_6(VAR_8->mem_res, FUNC_0(VAR_9->num),
       VAR_9->caps | VAR_4);
   FUNC_6(VAR_8->mem_res, FUNC_1(VAR_9->num),
       VAR_9->next);
   FUNC_5(VAR_8->mem_res, FUNC_1(VAR_9->num));
   FUNC_6(VAR_8->mem_res, FUNC_1(VAR_9->num),
       VAR_9->div);
  } else {
   VAR_9->next += VAR_8->freq / 1024;
   FUNC_6(VAR_8->mem_res, FUNC_1(VAR_9->num),
       VAR_9->next);
  }
  FUNC_6(VAR_8->mem_res, VAR_0, 1 << VAR_9->num);
  FUNC_6(VAR_8->mem_res, FUNC_0(VAR_9->num), VAR_9->caps);
 }
 return (0);
}
