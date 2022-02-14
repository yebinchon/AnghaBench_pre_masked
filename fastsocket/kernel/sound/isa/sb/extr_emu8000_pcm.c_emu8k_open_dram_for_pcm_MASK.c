
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_emu8000 {int emu; } ;


 int FUNC_0 (struct snd_emu8000*,int,int) ;
 int FUNC_1 (struct snd_emu8000*,int,int) ;
 int VAR_0 ;
 int FUNC_2 (struct snd_emu8000*,int,int) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_3 (struct snd_emu8000*,int,int ) ;
 int FUNC_4 (struct snd_emu8000*,int,unsigned int) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static int
FUNC_6(struct snd_emu8000 *VAR_3, int VAR_4)
{
 int VAR_5;


 FUNC_5(VAR_3->emu, 0);
 if (VAR_4 > 1)
  FUNC_5(VAR_3->emu, 1);


 for (VAR_5 = VAR_4 + 1; VAR_5 < VAR_0; VAR_5++) {
  unsigned int VAR_6 = VAR_2;
  FUNC_5(VAR_3->emu, VAR_5);

  if (VAR_4 > 1 && (VAR_5 & 1) != 0)
   VAR_6 |= VAR_1;

  FUNC_4(VAR_3, VAR_5, VAR_6);
 }


 FUNC_3(VAR_3, 30, 0);
 FUNC_2(VAR_3, 30, 0x1d8);
 FUNC_1(VAR_3, 30, 0x1e0);
 FUNC_0(VAR_3, 30, 0x1d8);
 FUNC_3(VAR_3, 31, 0);
 FUNC_2(VAR_3, 31, 0x1d8);
 FUNC_1(VAR_3, 31, 0x1e0);
 FUNC_0(VAR_3, 31, 0x1d8);

 return 0;
}
