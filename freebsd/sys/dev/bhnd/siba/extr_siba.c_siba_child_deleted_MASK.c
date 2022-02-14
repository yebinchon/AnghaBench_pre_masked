
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siba_devinfo {int dummy; } ;
struct bhnd_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ) ;
 struct siba_devinfo* FUNC_1 (int ) ;
 struct bhnd_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int ,struct siba_devinfo*) ;

__attribute__((used)) static void
FUNC_5(device_t VAR_0, device_t VAR_1)
{
 struct bhnd_softc *VAR_2;
 struct siba_devinfo *VAR_3;

 VAR_2 = FUNC_2(VAR_0);


 FUNC_0(VAR_0, VAR_1);


 if ((VAR_3 = FUNC_1(VAR_1)) != ((void*)0))
  FUNC_4(VAR_0, VAR_1, VAR_3);

 FUNC_3(VAR_1, ((void*)0));
}
