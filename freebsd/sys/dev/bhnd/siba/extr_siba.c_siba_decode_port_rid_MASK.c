
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u_int ;
struct TYPE_5__ {size_t num_admatch; size_t num_cfg_blocks; } ;
struct siba_devinfo {TYPE_3__* cfg; TYPE_2__ core_id; TYPE_1__* addrspace; } ;
typedef scalar_t__ device_t ;
typedef int bhnd_port_type ;
struct TYPE_6__ {int cb_rid; } ;
struct TYPE_4__ {int sa_rid; } ;


 int FUNC_0 (scalar_t__,scalar_t__,int,int,int *,size_t*,size_t*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct siba_devinfo* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 size_t FUNC_3 (size_t) ;
 size_t FUNC_4 (size_t) ;
 size_t FUNC_5 (size_t) ;
 size_t FUNC_6 (size_t) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_5, device_t VAR_6, int VAR_7, int VAR_8,
    bhnd_port_type *VAR_9, u_int *VAR_10, u_int *VAR_11)
{
 struct siba_devinfo *VAR_12;


 if (FUNC_2(VAR_6) != VAR_5)
  return (FUNC_0(FUNC_2(VAR_5), VAR_6,
      VAR_7, VAR_8, VAR_9, VAR_10, VAR_11));

 VAR_12 = FUNC_1(VAR_6);


 if (VAR_7 != VAR_4)
  return (VAR_2);


 for (u_int VAR_13 = 0; VAR_13 < VAR_12->core_id.num_admatch; VAR_13++) {
  if (VAR_12->addrspace[VAR_13].sa_rid != VAR_8)
   continue;

  *VAR_9 = VAR_1;
  *VAR_10 = FUNC_3(VAR_13);
  *VAR_11 = FUNC_4(VAR_13);
  return (0);
 }


 for (u_int VAR_14 = 0; VAR_14 < VAR_12->core_id.num_cfg_blocks; VAR_14++) {
  if (VAR_12->cfg[VAR_14].cb_rid != VAR_8)
   continue;

  *VAR_9 = VAR_0;
  *VAR_10 = FUNC_5(VAR_14);
  *VAR_11 = FUNC_6(VAR_14);
  return (0);
 }


 return (VAR_3);
}
