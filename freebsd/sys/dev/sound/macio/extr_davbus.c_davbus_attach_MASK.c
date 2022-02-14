
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct resource {int dummy; } ;
struct TYPE_2__ {int * sc_odma; int sc_dev; } ;
struct davbus_softc {char device_id; int * reg; int mutex; int soundnode; TYPE_1__ aoa; int node; } ;
typedef int device_t ;
typedef int compat ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,char*,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_3 (struct davbus_softc*) ;
 int VAR_18 ;
 int VAR_19 ;
 void* FUNC_4 (int ,int ,int*,int) ;
 int FUNC_5 (int ,struct resource*,int,int *,int ,struct davbus_softc*,void**) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (char*,int) ;
 int VAR_20 ;
 int FUNC_8 (int ,char*,char*) ;
 struct davbus_softc* FUNC_9 (int,int ,int) ;
 int FUNC_10 (int ,int *,struct davbus_softc*) ;
 int FUNC_11 (int *,char*,int *,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int,int ,int ) ;
 int FUNC_14 (struct resource*) ;
 int VAR_21 ;
 int FUNC_15 (int ,struct resource*,int,int ,struct davbus_softc*,void**) ;
 scalar_t__ FUNC_16 (char*,char*) ;

__attribute__((used)) static int
FUNC_17(device_t VAR_22)
{
 struct davbus_softc *VAR_23;
 struct resource *VAR_24, *VAR_25;
 void *VAR_26;
 char VAR_27[64];
 int VAR_28, VAR_29, VAR_30;

 VAR_23 = FUNC_9(sizeof(*VAR_23), VAR_11, VAR_12 | VAR_13);

 VAR_23->aoa.sc_dev = VAR_22;
 VAR_23->node = FUNC_12(VAR_22);
 VAR_23->soundnode = FUNC_1(VAR_23->node);


 VAR_28 = 0;
 VAR_23->reg = FUNC_4(VAR_22, VAR_17, &VAR_28, VAR_14);
 if (VAR_23->reg == ((void*)0))
  return (VAR_5);


 VAR_28 = 1;
 VAR_23->aoa.sc_odma = FUNC_4(VAR_22, VAR_17,
     &VAR_28, VAR_14);
 if (VAR_23->aoa.sc_odma == ((void*)0))
  return (VAR_5);


 VAR_28 = 1;
 VAR_24 = FUNC_4(VAR_22, VAR_16,
     &VAR_28, VAR_15 | VAR_14);
 if (VAR_24 == ((void*)0))
  return (VAR_5);

 VAR_29 = FUNC_14(VAR_24);

 FUNC_0(("interrupting at irq %d\n", VAR_29));

 VAR_30 = FUNC_13(VAR_29, VAR_8, VAR_7);
 if (VAR_30 != 0)
  return (VAR_30);

 FUNC_15(VAR_22, VAR_24, VAR_6, VAR_18,
     VAR_23, &VAR_26);



 FUNC_7(VAR_27, sizeof(VAR_27));
 FUNC_2(VAR_23->soundnode, "compatible", VAR_27, sizeof(VAR_27));
 FUNC_2(VAR_23->soundnode, "device-id", &VAR_23->device_id, sizeof(u_int));

 FUNC_11(&VAR_23->mutex, "DAVbus", ((void*)0), VAR_10);

 FUNC_8(VAR_22, "codec: <%s>\n", VAR_27);


 VAR_28 = 0;
 VAR_25 = FUNC_4(VAR_22, VAR_16,
      &VAR_28, VAR_15 | VAR_14);
 if (VAR_25 != ((void*)0))
  FUNC_5(VAR_22, VAR_25, VAR_9 | VAR_6,
      ((void*)0), VAR_20, VAR_23, &VAR_26);


        FUNC_6(VAR_23->reg, VAR_4, VAR_0 |
     VAR_2 | VAR_3 | VAR_1);


 VAR_30 = FUNC_3(VAR_23);
 if (VAR_30)
  return (VAR_30);


 if (FUNC_16(VAR_27, "screamer") == 0)
  FUNC_10(VAR_22, &VAR_21, VAR_23);
 else if (FUNC_16(VAR_27, "burgundy") == 0)
  FUNC_10(VAR_22, &VAR_19, VAR_23);

 return (0);
}
