
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_device {struct snd_cs5530* device_data; } ;
struct snd_cs5530 {int dummy; } ;


 int FUNC_0 (struct snd_cs5530*) ;

__attribute__((used)) static int FUNC_1(struct snd_device *VAR_0)
{
 struct snd_cs5530 *VAR_1 = VAR_0->device_data;
 return FUNC_0(VAR_1);
}
