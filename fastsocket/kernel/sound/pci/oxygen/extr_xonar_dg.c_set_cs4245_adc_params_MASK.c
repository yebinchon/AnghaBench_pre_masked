
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_pcm_hw_params {int dummy; } ;
struct oxygen {struct dg* model_data; } ;
struct dg {int* cs4245_regs; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct oxygen*,size_t,int) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;

__attribute__((used)) static void FUNC_2(struct oxygen *VAR_5,
      struct snd_pcm_hw_params *VAR_6)
{
 struct dg *VAR_7 = VAR_5->model_data;
 u8 VAR_8;

 VAR_8 = VAR_7->cs4245_regs[VAR_0] & ~VAR_2;
 if (FUNC_1(VAR_6) <= 50000)
  VAR_8 |= VAR_4;
 else if (FUNC_1(VAR_6) <= 100000)
  VAR_8 |= VAR_1;
 else
  VAR_8 |= VAR_3;
 FUNC_0(VAR_5, VAR_0, VAR_8);
}
