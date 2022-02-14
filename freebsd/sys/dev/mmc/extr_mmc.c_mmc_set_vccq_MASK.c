
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_softc {int dev; } ;
struct mmc_ivars {int vccq_180; int vccq_120; } ;
typedef enum mmc_bus_timing { ____Placeholder_mmc_bus_timing } mmc_bus_timing ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_3(struct mmc_softc *VAR_5, struct mmc_ivars *VAR_6,
    enum mmc_bus_timing VAR_7)
{

 if (FUNC_0(&VAR_6->vccq_120, VAR_7))
  FUNC_1(VAR_5->dev, VAR_2);
 else if (FUNC_0(&VAR_6->vccq_180, VAR_7))
  FUNC_1(VAR_5->dev, VAR_3);
 else
  FUNC_1(VAR_5->dev, VAR_4);
 if (FUNC_2(VAR_5->dev) != 0)
  return (VAR_0);
 else
  return (VAR_1);
}
