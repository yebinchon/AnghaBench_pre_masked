
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rawmidi_file {int dummy; } ;
struct snd_rawmidi {TYPE_1__* card; int open_mutex; } ;
struct snd_card {int dummy; } ;
struct TYPE_2__ {int module; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct snd_rawmidi*,int,int,struct snd_rawmidi_file*) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int) ;
 struct snd_rawmidi* FUNC_5 (struct snd_card*,int) ;
 int FUNC_6 (int ) ;

int FUNC_7(struct snd_card *VAR_4, int VAR_5, int VAR_6,
       int VAR_7, struct snd_rawmidi_file * VAR_8)
{
 struct snd_rawmidi *VAR_9;
 int VAR_10;

 if (FUNC_4(!VAR_8))
  return -VAR_0;

 FUNC_1(&VAR_3);
 VAR_9 = FUNC_5(VAR_4, VAR_5);
 if (VAR_9 == ((void*)0)) {
  FUNC_2(&VAR_3);
  return -VAR_1;
 }
 if (!FUNC_6(VAR_9->card->module)) {
  FUNC_2(&VAR_3);
  return -VAR_2;
 }
 FUNC_2(&VAR_3);

 FUNC_1(&VAR_9->open_mutex);
 VAR_10 = FUNC_3(VAR_9, VAR_6, VAR_7, VAR_8);
 FUNC_2(&VAR_9->open_mutex);
 if (VAR_10 < 0)
  FUNC_0(VAR_9->card->module);
 return VAR_10;
}
