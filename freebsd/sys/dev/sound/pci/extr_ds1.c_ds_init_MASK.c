
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int32_t ;
struct sc_info {size_t type; int ctrlbase; int* pbase; int pbankbase; int pbanksize; scalar_t__ rchn; scalar_t__ pchn; struct pbank** pbank; struct rbank* rbank; int * regbase; int dev; int map; int control_dmat; } ;
struct rbank {int dummy; } ;
struct pbank {int dummy; } ;
struct TYPE_2__ {int* mcode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ FUNC_1 (int ,int,int ,int ,int ,int *,int *,int,int,int,int ,int *,int *,int *) ;
 scalar_t__ FUNC_2 (int ,int ,void*,int,int ,struct sc_info*,int ) ;
 scalar_t__ FUNC_3 (int ,void**,int ,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int,...) ;
 TYPE_1__* VAR_24 ;
 int FUNC_6 (struct sc_info*,int) ;
 int FUNC_7 (struct sc_info*,scalar_t__,int) ;
 int VAR_25 ;
 int FUNC_8 (struct sc_info*,scalar_t__,int,int) ;
 int FUNC_9 (struct sc_info*,int*,int) ;

__attribute__((used)) static int
FUNC_10(struct sc_info *VAR_26)
{
 int VAR_27;
 u_int32_t *VAR_28, VAR_29, VAR_30, VAR_31, VAR_32, VAR_33, VAR_34, VAR_35;
 u_int8_t *VAR_36;
 void *VAR_37;

 VAR_28 = VAR_24[VAR_26->type].mcode;

 FUNC_8(VAR_26, VAR_15, 0x00000000, 4);
 FUNC_6(VAR_26, 0);
 FUNC_8(VAR_26, VAR_12, 0x00010000, 4);
 FUNC_8(VAR_26, VAR_12, 0x00000000, 4);
 FUNC_8(VAR_26, VAR_11, 0x00000000, 4);
 FUNC_8(VAR_26, VAR_10, 0x00000000, 4);
 FUNC_8(VAR_26, VAR_16, 0x00000000, 4);
 FUNC_8(VAR_26, VAR_18, 0x00000000, 4);
 FUNC_8(VAR_26, VAR_7, 0x00000000, 4);
 VAR_29 = FUNC_7(VAR_26, VAR_9, 2);
 FUNC_8(VAR_26, VAR_9, VAR_29 & ~0x0007, 2);

 for (VAR_27 = 0; VAR_27 < VAR_23; VAR_27 += 4)
  FUNC_8(VAR_26, VAR_6 + VAR_27, VAR_4[VAR_27 >> 2], 4);

 for (VAR_27 = 0; VAR_27 < VAR_22; VAR_27 += 4)
  FUNC_8(VAR_26, VAR_5 + VAR_27, VAR_28[VAR_27 >> 2], 4);

 FUNC_6(VAR_26, 1);

 VAR_30 = 0;
 for (VAR_27 = 100; VAR_27 > 0; VAR_27--) {
  VAR_30 = FUNC_7(VAR_26, VAR_17, 4) << 2;
  if (VAR_30 == sizeof(struct pbank))
   break;
  FUNC_0(1000);
 }
 if (VAR_30 != sizeof(struct pbank)) {
  FUNC_5(VAR_26->dev, "preposterous playctrlsize (%d)\n", VAR_30);
  return -1;
 }
 VAR_31 = FUNC_7(VAR_26, VAR_19, 4) << 2;
 VAR_32 = FUNC_7(VAR_26, VAR_8, 4) << 2;
 VAR_33 = FUNC_7(VAR_26, VAR_21, 4) << 2;

 VAR_34 = 64 * 2 * VAR_30 + 2 * 2 * VAR_31 + 5 * 2 * VAR_32 + VAR_33;
 VAR_34 += (64 + 1) * 4;

 if (VAR_26->regbase == ((void*)0)) {
  if (FUNC_1(FUNC_4(VAR_26->dev), 2, 0,
           VAR_2,
           VAR_1,
           ((void*)0), ((void*)0), VAR_34, 1, VAR_34, 0, ((void*)0),
           ((void*)0), &VAR_26->control_dmat))
   return -1;
  if (FUNC_3(VAR_26->control_dmat, &VAR_37, VAR_0, &VAR_26->map))
   return -1;
  if (FUNC_2(VAR_26->control_dmat, VAR_26->map, VAR_37, VAR_34, VAR_25, VAR_26, 0) || !VAR_26->ctrlbase) {
   FUNC_5(VAR_26->dev, "pcs=%d, rcs=%d, ecs=%d, ws=%d, memsz=%d\n",
                VAR_30, VAR_31, VAR_32, VAR_33, VAR_34);
   return -1;
  }
  VAR_26->regbase = VAR_37;
 } else
  VAR_37 = VAR_26->regbase;

 VAR_35 = 0;
 VAR_36 = VAR_37;
 FUNC_8(VAR_26, VAR_20, VAR_26->ctrlbase + VAR_35, 4);
 VAR_35 += VAR_33;
 VAR_26->pbase = (u_int32_t *)(VAR_36 + VAR_35);

 FUNC_8(VAR_26, VAR_16, VAR_26->ctrlbase + VAR_35, 4);
 VAR_35 += (64 + 1) * 4;
 VAR_26->rbank = (struct rbank *)(VAR_36 + VAR_35);
 FUNC_8(VAR_26, VAR_18, VAR_26->ctrlbase + VAR_35, 4);
 VAR_35 += 2 * 2 * VAR_31;
 FUNC_8(VAR_26, VAR_7, VAR_26->ctrlbase + VAR_35, 4);
 VAR_35 += 5 * 2 * VAR_32;

 VAR_26->pbankbase = VAR_26->ctrlbase + VAR_35;
 VAR_26->pbanksize = VAR_30;
 for (VAR_27 = 0; VAR_27 < 64; VAR_27++) {
  FUNC_9(VAR_26, &VAR_26->pbase[VAR_27 + 1], 0);
  VAR_26->pbank[VAR_27 * 2] = (struct pbank *)(VAR_36 + VAR_35);

  VAR_35 += VAR_30;
  VAR_26->pbank[VAR_27 * 2 + 1] = (struct pbank *)(VAR_36 + VAR_35);

  VAR_35 += VAR_30;
 }
 FUNC_9(VAR_26, &VAR_26->pbase[0], VAR_3 * 2);

 VAR_26->pchn = VAR_26->rchn = 0;
 FUNC_8(VAR_26, VAR_15, 0x3fff3fff, 4);
 FUNC_8(VAR_26, VAR_13, 0x3fff3fff, 4);
 FUNC_8(VAR_26, VAR_14, 0x3fff3fff, 4);

 return 0;
}
