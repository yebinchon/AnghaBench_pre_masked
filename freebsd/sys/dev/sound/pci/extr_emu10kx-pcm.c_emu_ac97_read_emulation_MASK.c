
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct emu_pcm_info {int* ac97_state; int card; } ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int,int) ;

__attribute__((used)) static int
FUNC_2(struct emu_pcm_info *VAR_2, int VAR_3)
{
 int VAR_4;
 int VAR_5;
 int VAR_6;

 VAR_4 = 1;
 VAR_5 = 0;

 switch (VAR_3) {
 case 131:
  VAR_5 = VAR_2->ac97_state[131];
  VAR_4 = 0;
  break;
 case 130:
  VAR_5 = VAR_2->ac97_state[130];
  VAR_4 = 0;
  break;
 case 128:
  VAR_5 = 0x0505;
  VAR_4 = 0;
  break;
 case 129:
  VAR_5 = VAR_2->ac97_state[129];
  VAR_4 = 0;
  break;
 }

 FUNC_1(VAR_2->card, VAR_0, VAR_3, 1);
 VAR_6 = FUNC_0(VAR_2->card, VAR_1, 2);

 if (VAR_4)
  VAR_5 = VAR_6;

 return (VAR_5);
}
