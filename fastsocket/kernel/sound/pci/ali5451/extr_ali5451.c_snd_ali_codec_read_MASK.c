
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ali {int dummy; } ;
struct snd_ac97 {int num; struct snd_ali* private_data; } ;


 unsigned short FUNC_0 (struct snd_ali*,int ,unsigned short) ;
 int FUNC_1 (char*,unsigned short) ;

__attribute__((used)) static unsigned short FUNC_2(struct snd_ac97 *VAR_0,
      unsigned short VAR_1)
{
 struct snd_ali *VAR_2 = VAR_0->private_data;

 FUNC_1("codec_read reg=%xh.\n", VAR_1);
 return FUNC_0(VAR_2, VAR_0->num, VAR_1);
}
