
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_softc {int * res; int rb_sdapin; int rb_sclpin; int * iicbus; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (int ,int *) ;
 struct i2c_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_1)
{
 struct i2c_softc *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_3(VAR_1);

 if ((VAR_3 = FUNC_0(VAR_2->dev)) != 0) {
  FUNC_4(VAR_2->dev, "cannot detach child devices\n");
  return (VAR_3);
 }

 if (VAR_2->iicbus != ((void*)0))
  FUNC_2(VAR_1, VAR_2->iicbus);


 FUNC_5(VAR_2->rb_sclpin);
 FUNC_5(VAR_2->rb_sdapin);

 if (VAR_2->res != ((void*)0))
  FUNC_1(VAR_1, VAR_0, 0, VAR_2->res);

 return (0);
}
