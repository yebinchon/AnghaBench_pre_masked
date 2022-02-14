
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_device {struct snd_ac97* device_data; } ;
struct TYPE_2__ {scalar_t__ bus; } ;
struct snd_ac97 {TYPE_1__ dev; } ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(struct snd_device *VAR_0)
{
 struct snd_ac97 *VAR_1 = VAR_0->device_data;
 if (VAR_1->dev.bus)
  FUNC_0(&VAR_1->dev);
 return 0;
}
