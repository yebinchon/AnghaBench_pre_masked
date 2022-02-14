
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ phandle_t ;
struct TYPE_20__ {int ports_mask; int kproc; int num_ports; int dev; int node; int sx; int sw_addr; } ;
typedef TYPE_1__ e6000sw_softc_t ;
typedef int device_t ;
struct TYPE_21__ {int es_nports; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
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
 int FUNC_6 (TYPE_1__*,int) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 TYPE_1__* FUNC_9 (int ) ;
 int FUNC_10 (int ,char*,...) ;
 int FUNC_11 (TYPE_1__*,int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (TYPE_1__*,int) ;
 scalar_t__ FUNC_14 (TYPE_1__*,int) ;
 scalar_t__ FUNC_15 (TYPE_1__*,int) ;
 int FUNC_16 (TYPE_1__*,int) ;
 int FUNC_17 (TYPE_1__*,scalar_t__,int*) ;
 int FUNC_18 (TYPE_1__*,int ,int ) ;
 int FUNC_19 (int ,int,int) ;
 int FUNC_20 (TYPE_1__*,int ) ;
 int FUNC_21 (int ,TYPE_1__*) ;
 int VAR_20 ;
 int FUNC_22 (TYPE_1__*,int ,int ,int) ;
 TYPE_3__ VAR_21 ;
 int FUNC_23 (int ,TYPE_1__*,int *,int ,int ,char*) ;
 scalar_t__ FUNC_24 (int ,char*) ;
 int FUNC_25 (int *,char*) ;

__attribute__((used)) static int
FUNC_26(device_t VAR_22)
{
 bool VAR_23;
 e6000sw_softc_t *VAR_24;
 phandle_t VAR_25, VAR_26;
 int VAR_27, VAR_28;
 uint32_t VAR_29;

 VAR_27 = 0;
 VAR_24 = FUNC_9(VAR_22);






 if (FUNC_3(VAR_24))
  FUNC_10(VAR_22, "multi-chip addressing mode (%#x)\n",
      VAR_24->sw_addr);
 else
  FUNC_10(VAR_22, "single-chip addressing mode\n");

 FUNC_25(&VAR_24->sx, "e6000sw");

 FUNC_0(VAR_24);
 FUNC_21(VAR_22, VAR_24);

 VAR_26 = FUNC_24(VAR_24->node, "ports");

 if (VAR_26 == 0) {
  FUNC_10(VAR_22, "failed to parse DTS: no ports found for "
      "switch\n");
  return (VAR_0);
 }

 for (VAR_25 = FUNC_4(VAR_26); VAR_25 != 0; VAR_25 = FUNC_5(VAR_25)) {
  VAR_27 = FUNC_17(VAR_24, VAR_25, &VAR_28);
  if (VAR_27 != 0) {
   FUNC_10(VAR_24->dev, "failed to parse DTS\n");
   goto out_fail;
  }


  VAR_24->ports_mask |= (1 << VAR_28);

  VAR_27 = FUNC_13(VAR_24, VAR_28);
  if (VAR_27 != 0) {
   FUNC_10(VAR_24->dev, "failed to init interface\n");
   goto out_fail;
  }

  if (FUNC_15(VAR_24, VAR_28)) {

   VAR_29 = FUNC_18(VAR_24, FUNC_6(VAR_24, VAR_28),
       VAR_5);
   VAR_29 &= ~VAR_14;
   VAR_29 |= VAR_11;
   FUNC_22(VAR_24, FUNC_6(VAR_24, VAR_28), VAR_5,
       VAR_29);





   VAR_29 &= ~(VAR_16 | VAR_6 |
       VAR_10 | VAR_7 |
       VAR_9);
   if (FUNC_14(VAR_24, VAR_28))
    VAR_29 |= VAR_16;
   else
    VAR_29 |= VAR_15;
   if (FUNC_2(VAR_24, VAR_3) &&
       FUNC_14(VAR_24, VAR_28))
    VAR_29 |= VAR_6;
   VAR_29 |= VAR_8 | VAR_13 |
       VAR_11 | VAR_14 |
       VAR_12;
   if (!FUNC_2(VAR_24, VAR_3))
    VAR_29 |= VAR_10 | VAR_7;
   if (FUNC_2(VAR_24, VAR_2) ||
       FUNC_2(VAR_24, VAR_4) ||
       FUNC_2(VAR_24, VAR_3))
    VAR_29 |= VAR_9;
   FUNC_22(VAR_24, FUNC_6(VAR_24, VAR_28), VAR_5,
       VAR_29);

   if (FUNC_2(VAR_24, VAR_3) &&
       (VAR_28 == 9 || VAR_28 == 10)) {
    if (FUNC_14(VAR_24, VAR_28))
     VAR_23 = 0;
    else
     VAR_23 = 1;
    FUNC_19(VAR_24->dev, VAR_28, VAR_23);
   }
  }


  if (!FUNC_16(VAR_24, VAR_28))
   continue;

  VAR_27 = FUNC_11(VAR_24, VAR_28);
  if (VAR_27 != 0) {
   FUNC_10(VAR_24->dev, "failed to attach miibus\n");
   goto out_fail;
  }
 }

 VAR_21.es_nports = VAR_24->num_ports;


 FUNC_20(VAR_24, VAR_1);

 VAR_29 = FUNC_18(VAR_24, VAR_17, VAR_18);
 if (VAR_29 & VAR_19)
  FUNC_10(VAR_22, "switch is ready.\n");
 FUNC_1(VAR_24);

 FUNC_8(VAR_22);
 FUNC_7(VAR_22);

 FUNC_23(VAR_20, VAR_24, &VAR_24->kproc, 0, 0, "e6000sw tick kproc");

 return (0);

out_fail:
 FUNC_1(VAR_24);
 FUNC_12(VAR_22);

 return (VAR_27);
}
