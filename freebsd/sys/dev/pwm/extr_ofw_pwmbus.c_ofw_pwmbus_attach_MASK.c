
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ nchannels; int * dev; } ;
struct ofw_pwmbus_softc {TYPE_1__ base; } ;
struct TYPE_4__ {scalar_t__ pi_channel; } ;
struct ofw_pwmbus_ivars {TYPE_2__ base; int devinfo; } ;
typedef scalar_t__ phandle_t ;
typedef scalar_t__ pcell_t ;
typedef int * device_t ;
typedef int chan ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,char*,scalar_t__*,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int *,scalar_t__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 struct ofw_pwmbus_ivars* FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;
 struct ofw_pwmbus_softc* FUNC_11 (int *) ;
 int FUNC_12 (int *,char*,scalar_t__) ;
 scalar_t__ FUNC_13 (int *,scalar_t__) ;
 scalar_t__ FUNC_14 (int *) ;
 int * FUNC_15 (int *,int ,char*,int) ;

__attribute__((used)) static int
FUNC_16(device_t VAR_1)
{
 struct ofw_pwmbus_softc *VAR_2;
 struct ofw_pwmbus_ivars *VAR_3;
 phandle_t VAR_4;
 device_t VAR_5, VAR_6;
 pcell_t VAR_7;
 bool VAR_8;

 VAR_2 = FUNC_11(VAR_1);
 VAR_2->base.dev = VAR_1;
 VAR_6 = FUNC_10(VAR_1);

 if (FUNC_3(VAR_6, &VAR_2->base.nchannels) != 0 ||
     VAR_2->base.nchannels == 0) {
  FUNC_12(VAR_1, "No channels on parent %s\n",
      FUNC_9(VAR_6));
  return (VAR_0);
 }






 VAR_8 = 0;
 VAR_4 = FUNC_14(VAR_1);
 for (VAR_4 = FUNC_0(VAR_4); VAR_4 != 0; VAR_4 = FUNC_2(VAR_4)) {




  if (FUNC_1(VAR_4, "reg", &VAR_7, sizeof(VAR_7)) == -1)
   continue;
  if (VAR_7 >= VAR_2->base.nchannels)
   continue;

  if ((VAR_5 = FUNC_15(VAR_1, 0, ((void*)0), -1)) == ((void*)0))
   continue;

  VAR_3 = FUNC_8(VAR_5);
  VAR_3->base.pi_channel = VAR_7;


  if (FUNC_13(&VAR_3->devinfo, VAR_4) != 0) {
   FUNC_7(VAR_1, VAR_5);
   continue;
  }
  VAR_8 = 1;
 }
 if (!VAR_8) {
  for (VAR_7 = 0; VAR_7 < VAR_2->base.nchannels; ++VAR_7) {
   VAR_5 = FUNC_15(VAR_1, 0, "pwmc", -1);
   if (VAR_5 == ((void*)0)) {
    FUNC_12(VAR_1, "failed to add pwmc child "
        " device for channel %u\n", VAR_7);
    continue;
   }
   VAR_3 = FUNC_8(VAR_5);
   VAR_3->base.pi_channel = VAR_7;
  }
 }
 FUNC_4(VAR_1);
 FUNC_6(VAR_1);

 return (FUNC_5(VAR_1));
}
