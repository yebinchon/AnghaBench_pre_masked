
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int driver_t ;
typedef int device_t ;


 int * FUNC_0 (int ,int ,char*,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(driver_t *VAR_0, device_t VAR_1)
{

 FUNC_1(FUNC_3(),
     ("Trying to attach privcmd device on non Xen domain"));

 if (FUNC_0(VAR_1, 0, "privcmd", 0) == ((void*)0))
  FUNC_2("unable to attach privcmd user-space device");
}
