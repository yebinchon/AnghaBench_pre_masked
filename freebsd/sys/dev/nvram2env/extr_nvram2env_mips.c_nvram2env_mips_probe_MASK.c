
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvram2env_softc {int bst; } ;
typedef int device_t ;


 struct nvram2env_softc* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_1)
{
 struct nvram2env_softc *VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 VAR_2->bst = VAR_0;

 return (FUNC_1(VAR_1));
}
