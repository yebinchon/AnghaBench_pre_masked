
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {int dummy; } ;





 unsigned short VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned short*) ;



 unsigned short FUNC_1 (struct snd_ac97*,int ) ;
 int FUNC_2 (struct snd_ac97*,int ,unsigned short,unsigned short) ;

__attribute__((used)) static unsigned int FUNC_3(struct snd_ac97 *VAR_2)
{
 unsigned int VAR_3 = 0;
 int VAR_4;
 static unsigned short VAR_5[] = {
  132, 133, 131
 };
 static unsigned int VAR_6[] = {
  129, 130, 128
 };

 for (VAR_4 = 0; VAR_4 < (int)FUNC_0(VAR_5); VAR_4++) {
  FUNC_2(VAR_2, VAR_1, VAR_0, VAR_5[VAR_4]);
  if ((FUNC_1(VAR_2, VAR_1) & VAR_0) == VAR_5[VAR_4])
   VAR_3 |= VAR_6[VAR_4];
 }
 return VAR_3;
}
