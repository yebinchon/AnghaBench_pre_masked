
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pol; int pin; int * dev; } ;
struct aml8726_sdxc_softc {TYPE_1__ pwr_en; } ;


 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct aml8726_sdxc_softc *VAR_0)
{

 if (VAR_0->pwr_en.dev == ((void*)0))
  return (0);

 return (FUNC_0(VAR_0->pwr_en.dev, VAR_0->pwr_en.pin,
     FUNC_1(VAR_0->pwr_en.pol)));
}
