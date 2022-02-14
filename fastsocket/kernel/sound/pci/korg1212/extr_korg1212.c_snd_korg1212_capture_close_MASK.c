
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_korg1212 {size_t cardState; int capture_pid; int lock; scalar_t__ periodsize; int * capture_substream; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct snd_korg1212*) ;
 struct snd_korg1212* FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int * VAR_0 ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_1)
{
        unsigned long VAR_2;
        struct snd_korg1212 *VAR_3 = FUNC_2(VAR_1);

 FUNC_0("K1212_DEBUG: snd_korg1212_capture_close [%s]\n",
      VAR_0[VAR_3->cardState]);

        FUNC_3(&VAR_3->lock, VAR_2);

 VAR_3->capture_pid = -1;
        VAR_3->capture_substream = ((void*)0);
        VAR_3->periodsize = 0;

        FUNC_4(&VAR_3->lock, VAR_2);

 FUNC_1(VAR_3);
        return 0;
}
