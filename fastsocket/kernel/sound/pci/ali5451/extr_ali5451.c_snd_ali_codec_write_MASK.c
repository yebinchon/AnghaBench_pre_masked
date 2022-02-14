
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ali {int dummy; } ;
struct snd_ac97 {int num; struct snd_ali* private_data; } ;


 unsigned short VAR_0 ;
 int VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 int FUNC_0 (struct snd_ali*,int ) ;
 int FUNC_1 (unsigned short,int ) ;
 int FUNC_2 (struct snd_ali*,int ,unsigned short,unsigned short) ;
 int FUNC_3 (char*,unsigned short,unsigned short) ;

__attribute__((used)) static void FUNC_4(struct snd_ac97 *VAR_4,
    unsigned short VAR_5,
    unsigned short VAR_6 )
{
 struct snd_ali *VAR_7 = VAR_4->private_data;

 FUNC_3("codec_write: reg=%xh data=%xh.\n", VAR_5, VAR_6);
 if (VAR_5 == VAR_0) {
  FUNC_1((VAR_6 << VAR_2) | VAR_3,
       FUNC_0(VAR_7, VAR_1));
  return;
 }
 FUNC_2(VAR_7, VAR_4->num, VAR_5, VAR_6);
 return ;
}
