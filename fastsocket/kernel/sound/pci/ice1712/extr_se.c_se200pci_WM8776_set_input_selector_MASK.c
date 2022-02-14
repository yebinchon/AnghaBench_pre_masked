
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {int dummy; } ;


 int FUNC_0 (struct snd_ice1712*,int,unsigned char) ;

__attribute__((used)) static void FUNC_1(struct snd_ice1712 *VAR_0,
            unsigned int VAR_1)
{
 static unsigned char VAR_2[] = {

  0x10, 0x04, 0x08, 0x1c, 0x03
 };
 if (VAR_1 > 4)
  VAR_1 = 4;
 FUNC_0(VAR_0, 0x15, VAR_2[VAR_1]);
}
