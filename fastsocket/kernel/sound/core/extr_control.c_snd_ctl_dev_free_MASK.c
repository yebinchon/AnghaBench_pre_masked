
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_device {struct snd_card* device_data; } ;
struct TYPE_2__ {int next; } ;
struct snd_card {int controls_rwsem; TYPE_1__ controls; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct snd_card*,struct snd_kcontrol*) ;
 struct snd_kcontrol* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct snd_device *VAR_0)
{
 struct snd_card *VAR_1 = VAR_0->device_data;
 struct snd_kcontrol *VAR_2;

 FUNC_0(&VAR_1->controls_rwsem);
 while (!FUNC_1(&VAR_1->controls)) {
  VAR_2 = FUNC_3(VAR_1->controls.next);
  FUNC_2(VAR_1, VAR_2);
 }
 FUNC_4(&VAR_1->controls_rwsem);
 return 0;
}
