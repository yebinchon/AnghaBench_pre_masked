
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_2__ {int et_arg; int (* et_event_cb ) (TYPE_1__*,int ) ;scalar_t__ et_active; } ;
struct hpet_timer {scalar_t__ mode; scalar_t__ pcpu_cpu; int pcpu_misrouted; int num; int caps; int div; size_t pcpu_master; TYPE_1__ et; void* next; struct hpet_softc* sc; } ;
struct hpet_softc {int freq; struct hpet_timer* t; int mem_res; } ;
typedef scalar_t__ int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 void* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,void*) ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (char*,int,scalar_t__,scalar_t__) ;
 int FUNC_4 (TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_5(void *VAR_8)
{
 struct hpet_timer *VAR_9 = (struct hpet_timer *)VAR_8;
 struct hpet_timer *VAR_10;
 struct hpet_softc *VAR_11 = VAR_9->sc;
 uint32_t VAR_12;

 if (VAR_9->mode == VAR_6)
  return (VAR_1);

 if (VAR_9->pcpu_cpu >= 0 && VAR_9->pcpu_cpu != VAR_7) {
  if ((++VAR_9->pcpu_misrouted) % 32 == 0) {
   FUNC_3("HPET interrupt routed to the wrong CPU"
       " (timer %d CPU %d -> %d)!\n",
       VAR_9->num, VAR_9->pcpu_cpu, VAR_7);
  }





  if ((VAR_9->mode == VAR_5 &&
      (VAR_9->caps & VAR_3) == 0) ||
      VAR_9->mode == VAR_4) {
   VAR_9->next = FUNC_1(VAR_11->mem_res, VAR_2) +
       VAR_11->freq / 8;
   FUNC_2(VAR_11->mem_res, FUNC_0(VAR_9->num),
       VAR_9->next);
  }
  return (VAR_0);
 }
 if (VAR_9->mode == VAR_5 &&
     (VAR_9->caps & VAR_3) == 0) {
  VAR_9->next += VAR_9->div;
  VAR_12 = FUNC_1(VAR_11->mem_res, VAR_2);
  if ((int32_t)((VAR_12 + VAR_9->div / 2) - VAR_9->next) > 0)
   VAR_9->next = VAR_12 + VAR_9->div / 2;
  FUNC_2(VAR_11->mem_res,
      FUNC_0(VAR_9->num), VAR_9->next);
 } else if (VAR_9->mode == VAR_4)
  VAR_9->mode = VAR_6;
 VAR_10 = (VAR_9->pcpu_master < 0) ? VAR_9 : &VAR_11->t[VAR_9->pcpu_master];
 if (VAR_10->et.et_active)
  VAR_10->et.et_event_cb(&VAR_10->et, VAR_10->et.et_arg);
 return (VAR_0);
}
