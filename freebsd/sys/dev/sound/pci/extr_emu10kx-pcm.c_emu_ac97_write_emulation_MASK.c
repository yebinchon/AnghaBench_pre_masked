
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct emu_pcm_info {int* ac97_state; int card; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;




 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int ,int ,int,int) ;
 int FUNC_6 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_7(struct emu_pcm_info *VAR_8, int VAR_9, uint32_t VAR_10)
{
 int VAR_11;
 int VAR_12, VAR_13;
 uint32_t VAR_14, VAR_15;
 int VAR_16;

 VAR_11 = 1;

 VAR_12 = FUNC_0(VAR_10);
 VAR_14 = FUNC_4(VAR_12);
 VAR_13 = FUNC_2(VAR_10);
 VAR_15 = FUNC_4(VAR_13);
 VAR_16 = FUNC_1(VAR_10);
 if (VAR_16)
  VAR_14 = VAR_15 = 0;

 switch (VAR_9) {

 case 131:
  FUNC_6(VAR_8->card, VAR_4, VAR_14);
  FUNC_6(VAR_8->card, VAR_5, VAR_15);
  VAR_8->ac97_state[131] = VAR_10 & (0x8000 | 0x3f3f);
  VAR_10 = 0x8000;
  break;
 case 130:
  FUNC_6(VAR_8->card, VAR_2, VAR_14);
  FUNC_6(VAR_8->card, VAR_3, VAR_15);
  VAR_8->ac97_state[130] = VAR_10 & (0x8000 | 0x3f3f);
  VAR_10 = 0x8000;
  break;
 case 128:






  VAR_10 = 0x0505;
  break;
 case 129:
  VAR_14 = FUNC_3(VAR_12);
  VAR_15 = FUNC_3(VAR_13);
  FUNC_6(VAR_8->card, VAR_6, 100-VAR_14);
  FUNC_6(VAR_8->card, VAR_7, 100-VAR_15);






  VAR_8->ac97_state[129] = VAR_10 & (0x8000 | 0x0f0f);
  VAR_10 = 0x0000;
  break;
 }
 if (VAR_11) {
  FUNC_5(VAR_8->card, VAR_0, VAR_9, 1);
  FUNC_5(VAR_8->card, VAR_1, VAR_10, 2);
 }
}
