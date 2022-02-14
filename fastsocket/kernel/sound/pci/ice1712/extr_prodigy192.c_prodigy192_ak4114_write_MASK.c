
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_ice1712*,unsigned int) ;
 unsigned int FUNC_1 (struct snd_ice1712*) ;
 int FUNC_2 (struct snd_ice1712*,unsigned int,unsigned int,int) ;

__attribute__((used)) static void FUNC_3(void *VAR_1, unsigned char VAR_2,
          unsigned char VAR_3)
{
 struct snd_ice1712 *VAR_4 = VAR_1;
 unsigned int VAR_5, VAR_6;
 VAR_5 = FUNC_1(VAR_4);
 VAR_6 = (VAR_0 << 6) | 0x20 | (VAR_2 & 0x1f);
 VAR_6 = (VAR_6 << 8) | VAR_3;
 FUNC_2(VAR_4, VAR_5, VAR_6, 15);
 FUNC_0(VAR_4, VAR_5);
}
