
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_codec {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 unsigned int FUNC_2 (struct snd_soc_codec*,unsigned short) ;
 int FUNC_3 (struct snd_soc_codec*,unsigned short,unsigned int) ;

int FUNC_4(struct snd_soc_codec *VAR_1, unsigned short VAR_2,
    unsigned int VAR_3, unsigned int VAR_4)
{
 int VAR_5;
 unsigned int VAR_6, VAR_7;

 FUNC_0(&VAR_0);
 VAR_6 = FUNC_2(VAR_1, VAR_2);
 VAR_7 = (VAR_6 & ~VAR_3) | VAR_4;
 VAR_5 = VAR_6 != VAR_7;
 if (VAR_5)
  FUNC_3(VAR_1, VAR_2, VAR_7);

 FUNC_1(&VAR_0);
 return VAR_5;
}
