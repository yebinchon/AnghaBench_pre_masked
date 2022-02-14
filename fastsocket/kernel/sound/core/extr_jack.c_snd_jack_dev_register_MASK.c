
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_jack {char* id; int registered; TYPE_2__* input_dev; int name; } ;
struct snd_device {struct snd_card* card; struct snd_jack* device_data; } ;
struct snd_card {char* shortname; } ;
struct TYPE_3__ {scalar_t__ parent; } ;
struct TYPE_4__ {TYPE_1__ dev; int name; } ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (struct snd_card*) ;
 int FUNC_2 (int ,int,char*,char*,char*) ;

__attribute__((used)) static int FUNC_3(struct snd_device *VAR_0)
{
 struct snd_jack *VAR_1 = VAR_0->device_data;
 struct snd_card *VAR_2 = VAR_0->card;
 int VAR_3;

 FUNC_2(VAR_1->name, sizeof(VAR_1->name), "%s %s",
   VAR_2->shortname, VAR_1->id);
 VAR_1->input_dev->name = VAR_1->name;


 if (!VAR_1->input_dev->dev.parent)
  VAR_1->input_dev->dev.parent = FUNC_1(VAR_2);

 VAR_3 = FUNC_0(VAR_1->input_dev);
 if (VAR_3 == 0)
  VAR_1->registered = 1;

 return VAR_3;
}
