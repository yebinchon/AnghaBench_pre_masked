
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int hw; } ;
struct snd_dbri {int lock; } ;
struct dbri_streaminfo {int pipe; scalar_t__ dvma_buffer; scalar_t__ offset; struct snd_pcm_substream* substream; } ;


 struct dbri_streaminfo* FUNC_0 (struct snd_dbri*,struct snd_pcm_substream*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct snd_dbri*) ;
 int FUNC_2 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct snd_pcm_runtime*,int ,int ,int ,int *,int ,int) ;
 struct snd_dbri* FUNC_4 (struct snd_pcm_substream*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_6)
{
 struct snd_dbri *VAR_7 = FUNC_4(VAR_6);
 struct snd_pcm_runtime *VAR_8 = VAR_6->runtime;
 struct dbri_streaminfo *VAR_9 = FUNC_0(VAR_7, VAR_6);
 unsigned long VAR_10;

 FUNC_2(VAR_0, "open audio output.\n");
 VAR_8->hw = VAR_3;

 FUNC_5(&VAR_7->lock, VAR_10);
 VAR_9->substream = VAR_6;
 VAR_9->offset = 0;
 VAR_9->dvma_buffer = 0;
 VAR_9->pipe = -1;
 FUNC_6(&VAR_7->lock, VAR_10);

 FUNC_3(VAR_8, 0, VAR_1,
       VAR_5, ((void*)0), VAR_2,
       -1);
 FUNC_3(VAR_8, 0, VAR_2,
       VAR_4, ((void*)0),
       VAR_1,
       -1);

 FUNC_1(VAR_7);

 return 0;
}
