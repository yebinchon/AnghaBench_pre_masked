
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_codec {unsigned short (* read ) (struct snd_soc_codec*,int ) ;int (* write ) (struct snd_soc_codec*,int ,unsigned short) ;} ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short FUNC_0 (struct snd_soc_codec*,int ) ;
 int FUNC_1 (struct snd_soc_codec*,int ,unsigned short) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_codec *VAR_4)
{
 unsigned short VAR_5;


 VAR_5 = VAR_4->read(VAR_4, VAR_0);
 VAR_5 |= VAR_1 | VAR_2 | VAR_3;
 VAR_4->write(VAR_4, VAR_0, VAR_5);

 return 0;
}
