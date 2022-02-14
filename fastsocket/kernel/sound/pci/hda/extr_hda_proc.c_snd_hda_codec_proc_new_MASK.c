
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_info_entry {int dummy; } ;
struct hda_codec {int addr; TYPE_1__* bus; } ;
typedef int name ;
struct TYPE_2__ {int card; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,struct snd_info_entry**) ;
 int FUNC_1 (struct snd_info_entry*,struct hda_codec*,int ) ;
 int FUNC_2 (char*,int,char*,int) ;

int FUNC_3(struct hda_codec *VAR_1)
{
 char VAR_2[32];
 struct snd_info_entry *VAR_3;
 int VAR_4;

 FUNC_2(VAR_2, sizeof(VAR_2), "codec#%d", VAR_1->addr);
 VAR_4 = FUNC_0(VAR_1->bus->card, VAR_2, &VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 FUNC_1(VAR_3, VAR_1, VAR_0);
 return 0;
}
