
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct es_info {int sctrl; int ctrl; int dev; scalar_t__ num; int escfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
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
 int FUNC_1 (struct es_info*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_3 (struct es_info*) ;
 int FUNC_4 (struct es_info*,int,int ) ;
 int FUNC_5 (struct es_info*,int,int ) ;
 int FUNC_6 (struct es_info*,int,int) ;
 int FUNC_7 (struct es_info*) ;
 int FUNC_8 (struct es_info*,int ,int,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;

int
FUNC_13(struct es_info *VAR_27)
{
 uint32_t VAR_28, VAR_29, VAR_30, VAR_31;
 int VAR_32;

 FUNC_1(VAR_27);

 VAR_27->escfg = FUNC_2(VAR_27->escfg, 0);
 VAR_27->num = 0;
 VAR_27->sctrl = 0;
 VAR_28 = 0;
 VAR_29 = FUNC_9(VAR_27->dev);
 VAR_30 = FUNC_10(VAR_27->dev);
 VAR_31 = (FUNC_11(VAR_27->dev) << 16) |
     FUNC_12(VAR_27->dev);





 switch (VAR_31) {
 case 0x20001274:
  VAR_27->ctrl = 0;
  break;
 default:
  VAR_27->ctrl = VAR_5;
  break;
 }
 if (VAR_29 == VAR_0) {

  VAR_27->ctrl |= (1 << 16);
 }

 FUNC_8(VAR_27, VAR_6, VAR_27->ctrl, 4);
 FUNC_8(VAR_27, VAR_7, VAR_27->sctrl, 4);
 FUNC_8(VAR_27, VAR_14, 0, 4);
 if ((VAR_29 == VAR_12 && VAR_30 == VAR_10) ||
     (VAR_29 == VAR_12 && VAR_30 == VAR_9) ||
     (VAR_29 == VAR_4 && VAR_30 == VAR_1) ||
     (VAR_29 == VAR_4 && VAR_30 == VAR_2) ||
     (VAR_29 == VAR_4 && VAR_30 == VAR_3)) {
  VAR_28 = 1 << 29;
  FUNC_8(VAR_27, VAR_8, VAR_28, 4);
  FUNC_0(20000);
 }

 FUNC_8(VAR_27, VAR_6, VAR_27->ctrl, 4);
 FUNC_8(VAR_27, VAR_14, VAR_16, 4);
 FUNC_0(2000);
 FUNC_8(VAR_27, VAR_6, VAR_27->sctrl, 4);
 FUNC_7(VAR_27);

 FUNC_8(VAR_27, VAR_15, VAR_11, 4);
 for (VAR_32 = 0; VAR_32 < 0x80; VAR_32++)
  FUNC_6(VAR_27, VAR_32, 0);
 FUNC_6(VAR_27, VAR_20 + VAR_23, 16 << 4);
 FUNC_6(VAR_27, VAR_20 + VAR_22, 16 << 10);
 FUNC_6(VAR_27, VAR_21 + VAR_23, 16 << 4);
 FUNC_6(VAR_27, VAR_21 + VAR_22, 16 << 10);
 FUNC_6(VAR_27, VAR_24, 1 << 12);
 FUNC_6(VAR_27, VAR_24 + 1, 1 << 12);
 FUNC_6(VAR_27, VAR_25, 1 << 12);
 FUNC_6(VAR_27, VAR_25 + 1, 1 << 12);
 FUNC_6(VAR_27, VAR_26, 1 << 12);
 FUNC_6(VAR_27, VAR_26 + 1, 1 << 12);
 FUNC_4(VAR_27, 22050, VAR_17);
 FUNC_5(VAR_27, 22050, VAR_18);
 FUNC_5(VAR_27, 22050, VAR_19);







 FUNC_7(VAR_27);
 FUNC_8(VAR_27, VAR_15, 0, 4);

 FUNC_8(VAR_27, VAR_13, 0, 4);
 FUNC_8(VAR_27, VAR_8, VAR_28, 4);
 FUNC_3(VAR_27);

 return (0);
}
