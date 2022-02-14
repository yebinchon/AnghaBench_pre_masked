
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {int dummy; } ;


 unsigned char VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 int FUNC_0 (struct snd_ice1712*,unsigned int,int) ;

__attribute__((used)) static void FUNC_1(struct snd_ice1712 *VAR_3, unsigned int VAR_4,
      unsigned short VAR_5, unsigned short VAR_6)
{
 unsigned char VAR_7;

 if ((VAR_6 & VAR_2) || (VAR_5 & VAR_2))
  VAR_7 = 0;
 else {
  VAR_7 = (((VAR_5 & ~VAR_2) * (VAR_6 & ~VAR_2)) / 128)
    & VAR_1;
  VAR_7 = (VAR_7 ? (VAR_7 + VAR_0) : 0) & 0xff;
 }

 FUNC_0(VAR_3, VAR_4, (0x0100 | VAR_7));
}
