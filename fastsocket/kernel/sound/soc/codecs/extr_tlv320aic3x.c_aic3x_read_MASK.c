
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct snd_soc_codec {int control_data; } ;


 int FUNC_0 (struct snd_soc_codec*,unsigned int,unsigned int) ;
 unsigned int FUNC_1 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_codec *VAR_0, unsigned int VAR_1,
        u8 *VAR_2)
{
 *VAR_2 = VAR_1 & 0xff;

 VAR_2[0] = FUNC_1(VAR_0->control_data, VAR_2[0]);

 FUNC_0(VAR_0, VAR_1, *VAR_2);
 return 0;
}
