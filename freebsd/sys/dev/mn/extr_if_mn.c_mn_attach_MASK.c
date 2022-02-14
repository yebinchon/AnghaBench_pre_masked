
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct resource {int dummy; } ;
struct mn_softc {int unit; int node; int nodename; struct f54rreg* f54r; void* m1v; struct f54wreg* f54w; void* m0v; struct m32xreg* m32x; int intrhand; int * irq; void* m1p; void* m0p; int name; int framing; int dev; } ;
struct m32xreg {int dummy; } ;
struct f54wreg {int dummy; } ;
struct f54rreg {int vstr; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 int FUNC_0 (int ,struct mn_softc*) ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* FUNC_3 (int ,int ,int*,int) ;
 int FUNC_4 (int ,int *,int ,int *,int ,struct mn_softc*,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,struct mn_softc*) ;
 int FUNC_8 (struct mn_softc*,int ) ;
 scalar_t__ FUNC_9 (int,int ,int) ;
 int VAR_14 ;
 int FUNC_10 (struct mn_softc*) ;
 int VAR_15 ;
 scalar_t__ FUNC_11 (int *,int *) ;
 scalar_t__ FUNC_12 (int ,int ) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int ,int) ;
 int FUNC_16 (int ,int ,int,int) ;
 int FUNC_17 (char*,...) ;
 void* FUNC_18 (struct resource*) ;
 void* FUNC_19 (struct resource*) ;
 int FUNC_20 (int ,char*,...) ;

__attribute__((used)) static int
FUNC_21 (device_t VAR_16)
{
 struct mn_softc *VAR_17;
 u_int32_t VAR_18;
 u_int32_t VAR_19;
 static int VAR_20;
 int VAR_21, VAR_22;
 struct resource *VAR_23;

 if (!VAR_20) {
  if (FUNC_13(&VAR_15))
   FUNC_17("ng_newtype failed\n");
  VAR_20++;
 }

 VAR_17 = (struct mn_softc *)FUNC_9(sizeof *VAR_17, VAR_3, VAR_4 | VAR_5);
 FUNC_7(VAR_16, VAR_17);

 VAR_17->dev = VAR_16;
 VAR_17->unit = FUNC_5(VAR_16);
 VAR_17->framing = VAR_0;
 FUNC_20(VAR_17->name, "mn%d", VAR_17->unit);

        VAR_21 = FUNC_2(0);
        VAR_23 = FUNC_3(VAR_16, VAR_13, &VAR_21, VAR_10);
        if (VAR_23 == ((void*)0)) {
                FUNC_6(VAR_16, "Could not map memory\n");
  FUNC_8(VAR_17, VAR_3);
                return VAR_1;
        }
        VAR_17->m0v = FUNC_19(VAR_23);
        VAR_17->m0p = FUNC_18(VAR_23);

        VAR_21 = FUNC_2(1);
        VAR_23 = FUNC_3(VAR_16, VAR_13, &VAR_21, VAR_10);
        if (VAR_23 == ((void*)0)) {
                FUNC_6(VAR_16, "Could not map memory\n");
  FUNC_8(VAR_17, VAR_3);
                return VAR_1;
        }
        VAR_17->m1v = FUNC_19(VAR_23);
        VAR_17->m1p = FUNC_18(VAR_23);


 VAR_21 = 0;
 VAR_17->irq = FUNC_3(VAR_16, VAR_12, &VAR_21,
     VAR_11 | VAR_10);

 if (VAR_17->irq == ((void*)0)) {
  FUNC_17("couldn't map interrupt\n");
  FUNC_8(VAR_17, VAR_3);
  return(VAR_1);
 }

 VAR_22 = FUNC_4(VAR_16, VAR_17->irq, VAR_2, ((void*)0), VAR_14, VAR_17, &VAR_17->intrhand);

 if (VAR_22) {
  FUNC_17("couldn't set up irq\n");
  FUNC_8(VAR_17, VAR_3);
  return(VAR_1);
 }

 VAR_18 = FUNC_15(VAR_16, VAR_9, 2);
 FUNC_17("%x\n", VAR_18);
 FUNC_16(VAR_16, VAR_9, VAR_18 | VAR_8 | VAR_7, 2);



 VAR_18 = FUNC_15(VAR_16, VAR_9, 1);
 FUNC_17("%x\n", VAR_18);

 VAR_19 = FUNC_14(VAR_16);

 VAR_17->m32x = (struct m32xreg *) VAR_17->m0v;
 VAR_17->f54w = (struct f54wreg *) VAR_17->m1v;
 VAR_17->f54r = (struct f54rreg *) VAR_17->m1v;


 VAR_18 = FUNC_10(VAR_17);
 if (!VAR_18)
  return (0);

 FUNC_17("mn%d: Munich32X", VAR_17->unit);
 switch (VAR_19) {
 case 0x13:
  FUNC_17(" Rev 2.2");
  break;
 default:
  FUNC_17(" Rev 0x%x\n", VAR_19);
 }
 FUNC_17(", Falc54");
 switch (VAR_17->f54r->vstr) {
 case 0:
  FUNC_17(" Rev < 1.3\n");
  break;
 case 1:
  FUNC_17(" Rev 1.3\n");
  break;
 case 2:
  FUNC_17(" Rev 1.4\n");
  break;
 case 0x10:
  FUNC_17("-LH Rev 1.1\n");
  break;
 case 0x13:
  FUNC_17("-LH Rev 1.3\n");
  break;
 default:
  FUNC_17(" Rev 0x%x\n", VAR_17->f54r->vstr);
 }

 if (FUNC_11(&VAR_15, &VAR_17->node) != 0) {
  FUNC_17("ng_make_node_common failed\n");
  return (0);
 }
 FUNC_0(VAR_17->node, VAR_17);
 FUNC_20(VAR_17->nodename, "%s%d", VAR_6, VAR_17->unit);
 if (FUNC_12(VAR_17->node, VAR_17->nodename)) {
  FUNC_1(VAR_17->node);
  return (0);
 }

 return (0);
}
