
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_dbuf {int dummy; } ;
struct pcm_channel {int flags; int xruns; int feeder; struct snd_dbuf* bufsoft; struct snd_dbuf* bufhard; } ;


 int VAR_0 ;
 int FUNC_0 (struct pcm_channel*) ;
 int FUNC_1 (struct pcm_channel*) ;
 int FUNC_2 (struct snd_dbuf*,int *,unsigned int) ;
 int FUNC_3 (struct snd_dbuf*,struct snd_dbuf*,struct pcm_channel*,int ,unsigned int) ;
 unsigned int FUNC_4 (struct snd_dbuf*) ;
 unsigned int FUNC_5 (struct snd_dbuf*) ;

__attribute__((used)) static void
FUNC_6(struct pcm_channel *VAR_1)
{
     struct snd_dbuf *VAR_2 = VAR_1->bufhard;
     struct snd_dbuf *VAR_3 = VAR_1->bufsoft;
 unsigned int VAR_4;

 FUNC_0(VAR_1);

 if (VAR_1->flags & VAR_0)
  FUNC_2(VAR_3, ((void*)0), FUNC_5(VAR_3));

 VAR_4 = FUNC_4(VAR_3);
 if (VAR_4 > 0)
  FUNC_3(VAR_2, VAR_3, VAR_1, VAR_1->feeder, VAR_4);

 VAR_4 = FUNC_5(VAR_2);
 if (VAR_4 > 0) {
  VAR_1->xruns++;
  FUNC_2(VAR_2, ((void*)0), VAR_4);
 }

 if (FUNC_5(VAR_3) > 0)
  FUNC_1(VAR_1);
}
