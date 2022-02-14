
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct snd_soc_dai {int id; struct snd_soc_codec* codec; } ;
struct snd_soc_codec {int dummy; } ;
struct TYPE_3__ {int active; } ;
struct TYPE_4__ {TYPE_1__ playback; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_0 (struct snd_soc_codec*,int ) ;
 int FUNC_1 (struct snd_soc_codec*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_4, int VAR_5)
{
 struct snd_soc_codec *VAR_6 = VAR_4->codec;
 u16 VAR_7 = FUNC_0(VAR_6, VAR_0) & 0xfff7;



 if (VAR_5 && VAR_4->id == 1) {
  if (!VAR_3[VAR_2].playback.active ||
   !VAR_3[VAR_1].playback.active)
   FUNC_1(VAR_6, VAR_0, VAR_7 | 0x8);
 } else {
  if (VAR_5)
   FUNC_1(VAR_6, VAR_0, VAR_7 | 0x8);
  else
   FUNC_1(VAR_6, VAR_0, VAR_7);
 }

 return 0;
}
