
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_pcm_runtime {int channels; int rate; int format; } ;
struct snd_m3 {int dummy; } ;
struct TYPE_2__ {int data; } ;
struct m3_dma {int in_lists; TYPE_1__ inst; int * index_list; void** index; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_0 (struct snd_m3*,int ,int) ;
 int FUNC_1 (struct snd_m3*,int ,scalar_t__,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct snd_m3 *VAR_4, struct m3_dma *VAR_5,
         struct snd_pcm_runtime *VAR_6)
{
 u32 VAR_7;




 if (! VAR_5->in_lists) {
  VAR_5->index[0] = FUNC_0(VAR_4, VAR_5->index_list[0],
           VAR_5->inst.data >> VAR_1);
  VAR_5->index[1] = FUNC_0(VAR_4, VAR_5->index_list[1],
           VAR_5->inst.data >> VAR_1);
  VAR_5->index[2] = FUNC_0(VAR_4, VAR_5->index_list[2],
           VAR_5->inst.data >> VAR_1);
  VAR_5->in_lists = 1;
 }


 FUNC_1(VAR_4, VAR_2,
     VAR_5->inst.data + VAR_3 + 1,
     VAR_6->channels == 2 ? 0 : 1);

 FUNC_1(VAR_4, VAR_2,
     VAR_5->inst.data + VAR_3 + 2,
     FUNC_2(VAR_6->format) == 16 ? 0 : 1);


 VAR_7 = ((VAR_6->rate << 15) + 24000 ) / 48000;
 if (VAR_7)
  VAR_7--;

 FUNC_1(VAR_4, VAR_2,
     VAR_5->inst.data + VAR_0,
     VAR_7);
}
