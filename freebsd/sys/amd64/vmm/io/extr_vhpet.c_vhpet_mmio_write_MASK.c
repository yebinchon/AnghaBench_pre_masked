
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct vhpet {int config; int isr; int countbase; TYPE_1__* timer; int vm; } ;
typedef int sbintime_t ;
struct TYPE_2__ {int compval; int comprate; int cap_config; int msireg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,char*) ;
 int VAR_6 ;
 int FUNC_5 (struct vhpet*) ;
 int VAR_7 ;
 int FUNC_6 (struct vhpet*) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,char*,int) ;
 int FUNC_9 (int ,char*,int,int) ;
 int FUNC_10 (int*,int,int) ;
 int FUNC_11 (struct vhpet*,int *) ;
 scalar_t__ FUNC_12 (struct vhpet*) ;
 scalar_t__ FUNC_13 (struct vhpet*,int) ;
 int FUNC_14 (struct vhpet*) ;
 int FUNC_15 (struct vhpet*,int,int,int ) ;
 int FUNC_16 (struct vhpet*,int,int ) ;
 int FUNC_17 (struct vhpet*,int) ;
 int FUNC_18 (struct vhpet*,int,int,int) ;
 struct vhpet* FUNC_19 (void*) ;

int
FUNC_20(void *VAR_8, int VAR_9, uint64_t VAR_10, uint64_t VAR_11, int VAR_12,
    void *VAR_13)
{
 struct vhpet *VAR_14;
 uint64_t VAR_15, VAR_16, VAR_17, VAR_18;
 uint32_t VAR_19, VAR_20, VAR_21, VAR_22;
 sbintime_t VAR_23, *VAR_24;
 int VAR_25, VAR_26;

 VAR_14 = FUNC_19(VAR_8);
 VAR_26 = VAR_10 - VAR_6;

 FUNC_5(VAR_14);


 switch (VAR_12) {
 case 8:
  VAR_16 = 0xffffffffffffffff;
  VAR_15 = VAR_11;
  break;
 case 4:
  VAR_16 = 0xffffffff;
  VAR_15 = VAR_11;
  if ((VAR_26 & 0x4) != 0) {
   VAR_16 <<= 32;
   VAR_15 <<= 32;
  }
  break;
 default:
  FUNC_9(VAR_14->vm, "hpet invalid mmio write: "
      "offset 0x%08x, size %d", VAR_26, VAR_12);
  goto done;
 }


 if (VAR_26 & (VAR_12 - 1)) {
  FUNC_9(VAR_14->vm, "hpet invalid mmio write: "
      "offset 0x%08x, size %d", VAR_26, VAR_12);
  goto done;
 }

 if (VAR_26 == VAR_2 || VAR_26 == VAR_2 + 4) {






  VAR_24 = FUNC_12(VAR_14) ? &VAR_23 : ((void*)0);
  VAR_22 = FUNC_11(VAR_14, VAR_24);
  VAR_17 = VAR_14->config;
  FUNC_10(&VAR_14->config, VAR_15, VAR_16);





  VAR_14->config &= ~VAR_1;

  if ((VAR_17 ^ VAR_14->config) & VAR_0) {
   if (FUNC_12(VAR_14)) {
    FUNC_14(VAR_14);
    FUNC_7(VAR_14->vm, "hpet enabled");
   } else {
    FUNC_16(VAR_14, VAR_22, VAR_23);
    FUNC_7(VAR_14->vm, "hpet disabled");
   }
  }
  goto done;
 }

 if (VAR_26 == VAR_3 || VAR_26 == VAR_3 + 4) {
  VAR_19 = VAR_14->isr & VAR_15;
  for (VAR_25 = 0; VAR_25 < VAR_7; VAR_25++) {
   if ((VAR_19 & (1 << VAR_25)) != 0) {
    FUNC_8(VAR_14->vm, "hpet t%d isr cleared", VAR_25);
    FUNC_17(VAR_14, VAR_25);
   }
  }
  goto done;
 }

 if (VAR_26 == VAR_4 || VAR_26 == VAR_4 + 4) {

  VAR_18 = FUNC_11(VAR_14, ((void*)0));
  FUNC_10(&VAR_18, VAR_15, VAR_16);
  VAR_14->countbase = VAR_18;
  if (FUNC_12(VAR_14))
   FUNC_14(VAR_14);
  goto done;
 }

 for (VAR_25 = 0; VAR_25 < VAR_7; VAR_25++) {
  if (VAR_26 == FUNC_0(VAR_25) ||
      VAR_26 == FUNC_0(VAR_25) + 4) {
   FUNC_18(VAR_14, VAR_25, VAR_15, VAR_16);
   break;
  }

  if (VAR_26 == FUNC_1(VAR_25) ||
      VAR_26 == FUNC_1(VAR_25) + 4) {
   VAR_20 = VAR_14->timer[VAR_25].compval;
   VAR_21 = VAR_14->timer[VAR_25].comprate;
   if (FUNC_13(VAR_14, VAR_25)) {






    VAR_18 = VAR_14->timer[VAR_25].comprate;
    FUNC_10(&VAR_18, VAR_15, VAR_16);
    VAR_14->timer[VAR_25].comprate = VAR_18;
    if ((VAR_14->timer[VAR_25].cap_config &
        VAR_5) != 0) {
     VAR_14->timer[VAR_25].compval = VAR_18;
    }
   } else {
    FUNC_4(VAR_14->timer[VAR_25].comprate == 0,
        ("vhpet one-shot timer %d has invalid "
        "rate %u", VAR_25, VAR_14->timer[VAR_25].comprate));
    VAR_18 = VAR_14->timer[VAR_25].compval;
    FUNC_10(&VAR_18, VAR_15, VAR_16);
    VAR_14->timer[VAR_25].compval = VAR_18;
   }
   VAR_14->timer[VAR_25].cap_config &= ~VAR_5;

   if (VAR_14->timer[VAR_25].compval != VAR_20 ||
       VAR_14->timer[VAR_25].comprate != VAR_21) {
    if (FUNC_12(VAR_14)) {
     VAR_22 = FUNC_11(VAR_14, &VAR_23);
     FUNC_15(VAR_14, VAR_25, VAR_22,
         VAR_23);
    }
   }
   break;
  }

  if (VAR_26 == FUNC_3(VAR_25) ||
      VAR_26 == FUNC_2(VAR_25)) {
   FUNC_10(&VAR_14->timer[VAR_25].msireg, VAR_15, VAR_16);
   break;
  }
 }
done:
 FUNC_6(VAR_14);
 return (0);
}
