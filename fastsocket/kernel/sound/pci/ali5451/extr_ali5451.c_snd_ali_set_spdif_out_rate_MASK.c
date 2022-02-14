
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ali {int dummy; } ;


 int FUNC_0 (struct snd_ali*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned char FUNC_1 (int ) ;
 int FUNC_2 (unsigned char,int ) ;
 int FUNC_3 (unsigned int,int ) ;

__attribute__((used)) static void FUNC_4(struct snd_ali *VAR_2, unsigned int VAR_3)
{
 unsigned char VAR_4;
 unsigned int VAR_5;

 switch (VAR_3) {
 case 32000: VAR_5 = 0x300; break;
 case 48000: VAR_5 = 0x200; break;
 default: VAR_5 = 0; break;
 }

 VAR_4 = FUNC_1(FUNC_0(VAR_2, VAR_1));
 VAR_4 &= (unsigned char)(~(1<<6));

 VAR_4 |= 0x80;
 FUNC_2(VAR_4, FUNC_0(VAR_2, VAR_1));
 FUNC_2(VAR_5 | 0x20, FUNC_0(VAR_2, VAR_0 + 2));

 VAR_4 &= ~0x80;
 FUNC_2(VAR_4, FUNC_0(VAR_2, VAR_1));
 FUNC_3(VAR_3 | 0x10, FUNC_0(VAR_2, VAR_0 + 2));
}
