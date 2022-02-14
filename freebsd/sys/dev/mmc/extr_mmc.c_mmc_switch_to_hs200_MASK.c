
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct mmc_softc {int dev; } ;
struct mmc_ivars {int bus_width; int hs_tran_speed; int rca; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mmc_softc*,struct mmc_ivars*,int ) ;
 int FUNC_1 (struct mmc_softc*,struct mmc_ivars*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct mmc_softc *VAR_4, struct mmc_ivars *VAR_5,
    uint32_t VAR_6)
{
 device_t VAR_7;
 int VAR_8;
 uint16_t VAR_9;

 VAR_7 = VAR_4->dev;
 VAR_9 = VAR_5->rca;






 FUNC_3(VAR_7, VAR_5->hs_tran_speed);
 VAR_8 = FUNC_1(VAR_4, VAR_5, VAR_2);
 if (VAR_8 != VAR_0)
  return (VAR_8);





 VAR_8 = FUNC_0(VAR_4, VAR_5, VAR_1);
 if (VAR_8 != VAR_0)
  return (VAR_8);
 FUNC_2(VAR_7, VAR_5->bus_width);
 FUNC_4(VAR_4->dev, VAR_1);
 FUNC_5(VAR_7);


 VAR_8 = FUNC_1(VAR_4, VAR_5, VAR_3);
 if (VAR_8 != VAR_0)
  return (VAR_8);
 FUNC_3(VAR_7, VAR_6);
 FUNC_5(VAR_7);
 return (VAR_0);
}
