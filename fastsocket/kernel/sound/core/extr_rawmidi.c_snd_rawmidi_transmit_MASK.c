
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rawmidi_substream {int opened; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_rawmidi_substream*,int) ;
 int FUNC_1 (struct snd_rawmidi_substream*,unsigned char*,int) ;

int FUNC_2(struct snd_rawmidi_substream *VAR_1,
    unsigned char *VAR_2, int VAR_3)
{
 if (!VAR_1->opened)
  return -VAR_0;
 VAR_3 = FUNC_1(VAR_1, VAR_2, VAR_3);
 if (VAR_3 < 0)
  return VAR_3;
 return FUNC_0(VAR_1, VAR_3);
}
