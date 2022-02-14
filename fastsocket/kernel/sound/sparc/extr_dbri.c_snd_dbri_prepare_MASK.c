
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_dbri {int lock; } ;
struct dbri_streaminfo {int pipe; int size; scalar_t__ offset; } ;


 scalar_t__ VAR_0 ;
 struct dbri_streaminfo* FUNC_0 (struct snd_dbri*,struct snd_pcm_substream*) ;
 scalar_t__ FUNC_1 (struct snd_pcm_substream*) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (struct snd_dbri*,scalar_t__,int ) ;
 int FUNC_4 (struct snd_pcm_substream*) ;
 int FUNC_5 (struct snd_pcm_substream*) ;
 struct snd_dbri* FUNC_6 (struct snd_pcm_substream*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct snd_pcm_substream *VAR_2)
{
 struct snd_dbri *VAR_3 = FUNC_6(VAR_2);
 struct dbri_streaminfo *VAR_4 = FUNC_0(VAR_3, VAR_2);
 int VAR_5;

 VAR_4->size = FUNC_4(VAR_2);
 if (FUNC_1(VAR_2) == VAR_0)
  VAR_4->pipe = 4;
 else
  VAR_4->pipe = 6;

 FUNC_7(&VAR_3->lock);
 VAR_4->offset = 0;




 VAR_5 = FUNC_3(VAR_3, FUNC_1(VAR_2),
     FUNC_5(VAR_2));

 FUNC_8(&VAR_3->lock);

 FUNC_2(VAR_1, "prepare audio output. %d bytes\n", VAR_4->size);
 return VAR_5;
}
