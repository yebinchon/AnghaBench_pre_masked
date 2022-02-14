
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aml8726_rng_softc {int ticks; int co; int res; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int,int ,struct aml8726_rng_softc*) ;
 struct aml8726_rng_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_5(device_t VAR_4)
{
 struct aml8726_rng_softc *VAR_5 = FUNC_3(VAR_4);

 VAR_5->dev = VAR_4;

 if (FUNC_0(VAR_4, VAR_2, VAR_5->res)) {
  FUNC_4(VAR_4, "can not allocate resources for device\n");
  return (VAR_0);
 }


 if (VAR_3 > 100)
  VAR_5->ticks = VAR_3 / 100;
 else
  VAR_5->ticks = 1;

 FUNC_1(&VAR_5->co, 1);
 FUNC_2(&VAR_5->co, VAR_5->ticks, VAR_1, VAR_5);

 return (0);
}
