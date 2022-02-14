
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct snddev_info {int flags; } ;
typedef int device_t ;


 struct snddev_info* FUNC_0 (int ) ;

uint32_t
FUNC_1(device_t VAR_0)
{
 struct snddev_info *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->flags;
}
