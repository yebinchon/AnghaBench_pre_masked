
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct simplebus_softc {int scells; int acells; } ;
struct mrmlb_ofw_devinfo {int di_dinfo; int di_rl; } ;
typedef scalar_t__ phandle_t ;
typedef int * device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int * FUNC_2 (int *,int *,int) ;
 struct simplebus_softc* FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,struct mrmlb_ofw_devinfo*) ;
 int FUNC_6 (struct mrmlb_ofw_devinfo*,int ) ;
 struct mrmlb_ofw_devinfo* FUNC_7 (int,int ,int) ;
 scalar_t__ FUNC_8 (scalar_t__,struct simplebus_softc*) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,scalar_t__) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int *,scalar_t__,int *,int *) ;
 int FUNC_13 (int *,scalar_t__,int ,int ,int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,scalar_t__) ;

__attribute__((used)) static int
FUNC_17(device_t VAR_4)
{
 struct simplebus_softc *VAR_5;
 struct mrmlb_ofw_devinfo *VAR_6;
 device_t VAR_7;
 phandle_t VAR_8, VAR_9;

 VAR_8 = FUNC_11(VAR_4);
 FUNC_16(VAR_4, VAR_8);

 VAR_5 = FUNC_3(VAR_4);

 if (FUNC_8(VAR_8, VAR_5) < 0) {
  FUNC_4(VAR_4, "could not get ranges\n");
  return (VAR_0);
 }

 for (VAR_9 = FUNC_0(VAR_8); VAR_9 > 0; VAR_9 = FUNC_1(VAR_9)) {

  VAR_6 = FUNC_7(sizeof(*VAR_6), VAR_1, VAR_2 | VAR_3);
  if (FUNC_10(&VAR_6->di_dinfo, VAR_9) != 0) {
   FUNC_6(VAR_6, VAR_1);
   continue;
  }


  FUNC_15(&VAR_6->di_rl);
  FUNC_13(VAR_4, VAR_9, VAR_5->acells, VAR_5->scells,
      &VAR_6->di_rl);
  FUNC_12(VAR_4, VAR_9, &VAR_6->di_rl, ((void*)0));


  VAR_7 = FUNC_2(VAR_4, ((void*)0), -1);
  if (VAR_7 == ((void*)0)) {
   FUNC_14(&VAR_6->di_rl);
   FUNC_9(&VAR_6->di_dinfo);
   FUNC_6(VAR_6, VAR_1);
   continue;
  }

  FUNC_5(VAR_7, VAR_6);
 }

 return (0);
}
