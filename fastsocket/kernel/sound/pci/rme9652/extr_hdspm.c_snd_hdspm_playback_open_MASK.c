
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int hw; } ;
struct hdspm {scalar_t__ is_aes32; int lock; struct snd_pcm_substream* playback_substream; int playback_pid; int * capture_substream; } ;
struct TYPE_2__ {int pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hdspm*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct snd_pcm_runtime*,int ,int ,int *) ;
 int FUNC_2 (struct snd_pcm_runtime*,int ,int,int) ;
 int FUNC_3 (struct snd_pcm_runtime*,int ,int ,int ,struct hdspm*,int ,int) ;
 int FUNC_4 (struct snd_pcm_substream*) ;
 struct hdspm* FUNC_5 (struct snd_pcm_substream*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_10)
{
 struct hdspm *VAR_11 = FUNC_5(VAR_10);
 struct snd_pcm_runtime *VAR_12 = VAR_10->runtime;

 FUNC_6(&VAR_11->lock);

 FUNC_4(VAR_10);

 VAR_12->hw = VAR_9;

 if (VAR_11->capture_substream == ((void*)0))
  FUNC_0(VAR_11);

 VAR_11->playback_pid = VAR_3->pid;
 VAR_11->playback_substream = VAR_10;

 FUNC_7(&VAR_11->lock);

 FUNC_2(VAR_12, 0, 32, 24);

 FUNC_1(VAR_12, 0,
       VAR_1,
       &VAR_5);

 if (VAR_11->is_aes32) {
  FUNC_1(VAR_12, 0, VAR_2,
    &VAR_4);
 } else {
  FUNC_3(VAR_12, 0, VAR_0,
         VAR_6, VAR_11,
         VAR_0, -1);
  FUNC_3(VAR_12, 0, VAR_0,
        VAR_7, VAR_11,
        VAR_2, -1);

  FUNC_3(VAR_12, 0, VAR_2,
        VAR_8, VAR_11,
        VAR_0, -1);
 }
 return 0;
}
