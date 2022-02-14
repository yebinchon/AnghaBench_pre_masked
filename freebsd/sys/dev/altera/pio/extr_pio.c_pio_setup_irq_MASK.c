
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pio_softc {int dev; int ih; int * res; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int,int *,void*,void*,int *) ;
 struct pio_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2, void *VAR_3, void *VAR_4)
{
 struct pio_softc *VAR_5;

 VAR_5 = FUNC_1(VAR_2);


 if (FUNC_0(VAR_5->dev, VAR_5->res[1], VAR_1 | VAR_0,
  ((void*)0), VAR_3, VAR_4, &VAR_5->ih)) {
  FUNC_2(VAR_5->dev, "Unable to setup intr\n");
  return (1);
 }

 return (0);
}
