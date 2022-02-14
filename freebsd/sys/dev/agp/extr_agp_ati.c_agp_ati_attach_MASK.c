
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct agp_ati_softc {int is_rs300; int initial_aperture; int ag_pdir; int regs; int bsh; int bst; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int) ;
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
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int*,int ) ;
 struct agp_ati_softc* FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int,int) ;
 int FUNC_11 (int ,int,int,int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static int
FUNC_14(device_t VAR_11)
{
 struct agp_ati_softc *VAR_12 = FUNC_8(VAR_11);
 int VAR_13, VAR_14;
 u_int32_t VAR_15;
 u_int32_t VAR_16, VAR_17;

 VAR_13 = FUNC_5(VAR_11);
 if (VAR_13)
  return VAR_13;

 switch (FUNC_9(VAR_11)) {
 case 0xcab01002:
 case 0xcab21002:
 case 0xcbb21002:
 case 0xcab31002:
  VAR_12->is_rs300 = 0;
  VAR_16 = VAR_3;
  VAR_17 = VAR_4;
  break;
 case 0x58301002:
 case 0x58311002:
 case 0x58321002:
 case 0x58331002:
  VAR_12->is_rs300 = 1;
  VAR_16 = VAR_5;
  VAR_17 = VAR_6;
  break;
 default:

  return VAR_7;
 }

 VAR_14 = VAR_2;
 VAR_12->regs = FUNC_7(VAR_11, VAR_10, &VAR_14, VAR_9);
 if (!VAR_12->regs) {
  FUNC_6(VAR_11);
  return VAR_8;
 }

 VAR_12->bst = FUNC_13(VAR_12->regs);
 VAR_12->bsh = FUNC_12(VAR_12->regs);

 VAR_12->initial_aperture = FUNC_1(VAR_11);

 for (;;) {
  if (FUNC_4(VAR_11) == 0)
   break;





  if (FUNC_2(VAR_11, FUNC_1(VAR_11) / 2))
   return VAR_8;
 }

 VAR_15 = FUNC_10(VAR_11, VAR_16, 4);
 FUNC_11(VAR_11, VAR_16, VAR_15 | 1, 4);

 FUNC_11(VAR_11, VAR_17, 0x20000, 4);

 FUNC_3(VAR_1, 0x00060000);

 VAR_15 = FUNC_10(VAR_11, 4, 4);
 FUNC_11(VAR_11, 4, VAR_15 | (1 << 14), 4);

 FUNC_3(VAR_0, VAR_12->ag_pdir);

 FUNC_0(VAR_11);

 return 0;
}
