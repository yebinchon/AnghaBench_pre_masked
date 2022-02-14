
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vx_core {int dummy; } ;
struct snd_device {struct vx_core* device_data; } ;


 int FUNC_0 (struct vx_core*) ;
 int FUNC_1 (struct vx_core*) ;

__attribute__((used)) static int FUNC_2(struct snd_device *VAR_0)
{
 struct vx_core *VAR_1 = VAR_0->device_data;

 FUNC_1(VAR_1);
 FUNC_0(VAR_1);
 return 0;
}
