
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct axp2xx_softc {int nsensors; int intr_hook; int intrcookie; int * res; TYPE_1__* sensors; void* dev; } ;
typedef void* device_t ;
struct TYPE_2__ {int enable_mask; int desc; int format; int id; int name; int enable_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_0 (int ,int ,void*,int ) ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_1 (int ,int ,int ,int ,int,void*,int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_33 ;
 int FUNC_3 (void*,int ,int*,int) ;
 int VAR_34 ;
 int VAR_35 ;
 int FUNC_4 (void*,int ,int) ;
 scalar_t__ VAR_36 ;
 scalar_t__ FUNC_5 (void*,int ,int,int *,int ,struct axp2xx_softc*,int *) ;
 int FUNC_6 (int *) ;
 struct axp2xx_softc* FUNC_7 (void*) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (void*) ;
 int FUNC_10 (void*,char*,...) ;
 int VAR_37 ;

__attribute__((used)) static void
FUNC_11(void *VAR_38)
{
 device_t VAR_39;
 struct axp2xx_softc *VAR_40;
 const char *VAR_41[] = {"Battery", "AC", "USB", "AC and USB"};
 int VAR_42;
 uint8_t VAR_43, VAR_44;
 uint8_t VAR_45;

 VAR_39 = VAR_38;

 VAR_40 = FUNC_7(VAR_39);
 VAR_40->dev = VAR_39;

 if (VAR_36) {





  FUNC_3(VAR_39, VAR_22, &VAR_44, 1);
  VAR_45 = ((VAR_44 & VAR_23) >> VAR_24) |
      ((VAR_44 & VAR_25) >> (VAR_26 - 1));

  FUNC_10(VAR_39, "Powered by %s\n",
      VAR_41[VAR_45]);
 }


 FUNC_4(VAR_39, VAR_3,
     VAR_2 |
     VAR_1 |
     VAR_0 |
     VAR_6 |
     VAR_5 |
     VAR_4);
 FUNC_4(VAR_39, VAR_15,
     VAR_11 |
     VAR_12 |
     VAR_9 |
     VAR_8 |
     VAR_10 |
     VAR_7 |
     VAR_14 |
     VAR_13);
 FUNC_4(VAR_39, VAR_16,
     VAR_18 | VAR_17);
 FUNC_4(VAR_39, VAR_20, VAR_19);
 FUNC_4(VAR_39, VAR_21, 0x0);

 FUNC_0(VAR_37, VAR_34, VAR_39,
     VAR_32);


 for (VAR_42 = 0; VAR_42 < VAR_40->nsensors; VAR_42++) {
  if (FUNC_3(VAR_39, VAR_40->sensors[VAR_42].enable_reg, &VAR_43, 1) == -1) {
   FUNC_10(VAR_39, "Cannot enable sensor '%s'\n",
       VAR_40->sensors[VAR_42].name);
   continue;
  }
  VAR_43 |= VAR_40->sensors[VAR_42].enable_mask;
  if (FUNC_4(VAR_39, VAR_40->sensors[VAR_42].enable_reg, VAR_43) == -1) {
   FUNC_10(VAR_39, "Cannot enable sensor '%s'\n",
       VAR_40->sensors[VAR_42].name);
   continue;
  }
  FUNC_1(FUNC_8(VAR_39),
      FUNC_2(FUNC_9(VAR_39)),
      VAR_31, VAR_40->sensors[VAR_42].name,
      VAR_28 | VAR_27,
      VAR_39, VAR_40->sensors[VAR_42].id, VAR_35,
      VAR_40->sensors[VAR_42].format,
      VAR_40->sensors[VAR_42].desc);
 }

 if ((FUNC_5(VAR_39, VAR_40->res[0], VAR_30 | VAR_29,
       ((void*)0), VAR_33, VAR_40, &VAR_40->intrcookie)))
  FUNC_10(VAR_39, "unable to register interrupt handler\n");

 FUNC_6(&VAR_40->intr_hook);
}
