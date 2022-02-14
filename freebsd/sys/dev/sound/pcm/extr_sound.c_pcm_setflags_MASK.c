
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct snddev_info {int flags; } ;
typedef int device_t ;


 struct snddev_info* FUNC_0 (int ) ;

void
FUNC_1(device_t VAR_0, uint32_t VAR_1)
{
 struct snddev_info *VAR_2 = FUNC_0(VAR_0);

 VAR_2->flags = VAR_1;
}
