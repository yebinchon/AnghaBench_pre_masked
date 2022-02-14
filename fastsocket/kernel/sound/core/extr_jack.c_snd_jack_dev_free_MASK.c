
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_jack {struct snd_jack* id; int input_dev; scalar_t__ registered; int (* private_free ) (struct snd_jack*) ;} ;
struct snd_device {struct snd_jack* device_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct snd_jack*) ;
 int FUNC_3 (struct snd_jack*) ;

__attribute__((used)) static int FUNC_4(struct snd_device *VAR_0)
{
 struct snd_jack *VAR_1 = VAR_0->device_data;

 if (VAR_1->private_free)
  VAR_1->private_free(VAR_1);



 if (VAR_1->registered)
  FUNC_1(VAR_1->input_dev);
 else
  FUNC_0(VAR_1->input_dev);

 FUNC_2(VAR_1->id);
 FUNC_2(VAR_1);

 return 0;
}
