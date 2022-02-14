
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_2__ {int intr_en; } ;
struct siba_devinfo {TYPE_1__ core_id; } ;
typedef scalar_t__ device_t ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 struct siba_devinfo* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

u_int
FUNC_3(device_t VAR_0, device_t VAR_1)
{
 struct siba_devinfo *VAR_2;


 if (FUNC_2(VAR_1) != VAR_0)
  return (FUNC_0(FUNC_2(VAR_0), VAR_1));

 VAR_2 = FUNC_1(VAR_1);
 if (!VAR_2->core_id.intr_en) {

  return (0);
 } else {

  return (1);
 }
}
