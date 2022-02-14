
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
struct siba_core_id {size_t num_admatch; int num_cfg_blocks; TYPE_1__* admatch; } ;
struct siba_devinfo {struct siba_core_id core_id; } ;
typedef int device_t ;
struct TYPE_2__ {int am_size; int am_base; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct siba_devinfo*,size_t,int ,int ,int) ;
 int FUNC_1 (int ,int ,struct siba_devinfo*) ;

int
FUNC_2(device_t VAR_2, device_t VAR_3, struct siba_devinfo *VAR_4,
    const struct siba_core_id *VAR_5)
{
 int VAR_6;

 VAR_4->core_id = *VAR_5;


 for (uint8_t VAR_7 = 0; VAR_7 < VAR_5->num_admatch; VAR_7++) {
  uint32_t VAR_8;




  VAR_8 = 0;
  if (VAR_7 == VAR_1)
   VAR_8 = VAR_5->num_cfg_blocks * VAR_0;


  VAR_6 = FUNC_0(VAR_4, VAR_7,
      VAR_5->admatch[VAR_7].am_base, VAR_5->admatch[VAR_7].am_size,
      VAR_8);
  if (VAR_6)
   return (VAR_6);
 }


 if ((VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4)))
  return (VAR_6);

 return (0);
}
