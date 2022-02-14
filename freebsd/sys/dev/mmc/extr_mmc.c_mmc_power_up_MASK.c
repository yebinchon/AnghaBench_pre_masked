
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_softc {int dev; } ;
typedef enum mmc_vccq { ____Placeholder_mmc_vccq } mmc_vccq ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_13(struct mmc_softc *VAR_9)
{
 device_t VAR_10;
 enum mmc_vccq VAR_11;

 VAR_10 = VAR_9->dev;
 FUNC_10(VAR_10, FUNC_0(FUNC_2(VAR_10)));
 FUNC_3(VAR_10, VAR_4);
 FUNC_5(VAR_10, VAR_3);
 FUNC_4(VAR_10, VAR_2);
 FUNC_7(VAR_10, VAR_6);
 FUNC_6(VAR_10, 0);
 FUNC_12(VAR_10);
 for (VAR_11 = VAR_8; ; VAR_11--) {
  FUNC_9(VAR_10, VAR_11);
  if (FUNC_11(VAR_10) == 0 || VAR_11 == VAR_7)
   break;
 }
 FUNC_1(1);

 FUNC_6(VAR_10, VAR_0);
 FUNC_8(VAR_10, VAR_1);
 FUNC_7(VAR_10, VAR_5);
 FUNC_12(VAR_10);
 FUNC_1(2);
}
