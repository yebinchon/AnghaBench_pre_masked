
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_emu8k_pcm {int* loop_start; int emu; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static inline int FUNC_1(struct snd_emu8k_pcm *VAR_0, int VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0->emu, VAR_1) & 0xfffffff;
 VAR_2 -= VAR_0->loop_start[VAR_1] - 1;
 return VAR_2;
}
