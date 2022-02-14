
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int obd_name; } ;
struct lebuffer_devinfo {TYPE_1__ ldi_obdinfo; } ;
typedef scalar_t__ phandle_t ;
typedef int * device_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int *,struct lebuffer_devinfo*) ;
 int FUNC_6 (struct lebuffer_devinfo*) ;
 struct lebuffer_devinfo* FUNC_7 (int *,scalar_t__) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_0)
{
 struct lebuffer_devinfo *VAR_1;
 device_t VAR_2;
 phandle_t VAR_3;
 int VAR_4;

 VAR_4 = 0;
 for (VAR_3 = FUNC_0(FUNC_8(VAR_0)); VAR_3 != 0;
     VAR_3 = FUNC_1(VAR_3)) {
  if ((VAR_1 = FUNC_7(VAR_0, VAR_3)) == ((void*)0))
   continue;
  if (VAR_4 != 0) {
   FUNC_4(VAR_0,
       "<%s>: only one child per buffer supported\n",
       VAR_1->ldi_obdinfo.obd_name);
   FUNC_6(VAR_1);
   continue;
  }
  if ((VAR_2 = FUNC_3(VAR_0, ((void*)0), -1)) == ((void*)0)) {
   FUNC_4(VAR_0, "<%s>: device_add_child failed\n",
       VAR_1->ldi_obdinfo.obd_name);
   FUNC_6(VAR_1);
   continue;
  }
  FUNC_5(VAR_2, VAR_1);
  VAR_4++;
 }
 return (FUNC_2(VAR_0));
}
