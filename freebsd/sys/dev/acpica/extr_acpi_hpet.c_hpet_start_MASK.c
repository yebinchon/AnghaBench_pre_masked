
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct hpet_timer {scalar_t__ pcpu_master; size_t* pcpu_slaves; scalar_t__ mode; int div; scalar_t__ irq; int num; int caps; int next; struct hpet_softc* sc; } ;
struct hpet_softc {int freq; int mem_res; struct hpet_timer* t; } ;
struct eventtimer {scalar_t__ et_priv; } ;
typedef int sbintime_t ;
typedef scalar_t__ int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 size_t VAR_9 ;

__attribute__((used)) static int
FUNC_4(struct eventtimer *VAR_10, sbintime_t VAR_11, sbintime_t VAR_12)
{
 struct hpet_timer *VAR_13 = (struct hpet_timer *)VAR_10->et_priv;
 struct hpet_timer *VAR_14;
 struct hpet_softc *VAR_15 = VAR_13->sc;
 uint32_t VAR_16, VAR_17;

 VAR_14 = (VAR_13->pcpu_master < 0) ? VAR_13 : &VAR_15->t[VAR_13->pcpu_slaves[VAR_9]];
 if (VAR_12 != 0) {
  VAR_14->mode = VAR_8;
  VAR_14->div = (VAR_15->freq * VAR_12) >> 32;
 } else {
  VAR_14->mode = VAR_7;
  VAR_14->div = 0;
 }
 if (VAR_11 != 0)
  VAR_16 = (VAR_15->freq * VAR_11) >> 32;
 else
  VAR_16 = VAR_14->div;
 if (VAR_14->irq < 0)
  FUNC_3(VAR_15->mem_res, VAR_0, 1 << VAR_14->num);
 VAR_14->caps |= VAR_4;
 VAR_17 = FUNC_2(VAR_15->mem_res, VAR_1);
restart:
 VAR_14->next = VAR_17 + VAR_16;
 if (VAR_14->mode == VAR_8 && (VAR_14->caps & VAR_3)) {
  VAR_14->caps |= VAR_5;
  FUNC_3(VAR_15->mem_res, FUNC_0(VAR_14->num),
      VAR_14->caps | VAR_6);
  FUNC_3(VAR_15->mem_res, FUNC_1(VAR_14->num),
      VAR_14->next);
  FUNC_3(VAR_15->mem_res, FUNC_1(VAR_14->num),
      VAR_14->div);
 } else {
  VAR_14->caps &= ~VAR_5;
  FUNC_3(VAR_15->mem_res, FUNC_0(VAR_14->num),
      VAR_14->caps);
  FUNC_3(VAR_15->mem_res, FUNC_1(VAR_14->num),
      VAR_14->next);
 }
 VAR_17 = FUNC_2(VAR_15->mem_res, VAR_1);
 if ((int32_t)(VAR_17 - VAR_14->next + VAR_2) >= 0) {
  VAR_16 *= 2;
  goto restart;
 }
 return (0);
}
