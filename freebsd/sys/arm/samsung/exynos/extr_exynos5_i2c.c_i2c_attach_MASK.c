
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_softc {int mutex; int * iicbus; int * res; int bsh; int bst; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct i2c_softc*,int ,int) ;
 scalar_t__ FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ) ;
 struct i2c_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int VAR_7 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,char*,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_8)
{
 struct i2c_softc *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_5(VAR_8);
 VAR_9->dev = VAR_8;

 FUNC_8(&VAR_9->mutex, FUNC_4(VAR_8), "I2C", VAR_5);

 if (FUNC_1(VAR_8, VAR_7, VAR_9->res)) {
  FUNC_6(VAR_8, "could not allocate resources\n");
  return (VAR_0);
 }


 VAR_9->bst = FUNC_10(VAR_9->res[0]);
 VAR_9->bsh = FUNC_9(VAR_9->res[0]);

 VAR_9->iicbus = FUNC_3(VAR_8, "iicbus", -1);
 if (VAR_9->iicbus == ((void*)0)) {
  FUNC_6(VAR_8, "could not add iicbus child");
  FUNC_7(&VAR_9->mutex);
  return (VAR_0);
 }

 FUNC_0(VAR_9, VAR_4, 0);
 FUNC_0(VAR_9, VAR_1, 0x00);


 VAR_10 = (VAR_6);
        VAR_10 |= (VAR_2 << VAR_3);
 FUNC_0(VAR_9, VAR_4, VAR_10);

 FUNC_2(VAR_8);

 return (0);
}
