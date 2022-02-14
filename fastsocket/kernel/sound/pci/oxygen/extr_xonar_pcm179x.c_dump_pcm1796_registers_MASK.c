
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xonar_pcm179x {unsigned int dacs; int ** pcm1796_regs; } ;
struct snd_info_buffer {int dummy; } ;
struct oxygen {struct xonar_pcm179x* model_data; } ;


 int FUNC_0 (struct snd_info_buffer*,char*,...) ;

__attribute__((used)) static void FUNC_1(struct oxygen *VAR_0,
       struct snd_info_buffer *VAR_1)
{
 struct xonar_pcm179x *VAR_2 = VAR_0->model_data;
 unsigned int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_2->dacs; ++VAR_3) {
  FUNC_0(VAR_1, "\nPCM1796 %u:", VAR_3 + 1);
  for (VAR_4 = 0; VAR_4 < 5; ++VAR_4)
   FUNC_0(VAR_1, " %02x",
        VAR_2->pcm1796_regs[VAR_3][VAR_4]);
 }
 FUNC_0(VAR_1, "\n");
}
