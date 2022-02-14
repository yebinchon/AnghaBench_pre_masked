
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct mmc_softc {int dev; } ;
struct mmc_ivars {int bus_width; int hs_tran_speed; int rca; } ;
typedef enum mmc_bus_timing { ____Placeholder_mmc_bus_timing } mmc_bus_timing ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mmc_softc*,struct mmc_ivars*,int) ;
 int FUNC_1 (struct mmc_softc*,struct mmc_ivars*,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct mmc_softc *VAR_2, struct mmc_ivars *VAR_3,
    uint32_t VAR_4, enum mmc_bus_timing VAR_5)
{
 device_t VAR_6;
 int VAR_7;
 uint16_t VAR_8;

 VAR_6 = VAR_2->dev;
 VAR_8 = VAR_3->rca;






 FUNC_3(VAR_6, VAR_3->hs_tran_speed);
 VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_1);
 if (VAR_7 != VAR_0)
  return (VAR_7);





 VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_5);
 if (VAR_7 != VAR_0)
  return (VAR_7);
 FUNC_2(VAR_6, VAR_3->bus_width);
 FUNC_4(VAR_6);


 VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_5);
 if (VAR_7 != VAR_0)
  return (VAR_7);
 FUNC_3(VAR_6, VAR_4);
 FUNC_4(VAR_6);
 return (VAR_0);
}
