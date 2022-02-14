
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct localbus_softc {int sc_banks; int * sc_dev; } ;
struct TYPE_3__ {int obd_name; } ;
struct localbus_devinfo {TYPE_1__ di_ofw; int di_res; } ;
typedef scalar_t__ phandle_t ;
typedef int * device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int *,int) ;
 struct localbus_softc* FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,...) ;
 int FUNC_6 (int *,struct localbus_devinfo*) ;
 scalar_t__ FUNC_7 (scalar_t__,struct localbus_softc*,struct localbus_devinfo*) ;
 int FUNC_8 (struct localbus_devinfo*,int ) ;
 int VAR_3 ;
 struct localbus_devinfo* FUNC_9 (int,int ,int) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (TYPE_1__*) ;
 scalar_t__ FUNC_12 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static int
FUNC_17(device_t VAR_4)
{
 device_t VAR_5;
 struct localbus_softc *VAR_6;
 struct localbus_devinfo *VAR_7;
 phandle_t VAR_8, VAR_9;

 VAR_6 = FUNC_4(VAR_4);
 VAR_6->sc_dev = VAR_4;
 VAR_6->sc_banks = VAR_3;




 VAR_8 = FUNC_13(VAR_4);
 for (VAR_9 = FUNC_0(VAR_8); VAR_9 != 0;
     VAR_9 = FUNC_1(VAR_9)) {


  if (!(FUNC_14(VAR_9)))
   continue;

  if (!(FUNC_10(VAR_9)))
   continue;

  VAR_7 = FUNC_9(sizeof(*VAR_7), VAR_0, VAR_1 | VAR_2);
  if (FUNC_12(&VAR_7->di_ofw, VAR_9) != 0) {
   FUNC_8(VAR_7, VAR_0);
   FUNC_5(VAR_4, "could not set up devinfo\n");
   continue;
  }

  FUNC_16(&VAR_7->di_res);
  if (FUNC_7(VAR_9, VAR_6, VAR_7)) {
   FUNC_5(VAR_4, "could not process 'reg' "
       "property\n");
   FUNC_11(&VAR_7->di_ofw);
   FUNC_8(VAR_7, VAR_0);
   continue;
  }


  VAR_5 = FUNC_3(VAR_4, ((void*)0), -1);
  if (VAR_5 == ((void*)0)) {
   FUNC_5(VAR_4, "could not add child: %s\n",
       VAR_7->di_ofw.obd_name);
   FUNC_15(&VAR_7->di_res);
   FUNC_11(&VAR_7->di_ofw);
   FUNC_8(VAR_7, VAR_0);
   continue;
  }



  FUNC_6(VAR_5, VAR_7);
 }

 return (FUNC_2(VAR_4));
}
