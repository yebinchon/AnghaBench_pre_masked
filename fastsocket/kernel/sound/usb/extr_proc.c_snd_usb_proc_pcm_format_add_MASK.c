
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_usb_stream {int pcm_index; TYPE_1__* chip; } ;
struct snd_info_entry {int dummy; } ;
struct snd_card {int dummy; } ;
struct TYPE_2__ {struct snd_card* card; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_card*,char*,struct snd_info_entry**) ;
 int FUNC_1 (struct snd_info_entry*,struct snd_usb_stream*,int ) ;
 int FUNC_2 (char*,char*,int) ;

void FUNC_3(struct snd_usb_stream *VAR_1)
{
 struct snd_info_entry *VAR_2;
 char VAR_3[32];
 struct snd_card *VAR_4 = VAR_1->chip->card;

 FUNC_2(VAR_3, "stream%d", VAR_1->pcm_index);
 if (!FUNC_0(VAR_4, VAR_3, &VAR_2))
  FUNC_1(VAR_2, VAR_1, VAR_0);
}
