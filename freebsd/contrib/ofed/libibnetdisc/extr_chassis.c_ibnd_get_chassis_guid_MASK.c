
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int ibnd_fabric_t ;
struct TYPE_3__ {int chassisguid; } ;
typedef TYPE_1__ ibnd_chassis_t ;


 int FUNC_0 (char*) ;
 TYPE_1__* FUNC_1 (int *,unsigned char) ;

uint64_t FUNC_2(ibnd_fabric_t * VAR_0, unsigned char VAR_1)
{
 ibnd_chassis_t *VAR_2;

 if (!VAR_0) {
  FUNC_0("fabric parameter NULL\n");
  return 0;
 }

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2->chassisguid;
 else
  return 0;
}
