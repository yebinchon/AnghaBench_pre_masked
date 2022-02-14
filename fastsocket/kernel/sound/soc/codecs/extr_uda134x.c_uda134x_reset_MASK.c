
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_codec {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct snd_soc_codec*,int ) ;
 int FUNC_2 (struct snd_soc_codec*,int ,int) ;

__attribute__((used)) static inline void FUNC_3(struct snd_soc_codec *VAR_1)
{
 u8 VAR_2 = FUNC_1(VAR_1, VAR_0);
 FUNC_2(VAR_1, VAR_0, VAR_2 | (1<<6));
 FUNC_0(1);
 FUNC_2(VAR_1, VAR_0, VAR_2 & ~(1<<6));
}
