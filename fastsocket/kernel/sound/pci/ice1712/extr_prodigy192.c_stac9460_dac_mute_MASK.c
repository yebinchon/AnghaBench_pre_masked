
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {int dummy; } ;


 unsigned char FUNC_0 (struct snd_ice1712*,int) ;
 int FUNC_1 (struct snd_ice1712*,int,unsigned char) ;

__attribute__((used)) static int FUNC_2(struct snd_ice1712 *VAR_0, int VAR_1,
  unsigned char VAR_2)
{
 unsigned char VAR_3, VAR_4;
 int VAR_5;
 VAR_4 = FUNC_0(VAR_0, VAR_1);
 VAR_3 = (~VAR_2 << 7 & 0x80) | (VAR_4 & ~0x80);
 VAR_5 = (VAR_3 != VAR_4);
 if (VAR_5)

  FUNC_1(VAR_0, VAR_1, VAR_3);
 return VAR_5;
}
