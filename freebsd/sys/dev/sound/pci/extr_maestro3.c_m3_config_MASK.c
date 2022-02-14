
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sc_info {scalar_t__ which; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct sc_info*) ;
 int FUNC_1 (struct sc_info*) ;
 int FUNC_2 (struct sc_info*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sc_info*,int ) ;
 int FUNC_6 (struct sc_info*,int ,int) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,int ,int,int) ;
 scalar_t__ FUNC_9 (int ,int ,char*,int*) ;

__attribute__((used)) static void
FUNC_10(struct sc_info *VAR_23)
{
 u_int32_t VAR_24, VAR_25;
 int VAR_26;

 FUNC_1(VAR_23);

 FUNC_2(VAR_23);






 if (FUNC_9(FUNC_3(VAR_23->dev),
                        FUNC_4(VAR_23->dev),
          "hwvol_config", &VAR_26) == 0)
  VAR_25 = (VAR_26 > 0) ? VAR_10 : 0;
 else
  VAR_25 = VAR_10;
 FUNC_0(VAR_23);

 VAR_24 = FUNC_7(VAR_23->dev, VAR_16, 4);
 VAR_24 &= ~VAR_10;
 VAR_24 |= VAR_19 | VAR_11 | VAR_25;
 VAR_24 |= VAR_18 | VAR_4 | VAR_22;
 FUNC_8(VAR_23->dev, VAR_16, VAR_24, 4);

 FUNC_6(VAR_23, VAR_3, VAR_20);
 VAR_24 = FUNC_7(VAR_23->dev, VAR_16, 4);
 VAR_24 &= ~VAR_13;
 if (VAR_23->which == VAR_9) {
  VAR_24 &= ~VAR_12;
  VAR_24 |= VAR_14;
 }
 VAR_24 &= ~(VAR_5 | VAR_6);
 FUNC_8(VAR_23->dev, VAR_16, VAR_24, 4);

 if (VAR_23->which == VAR_8) {
  VAR_24 = FUNC_7(VAR_23->dev, VAR_17, 4);
  VAR_24 |= VAR_15;
  FUNC_8(VAR_23->dev, VAR_17, VAR_24, 4);
 }

 VAR_24 = FUNC_5(VAR_23, VAR_2);
 VAR_24 &= ~(VAR_7 | VAR_1);
 VAR_24 |= VAR_1;
 VAR_24 |= VAR_0;
 FUNC_6(VAR_23, VAR_2, VAR_24);

 FUNC_6(VAR_23, VAR_3, VAR_21);
}
