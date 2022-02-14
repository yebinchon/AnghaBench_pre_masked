
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int channels; int dma_addr; int format; int rate; } ;
struct TYPE_4__ {scalar_t__ size; scalar_t__ buf; int addr; int count; } ;
struct TYPE_3__ {int stereo; int format; int rate; scalar_t__ capturing; scalar_t__ playing; } ;
struct snd_harmony {TYPE_2__ cbuf; TYPE_1__ st; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_harmony*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct snd_harmony*,int ,int ) ;
 scalar_t__ FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (struct snd_pcm_substream*) ;
 struct snd_harmony* FUNC_5 (struct snd_pcm_substream*) ;

__attribute__((used)) static int
FUNC_6(struct snd_pcm_substream *VAR_3)
{
        struct snd_harmony *VAR_4 = FUNC_5(VAR_3);
        struct snd_pcm_runtime *VAR_5 = VAR_3->runtime;

 if (VAR_4->st.playing)
  return -VAR_0;

        VAR_4->cbuf.size = FUNC_3(VAR_3);
        VAR_4->cbuf.count = FUNC_4(VAR_3);
 if (VAR_4->cbuf.buf >= VAR_4->cbuf.size)
         VAR_4->cbuf.buf = 0;
 VAR_4->st.capturing = 0;

        VAR_4->st.rate = FUNC_1(VAR_5->rate);
        VAR_4->st.format = FUNC_2(VAR_4, VAR_5->format, 0);

        if (VAR_5->channels == 2)
                VAR_4->st.stereo = VAR_2;
        else
                VAR_4->st.stereo = VAR_1;

        FUNC_0(VAR_4);

        VAR_4->cbuf.addr = VAR_5->dma_addr;

        return 0;
}
