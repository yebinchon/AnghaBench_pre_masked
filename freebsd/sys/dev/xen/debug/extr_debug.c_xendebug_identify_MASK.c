
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
 scalar_t__ FUNC_4 () ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_5(driver_t *VAR_1, device_t VAR_2)
{

 FUNC_1(FUNC_3(),
     ("Trying to add Xen debug device to non-xen guest"));

 if (FUNC_4() && !VAR_0)
  return;

 if (FUNC_0(VAR_2, 0, "debug", 0) == ((void*)0))
  FUNC_2("Unable to add Xen debug device.");
}
