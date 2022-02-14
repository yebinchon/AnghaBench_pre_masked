
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rawmidi {int (* private_free ) (struct snd_rawmidi*) ;int * streams; TYPE_1__* ops; int * proc_entry; } ;
struct TYPE_2__ {int (* dev_unregister ) (struct snd_rawmidi*) ;} ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct snd_rawmidi*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct snd_rawmidi*) ;
 int FUNC_6 (struct snd_rawmidi*) ;

__attribute__((used)) static int FUNC_7(struct snd_rawmidi *VAR_3)
{
 if (!VAR_3)
  return 0;

 FUNC_3(VAR_3->proc_entry);
 VAR_3->proc_entry = ((void*)0);
 FUNC_1(&VAR_2);
 if (VAR_3->ops && VAR_3->ops->dev_unregister)
  VAR_3->ops->dev_unregister(VAR_3);
 FUNC_2(&VAR_2);

 FUNC_4(&VAR_3->streams[VAR_0]);
 FUNC_4(&VAR_3->streams[VAR_1]);
 if (VAR_3->private_free)
  VAR_3->private_free(VAR_3);
 FUNC_0(VAR_3);
 return 0;
}
