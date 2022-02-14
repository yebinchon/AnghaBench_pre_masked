
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_emu8000 {int dummy; } ;


 int FUNC_0 (struct snd_emu8000*,int,int) ;
 int FUNC_1 (struct snd_emu8000*,int,int) ;
 int FUNC_2 (struct snd_emu8000*,int,int ) ;
 int FUNC_3 (struct snd_emu8000*,int,int ) ;
 int FUNC_4 (struct snd_emu8000*,int,int) ;
 int FUNC_5 (struct snd_emu8000*,int,int ) ;
 int FUNC_6 (struct snd_emu8000*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (struct snd_emu8000*,int,int ) ;

void
FUNC_8(struct snd_emu8000 *VAR_4, int VAR_5, int VAR_6)
{
 unsigned VAR_7 = (VAR_6 & VAR_2) ? 0x01000000 : 0;
 VAR_6 &= VAR_1;
 if (VAR_6 == VAR_0) {
  FUNC_0(VAR_4, VAR_5, 0);
  FUNC_4(VAR_4, VAR_5, 0x807F);
  return;
 }
 FUNC_4(VAR_4, VAR_5, 0x80);
 FUNC_7(VAR_4, VAR_5, 0);
 FUNC_3(VAR_4, VAR_5, 0);
 FUNC_6(VAR_4, VAR_5, 0x40000000);
 FUNC_1(VAR_4, VAR_5, 0x40000000);
 FUNC_5(VAR_4, VAR_5, 0);
 FUNC_2(VAR_4, VAR_5, 0);
 if (VAR_6 == VAR_3)
  FUNC_0(VAR_4, VAR_5, 0x06000000 | VAR_7);
 else
  FUNC_0(VAR_4, VAR_5, 0x04000000 | VAR_7);
}
