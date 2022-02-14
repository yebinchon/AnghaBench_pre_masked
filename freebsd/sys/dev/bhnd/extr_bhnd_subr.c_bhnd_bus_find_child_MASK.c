
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ core_unit; } ;
struct TYPE_4__ {TYPE_1__ match; } ;
struct bhnd_core_match {TYPE_2__ m; int member_1; int member_0; } ;
typedef int device_t ;
typedef int bhnd_devclass_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,struct bhnd_core_match*) ;

device_t
FUNC_3(device_t VAR_0, bhnd_devclass_t VAR_1, int VAR_2)
{
 struct bhnd_core_match VAR_3 = {
  FUNC_0(VAR_1),
  FUNC_1(VAR_2)
 };

 if (VAR_2 == -1)
  VAR_3.m.match.core_unit = 0;

 return FUNC_2(VAR_0, &VAR_3);
}
