
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct xonar_cs43xx {int* cs4362a_regs; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct oxygen {struct xonar_cs43xx* model_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct oxygen*,int,int) ;
 int FUNC_1 (struct oxygen*,int,int) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;

__attribute__((used)) static void FUNC_3(struct oxygen *VAR_9,
         struct snd_pcm_hw_params *VAR_10)
{
 struct xonar_cs43xx *VAR_11 = VAR_9->model_data;
 u8 VAR_12, VAR_13;

 if (FUNC_2(VAR_10) <= 50000) {
  VAR_12 = VAR_8;
  VAR_13 = VAR_3;
 } else if (FUNC_2(VAR_10) <= 100000) {
  VAR_12 = VAR_6;
  VAR_13 = VAR_0;
 } else {
  VAR_12 = VAR_7;
  VAR_13 = VAR_2;
 }
 VAR_12 |= VAR_4 | VAR_5;
 FUNC_1(VAR_9, 2, VAR_12);
 VAR_13 |= VAR_11->cs4362a_regs[6] & ~VAR_1;
 FUNC_0(VAR_9, 6, VAR_13);
 FUNC_0(VAR_9, 12, VAR_13);
 VAR_13 &= VAR_1;
 VAR_13 |= VAR_11->cs4362a_regs[9] & ~VAR_1;
 FUNC_0(VAR_9, 9, VAR_13);
}
