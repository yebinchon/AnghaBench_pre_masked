
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snvs_softc {int memres; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 struct snvs_softc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1)
{
 struct snvs_softc *VAR_2;

 VAR_2 = FUNC_2(VAR_1);
 FUNC_1(VAR_2->dev);
 FUNC_0(VAR_2->dev, VAR_0, 0, VAR_2->memres);
 return (0);
}
