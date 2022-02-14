
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_2__ {int intr_en; scalar_t__ intr_flag; } ;
struct siba_devinfo {TYPE_1__ core_id; } ;
typedef scalar_t__ device_t ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__*) ;
 int VAR_0 ;
 int FUNC_1 (int,char*) ;
 struct siba_devinfo* FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;

int
FUNC_5(device_t VAR_1, device_t VAR_2, u_int VAR_3, u_int *VAR_4)
{
 struct siba_devinfo *VAR_5;


 if (FUNC_3(VAR_2) != VAR_1)
  return (FUNC_0(FUNC_3(VAR_1), VAR_2,
      VAR_3, VAR_4));


 if (VAR_3 >= FUNC_4(VAR_1, VAR_2))
  return (VAR_0);

 FUNC_1(VAR_3 == 0, ("invalid ivec %u", VAR_3));

 VAR_5 = FUNC_2(VAR_2);

 FUNC_1(VAR_5->core_id.intr_en,
     ("core does not have an interrupt assigned"));

 *VAR_4 = VAR_5->core_id.intr_flag;
 return (0);
}
