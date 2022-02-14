
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* device_t ;
typedef int devclass_t ;
struct TYPE_5__ {scalar_t__ devclass; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (scalar_t__,TYPE_1__*) ;
 int FUNC_3 (char const*,int *,int ) ;
 int FUNC_4 (char*) ;

int
FUNC_5(device_t VAR_3, const char *VAR_4)
{
 devclass_t VAR_5;
 int VAR_6;

 if (!VAR_4) {
  if (VAR_3->devclass)
   FUNC_2(VAR_3->devclass, VAR_3);
  return (0);
 }

 if (VAR_3->devclass) {
  FUNC_4("device_set_devclass: device class already set\n");
  return (VAR_0);
 }

 VAR_5 = FUNC_3(VAR_4, ((void*)0), VAR_2);
 if (!VAR_5)
  return (VAR_1);

 VAR_6 = FUNC_1(VAR_5, VAR_3);

 FUNC_0();
 return (VAR_6);
}
