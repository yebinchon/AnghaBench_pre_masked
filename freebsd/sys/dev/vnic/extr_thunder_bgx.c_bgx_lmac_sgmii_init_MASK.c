
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct bgx {int dev; } ;


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
 scalar_t__ FUNC_0 (struct bgx*,int,int ,int,int ) ;
 int FUNC_1 (struct bgx*,int,int ,int) ;
 int FUNC_2 (struct bgx*,int,int ) ;
 int FUNC_3 (struct bgx*,int,int ,int) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int
FUNC_5(struct bgx *VAR_17, int VAR_18)
{
 uint64_t VAR_19;

 FUNC_1(VAR_17, VAR_18, VAR_4, 0x30);

 FUNC_1(VAR_17, VAR_18, VAR_1, VAR_10);


 VAR_19 = FUNC_2(VAR_17, VAR_18, VAR_2);
 if (VAR_19 & 1)
  FUNC_3(VAR_17, VAR_18, VAR_3, 0);


 FUNC_1(VAR_17, VAR_18, VAR_0, VAR_7);


 FUNC_1(VAR_17, VAR_18, VAR_5, VAR_13);
 if (FUNC_0(VAR_17, VAR_18, VAR_5,
     VAR_13, VAR_16) != 0) {
  FUNC_4(VAR_17->dev, "BGX PCS reset not completed\n");
  return (VAR_8);
 }


 VAR_19 = FUNC_2(VAR_17, VAR_18, VAR_5);
 VAR_19 &= ~VAR_12;
 VAR_19 |= (VAR_14 | VAR_11);
 FUNC_3(VAR_17, VAR_18, VAR_5, VAR_19);

 if (FUNC_0(VAR_17, VAR_18, VAR_6,
     VAR_15, VAR_9) != 0) {
  FUNC_4(VAR_17->dev, "BGX AN_CPT not completed\n");
  return (VAR_8);
 }

 return (0);
}
