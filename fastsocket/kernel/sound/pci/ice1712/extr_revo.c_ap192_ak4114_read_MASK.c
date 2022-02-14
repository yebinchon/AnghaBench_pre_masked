
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_ice1712*,unsigned int) ;
 unsigned int FUNC_1 (struct snd_ice1712*) ;
 unsigned char FUNC_2 (struct snd_ice1712*,unsigned int,int) ;
 int FUNC_3 (struct snd_ice1712*,unsigned int,int,int) ;

__attribute__((used)) static unsigned char FUNC_4(void *VAR_1, unsigned char VAR_2)
{
 struct snd_ice1712 *VAR_3 = VAR_1;
 unsigned int VAR_4;
 unsigned char VAR_5;

 VAR_4 = FUNC_1(VAR_3);
 FUNC_3(VAR_3, VAR_4, (VAR_0 << 6) | (VAR_2 & 0x1f), 7);
 VAR_5 = FUNC_2(VAR_3, VAR_4, 7);
 FUNC_0(VAR_3, VAR_4);
 return VAR_5;
}
