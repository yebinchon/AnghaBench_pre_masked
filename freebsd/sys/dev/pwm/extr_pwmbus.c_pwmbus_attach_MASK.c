
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct pwmbus_softc {scalar_t__ nchannels; int * dev; } ;
struct pwmbus_ivars {scalar_t__ pi_channel; } ;
typedef int * device_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,scalar_t__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct pwmbus_ivars* FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 struct pwmbus_softc* FUNC_7 (int *) ;
 int FUNC_8 (int *,char*,scalar_t__) ;
 int * FUNC_9 (int *,int ,char*,int) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_1)
{
 struct pwmbus_softc *VAR_2;
 struct pwmbus_ivars *VAR_3;
 device_t VAR_4, VAR_5;
 u_int VAR_6;

 VAR_2 = FUNC_7(VAR_1);
 VAR_2->dev = VAR_1;
 VAR_5 = FUNC_6(VAR_1);

 if (FUNC_0(VAR_5, &VAR_2->nchannels) != 0 ||
     VAR_2->nchannels == 0) {
  FUNC_8(VAR_2->dev, "No channels on parent %s\n",
      FUNC_5(VAR_5));
  return (VAR_0);
 }


 for (VAR_6 = 0; VAR_6 < VAR_2->nchannels; ++VAR_6) {
  if ((VAR_4 = FUNC_9(VAR_2->dev, 0, "pwmc", -1)) == ((void*)0)) {
   FUNC_8(VAR_1, "failed to add pwmc child device "
       "for channel %u\n", VAR_6);
   continue;
  }
  VAR_3 = FUNC_4(VAR_4);
  VAR_3->pi_channel = VAR_6;
 }

 FUNC_1(VAR_1);
 FUNC_3(VAR_1);

 return (FUNC_2(VAR_1));
}
