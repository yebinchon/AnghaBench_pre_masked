
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twsi_softc {int mutex; int * res; int * intrhand; int dev; int * iicbus; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,int *) ;
 struct twsi_softc* FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;

int
FUNC_6(device_t VAR_1)
{
 struct twsi_softc *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_4(VAR_1);

 if ((VAR_3 = FUNC_0(VAR_1)) != 0)
  return (VAR_3);

 if (VAR_2->iicbus != ((void*)0))
  if ((VAR_3 = FUNC_3(VAR_1, VAR_2->iicbus)) != 0)
   return (VAR_3);

 if (VAR_2->intrhand != ((void*)0))
  FUNC_2(VAR_2->dev, VAR_2->res[1], VAR_2->intrhand);

 FUNC_1(VAR_1, VAR_0, VAR_2->res);

 FUNC_5(&VAR_2->mutex);
 return (0);
}
