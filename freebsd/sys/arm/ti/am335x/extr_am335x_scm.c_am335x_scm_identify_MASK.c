
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int driver_t ;
typedef int * device_t ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int *,char*,int) ;
 int * FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(driver_t *VAR_1, device_t VAR_2)
{
 device_t VAR_3;


 if (FUNC_3() != VAR_0)
  return;


 if (FUNC_1(VAR_2, "am335x_scm", -1) != ((void*)0))
  return;

 VAR_3 = FUNC_0(VAR_2, "am335x_scm", -1);
 if (VAR_3 == ((void*)0))
  FUNC_2(VAR_2, "cannot add ti_scm child\n");
}
