
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_codec {int (* volatile_register ) (int) ;} ;


 int FUNC_0 (int) ;

int FUNC_1(struct snd_soc_codec *VAR_0, int VAR_1)
{
 if (VAR_0->volatile_register)
  return VAR_0->volatile_register(VAR_1);
 else
  return 0;
}
