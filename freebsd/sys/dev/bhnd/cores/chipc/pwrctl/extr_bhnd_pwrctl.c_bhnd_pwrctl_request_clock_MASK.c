
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_pwrctl_softc {int clkres_list; } ;
struct bhnd_pwrctl_clkres {scalar_t__ clock; int owner; } ;
typedef int device_t ;
typedef scalar_t__ bhnd_clock ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct bhnd_pwrctl_softc*) ;
 int FUNC_2 (struct bhnd_pwrctl_softc*) ;
 int FUNC_3 (int *,struct bhnd_pwrctl_clkres*,int ) ;
 int FUNC_4 (int *,struct bhnd_pwrctl_clkres*,int ,int ) ;
 int VAR_5 ;
 struct bhnd_pwrctl_clkres* FUNC_5 (struct bhnd_pwrctl_softc*,int ) ;
 int FUNC_6 (struct bhnd_pwrctl_softc*,int ) ;
 int VAR_6 ;
 struct bhnd_pwrctl_softc* FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,int) ;
 int FUNC_9 (struct bhnd_pwrctl_clkres*,int ) ;
 struct bhnd_pwrctl_clkres* FUNC_10 (int,int ,int ) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_7, device_t VAR_8, bhnd_clock VAR_9)
{
 struct bhnd_pwrctl_softc *VAR_10;
 struct bhnd_pwrctl_clkres *VAR_11;
 int VAR_12;

 VAR_10 = FUNC_7(VAR_7);
 VAR_12 = 0;

 FUNC_1(VAR_10);

 VAR_11 = FUNC_5(VAR_10, VAR_8);


 if (VAR_9 == VAR_0) {

  if (VAR_11 == ((void*)0)) {
   FUNC_2(VAR_10);
   return (0);
  }


  FUNC_4(&VAR_10->clkres_list, VAR_11,
      VAR_5, VAR_6);

  if ((VAR_12 = FUNC_6(VAR_10, VAR_1))) {
   FUNC_8(VAR_7, "clock transition failed: %d\n",
       VAR_12);


   FUNC_3(&VAR_10->clkres_list, VAR_11, VAR_6);

   FUNC_2(VAR_10);
   return (VAR_12);
  }


  FUNC_9(VAR_11, VAR_3);

  FUNC_2(VAR_10);
  return (0);
 }


 if (VAR_11 == ((void*)0)) {
  VAR_11 = FUNC_10(sizeof(struct bhnd_pwrctl_clkres), VAR_3,
      VAR_4);
  if (VAR_11 == ((void*)0))
   return (VAR_2);

  VAR_11->owner = VAR_8;
  VAR_11->clock = VAR_9;

  FUNC_3(&VAR_10->clkres_list, VAR_11, VAR_6);
 } else {
  FUNC_0(VAR_11->owner == VAR_8, ("invalid owner"));
  VAR_11->clock = VAR_9;
 }


 VAR_12 = FUNC_6(VAR_10, VAR_1);
 if (VAR_12) {
  FUNC_4(&VAR_10->clkres_list, VAR_11, VAR_5,
      VAR_6);
  FUNC_9(VAR_11, VAR_3);
 }

 FUNC_2(VAR_10);
 return (VAR_12);
}
