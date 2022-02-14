
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct bhnd_pwrctl_softc {int res; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (struct bhnd_pwrctl_softc*,int ) ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (struct bhnd_pwrctl_softc*,int ) ;
 scalar_t__ FUNC_3 (struct bhnd_pwrctl_softc*,int) ;
 scalar_t__ FUNC_4 (struct bhnd_pwrctl_softc*) ;

int
FUNC_5(struct bhnd_pwrctl_softc *VAR_13)
{
 uint32_t VAR_14;
 uint32_t VAR_15, VAR_16, VAR_17;
 uint32_t VAR_18, VAR_19;
 int VAR_20;

 VAR_15 = VAR_3;


 if (FUNC_0(VAR_13, VAR_12)) {
  VAR_14 = (VAR_2 << VAR_8);
  VAR_14 &= VAR_7;
  FUNC_1(VAR_13->res, VAR_9, VAR_14);
 }







 VAR_16 = FUNC_4(VAR_13);
 if (VAR_16 != VAR_6)
  VAR_15 += VAR_10;


 if (FUNC_0(VAR_13, VAR_12))
  VAR_17 = FUNC_3(VAR_13, 0);
 else
  VAR_17 = FUNC_3(VAR_13, 1);

 VAR_18 = ((VAR_17 * VAR_15) + 999999) / 1000000;
 VAR_19 = ((VAR_17 * VAR_1) + 999999) / 1000000;

 FUNC_1(VAR_13->res, VAR_5, VAR_18);
 FUNC_1(VAR_13->res, VAR_4, VAR_19);


 if (FUNC_0(VAR_13, VAR_11)) {
  if ((VAR_20 = FUNC_2(VAR_13, VAR_0)))
   return (VAR_20);
 }

 return (0);
}
