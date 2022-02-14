
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct mvs_controller {TYPE_1__* interrupt; } ;
typedef int driver_intr_t ;
typedef int driver_filter_t ;
typedef int device_t ;
struct TYPE_2__ {void* argument; int * function; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct mvs_controller* FUNC_1 (int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1, device_t VAR_2, struct resource *VAR_3,
     int VAR_4, driver_filter_t *VAR_5, driver_intr_t *VAR_6,
     void *VAR_7, void **VAR_8)
{
 struct mvs_controller *VAR_9 = FUNC_1(VAR_1);
 int VAR_10 = (intptr_t)FUNC_0(VAR_2);

 if (VAR_5 != ((void*)0)) {
  FUNC_2("mvs.c: we cannot use a filter here\n");
  return (VAR_0);
 }
 VAR_9->interrupt[VAR_10].function = VAR_6;
 VAR_9->interrupt[VAR_10].argument = VAR_7;
 return (0);
}
