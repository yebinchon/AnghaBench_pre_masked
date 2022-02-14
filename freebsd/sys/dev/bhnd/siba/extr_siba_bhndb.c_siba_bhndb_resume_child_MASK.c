
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u_int ;
struct TYPE_4__ {size_t num_cfg_blocks; } ;
struct siba_devinfo {TYPE_1__** cfg_res; TYPE_2__ core_id; } ;
typedef scalar_t__ device_t ;
struct TYPE_3__ {int res; } ;


 int FUNC_0 (scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 struct siba_devinfo* FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,struct siba_devinfo*) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_2, device_t VAR_3)
{
 struct siba_devinfo *VAR_4;
 int VAR_5;

 if (FUNC_4(VAR_3) != VAR_2)
  FUNC_1(FUNC_4(VAR_2), VAR_3);

 if (!FUNC_5(VAR_3))
  return (VAR_0);

 VAR_4 = FUNC_3(VAR_3);


 for (u_int VAR_6 = 0; VAR_6 < VAR_4->core_id.num_cfg_blocks; VAR_6++) {
  if (VAR_4->cfg_res[VAR_6] == ((void*)0))
   continue;

  VAR_5 = FUNC_0(FUNC_4(VAR_2), VAR_2,
      VAR_1, VAR_4->cfg_res[VAR_6]->res);
  if (VAR_5) {
   FUNC_6(VAR_2, VAR_4);
   return (VAR_5);
  }
 }


 if ((VAR_5 = FUNC_2(VAR_2, VAR_3))) {
  FUNC_6(VAR_2, VAR_4);
  return (VAR_5);
 }

 return (0);
}
