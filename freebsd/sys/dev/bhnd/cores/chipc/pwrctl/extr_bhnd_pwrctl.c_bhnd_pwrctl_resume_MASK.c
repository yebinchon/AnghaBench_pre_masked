
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_pwrctl_softc {int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct bhnd_pwrctl_softc*) ;
 int FUNC_1 (struct bhnd_pwrctl_softc*) ;
 int FUNC_2 (struct bhnd_pwrctl_softc*) ;
 int FUNC_3 (struct bhnd_pwrctl_softc*,int ) ;
 struct bhnd_pwrctl_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_1)
{
 struct bhnd_pwrctl_softc *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_4(VAR_1);

 FUNC_0(VAR_2);


 if ((VAR_3 = FUNC_2(VAR_2))) {
  FUNC_5(VAR_2->dev, "PWRCTL init failed: %d\n", VAR_3);
  goto cleanup;
 }


 if ((VAR_3 = FUNC_3(VAR_2, VAR_0))) {
  FUNC_5(VAR_2->dev, "clock state restore failed: %d\n",
      VAR_3);
  goto cleanup;
 }

cleanup:
 FUNC_1(VAR_2);
 return (VAR_3);
}
