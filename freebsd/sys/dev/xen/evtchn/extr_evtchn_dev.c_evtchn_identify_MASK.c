
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int driver_t ;
typedef int device_t ;


 int * FUNC_0 (int ,int ,char*,int ) ;
 int FUNC_1 (int ,char*) ;
 int * VAR_0 ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(driver_t *VAR_1, device_t VAR_2)
{

 FUNC_1((FUNC_3()),
     ("Trying to attach evtchn device on non Xen domain"));

 VAR_0 = FUNC_0(VAR_2, 0, "evtchn", 0);
 if (VAR_0 == ((void*)0))
  FUNC_2("unable to attach evtchn user-space device");
}
