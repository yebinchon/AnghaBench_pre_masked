
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_device {struct hda_bus* device_data; } ;
struct hda_bus {int shutdown; } ;


 int FUNC_0 (struct hda_bus*) ;

__attribute__((used)) static int FUNC_1(struct snd_device *VAR_0)
{
 struct hda_bus *VAR_1 = VAR_0->device_data;
 VAR_1->shutdown = 1;
 return FUNC_0(VAR_1);
}
