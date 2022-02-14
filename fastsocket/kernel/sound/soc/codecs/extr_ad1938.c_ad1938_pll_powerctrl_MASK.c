
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_codec {int (* read ) (struct snd_soc_codec*,int ) ;int (* write ) (struct snd_soc_codec*,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_soc_codec*,int ) ;
 int FUNC_1 (struct snd_soc_codec*,int ,int) ;

__attribute__((used)) static inline int FUNC_2(struct snd_soc_codec *VAR_2, int VAR_3)
{
 int VAR_4 = VAR_2->read(VAR_2, VAR_0);
 VAR_4 = (VAR_3 > 0) ? VAR_4 & (~VAR_1) : VAR_4 |
  VAR_1;
 VAR_2->write(VAR_2, VAR_0, VAR_4);

 return 0;
}
