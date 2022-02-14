
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_nvram_cfe_softc {int store; } ;
struct bcm_platform {int services; } ;
typedef int device_t ;


 int VAR_0 ;
 struct bcm_platform* FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ) ;
 struct bhnd_nvram_cfe_softc* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1)
{
 struct bcm_platform *VAR_2;
 struct bhnd_nvram_cfe_softc *VAR_3;
 int VAR_4;

 VAR_2 = FUNC_0();
 VAR_3 = FUNC_3(VAR_1);

 VAR_4 = FUNC_2(&VAR_2->services, VAR_1,
     VAR_0);
 if (VAR_4)
  return (VAR_4);

 FUNC_1(VAR_3->store);

 return (0);
}
