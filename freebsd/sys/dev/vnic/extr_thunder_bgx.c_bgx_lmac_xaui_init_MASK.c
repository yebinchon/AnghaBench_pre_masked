
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct bgx {scalar_t__ lmac_type; scalar_t__ use_training; int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
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
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 scalar_t__ FUNC_0 (struct bgx*,int,int ,int,int ) ;
 int FUNC_1 (struct bgx*,int,int ,int) ;
 int FUNC_2 (struct bgx*,int,int ) ;
 int FUNC_3 (struct bgx*,int,int ,int) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int
FUNC_5(struct bgx *VAR_37, int VAR_38, int VAR_39)
{
 uint64_t VAR_40;


 FUNC_1(VAR_37, VAR_38, VAR_16, VAR_30);
 if (FUNC_0(VAR_37, VAR_38, VAR_16,
     VAR_30, VAR_36) != 0) {
  FUNC_4(VAR_37->dev, "BGX SPU reset not completed\n");
  return (VAR_22);
 }


 VAR_40 = FUNC_2(VAR_37, VAR_38, VAR_0);
 VAR_40 &= ~VAR_21;
 FUNC_3(VAR_37, VAR_38, VAR_0, VAR_40);

 FUNC_1(VAR_37, VAR_38, VAR_16, VAR_29);

 if (VAR_37->lmac_type != VAR_3) {
  FUNC_1(VAR_37, VAR_38,
      VAR_19, VAR_34);
 } else {
  FUNC_1(VAR_37, VAR_38, VAR_19,
      VAR_34 | VAR_33);
 }


 VAR_40 = FUNC_2(VAR_37, VAR_38, VAR_4);
 FUNC_3(VAR_37, VAR_38, VAR_4, VAR_40);
 VAR_40 = FUNC_2(VAR_37, VAR_38, VAR_8);
 FUNC_3(VAR_37, VAR_38, VAR_8, VAR_40);
 VAR_40 = FUNC_2(VAR_37, VAR_38, VAR_18);
 FUNC_3(VAR_37, VAR_38, VAR_18, VAR_40);

 if (VAR_37->use_training) {
  FUNC_3(VAR_37, VAR_38, VAR_15, 0x00);
  FUNC_3(VAR_37, VAR_38, VAR_13, 0x00);
  FUNC_3(VAR_37, VAR_38, VAR_14, 0x00);

  FUNC_1(VAR_37, VAR_38, VAR_12,
      VAR_35);
 }


 FUNC_1(VAR_37, VAR_38, VAR_6, VAR_24);


 VAR_40 = FUNC_2(VAR_37, VAR_38, VAR_17);
 VAR_40 &= ~VAR_32;
 FUNC_3(VAR_37, VAR_38, VAR_17, VAR_40);


 VAR_40 = FUNC_2(VAR_37, VAR_38, VAR_11);
 VAR_40 = VAR_40 & ~(VAR_27 | VAR_28);
 FUNC_3(VAR_37, VAR_38, VAR_11, VAR_40);

 VAR_40 = FUNC_2(VAR_37, VAR_38, VAR_10);
 if (VAR_37->lmac_type == VAR_1)
  VAR_40 |= (1 << 23);
 else if (VAR_37->lmac_type == VAR_2)
  VAR_40 |= (1 << 24);
 else
  VAR_40 &= ~((1 << 23) | (1 << 24));
 VAR_40 = VAR_40 & (~((1UL << 25) | (1UL << 22) | (1UL << 12)));
 FUNC_3(VAR_37, VAR_38, VAR_10, VAR_40);

 VAR_40 = FUNC_2(VAR_37, 0, VAR_20);
 VAR_40 &= ~VAR_31;
 FUNC_3(VAR_37, 0, VAR_20, VAR_40);


 FUNC_1(VAR_37, VAR_38, VAR_0, VAR_21);

 VAR_40 = FUNC_2(VAR_37, VAR_38, VAR_16);
 VAR_40 &= ~VAR_29;
 FUNC_3(VAR_37, VAR_38, VAR_16, VAR_40);

 VAR_40 = FUNC_2(VAR_37, VAR_38, VAR_7);
 VAR_40 &= ~VAR_26;
 VAR_40 |= VAR_25;
 FUNC_3(VAR_37, VAR_38, VAR_7, VAR_40);


 FUNC_1(VAR_37, VAR_38, VAR_9, (0x100 - 1));

 FUNC_1(VAR_37, VAR_38, VAR_5, VAR_23);

 return (0);
}
