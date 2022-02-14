
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_nvram_cfe_softc {int store; int dev; } ;
struct bcm_platform {int services; int * nvram_cls; int * nvram_io; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 struct bcm_platform* FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 struct bhnd_nvram_cfe_softc* FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_1)
{
 struct bcm_platform *VAR_2;
 struct bhnd_nvram_cfe_softc *VAR_3;
 int VAR_4;

 VAR_2 = FUNC_1();
 FUNC_0(VAR_2->nvram_io != ((void*)0), ("missing NVRAM I/O context"));
 FUNC_0(VAR_2->nvram_cls != ((void*)0), ("missing NVRAM class"));

 VAR_3 = FUNC_5(VAR_1);
 VAR_3->dev = VAR_1;

 VAR_4 = FUNC_3(&VAR_3->store, VAR_2->nvram_io,
     VAR_2->nvram_cls);
 if (VAR_4)
  return (VAR_4);

 VAR_4 = FUNC_4(&VAR_2->services, VAR_1,
     VAR_0, 0);
 if (VAR_4) {
  FUNC_2(VAR_3->store);
  return (VAR_4);
 }

 return (VAR_4);
}
