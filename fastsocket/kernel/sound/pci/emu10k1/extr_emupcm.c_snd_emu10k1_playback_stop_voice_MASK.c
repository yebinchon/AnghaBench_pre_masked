
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_emu10k1_voice {unsigned int number; } ;
struct snd_emu10k1 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct snd_emu10k1*,int ,unsigned int,int) ;
 int FUNC_1 (struct snd_emu10k1*,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct snd_emu10k1 *VAR_6, struct snd_emu10k1_voice *VAR_7)
{
 unsigned int VAR_8;

 if (VAR_7 == ((void*)0))
  return;
 VAR_8 = VAR_7->number;
 FUNC_1(VAR_6, VAR_8);
 FUNC_0(VAR_6, VAR_4, VAR_8, 0);
 FUNC_0(VAR_6, VAR_0, VAR_8, 0);
 FUNC_0(VAR_6, VAR_2, VAR_8, 0xffff);
 FUNC_0(VAR_6, VAR_5, VAR_8, 0xffff);
 FUNC_0(VAR_6, VAR_1, VAR_8, 0xffff);
 FUNC_0(VAR_6, VAR_3, VAR_8, 0);
}
