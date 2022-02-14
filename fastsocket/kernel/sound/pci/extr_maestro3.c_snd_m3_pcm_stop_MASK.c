
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int stream; } ;
struct snd_m3 {int dacs_active; } ;
struct TYPE_2__ {scalar_t__ data; } ;
struct m3_dma {TYPE_1__ inst; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;


 int FUNC_0 (struct snd_m3*,int ,scalar_t__,int ) ;
 int FUNC_1 (struct snd_m3*) ;

__attribute__((used)) static int FUNC_2(struct snd_m3 *VAR_5, struct m3_dma *VAR_6,
      struct snd_pcm_substream *VAR_7)
{
 if (! VAR_6 || ! VAR_7)
  return -VAR_1;

 FUNC_0(VAR_5, VAR_4,
     VAR_6->inst.data + VAR_0, 0);
 FUNC_1(VAR_5);
 switch (VAR_7->stream) {
 case 128:
  VAR_5->dacs_active--;
  FUNC_0(VAR_5, VAR_4,
      VAR_3,
      VAR_5->dacs_active);
  break;
 case 129:
  FUNC_0(VAR_5, VAR_4,
      VAR_2, 0);
  break;
 }
 return 0;
}
