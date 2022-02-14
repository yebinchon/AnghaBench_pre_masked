
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_softc {int * mii_dev; } ;
typedef int device_t ;


 int FUNC_0 (struct mii_softc*,int ) ;
 struct mii_softc* FUNC_1 (int ) ;
 int VAR_0 ;

int
FUNC_2(device_t VAR_1)
{
 struct mii_softc *VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 VAR_2->mii_dev = ((void*)0);
 FUNC_0(VAR_2, VAR_0);
 return (0);
}
