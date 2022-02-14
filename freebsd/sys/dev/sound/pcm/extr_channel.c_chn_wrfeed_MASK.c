
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_dbuf {int dummy; } ;
struct pcm_channel {int flags; int xruns; int feeder; struct snd_dbuf* bufsoft; struct snd_dbuf* bufhard; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pcm_channel*) ;
 int FUNC_1 (struct pcm_channel*) ;
 unsigned int FUNC_2 (int ,scalar_t__) ;
 unsigned int FUNC_3 (unsigned int,unsigned int) ;
 int FUNC_4 (struct snd_dbuf*,int *,unsigned int) ;
 int FUNC_5 (struct snd_dbuf*,struct snd_dbuf*,struct pcm_channel*,int ,unsigned int) ;
 unsigned int FUNC_6 (struct snd_dbuf*) ;
 unsigned int FUNC_7 (struct snd_dbuf*) ;
 unsigned int FUNC_8 (struct snd_dbuf*) ;
 scalar_t__ FUNC_9 (unsigned int,struct snd_dbuf*,struct snd_dbuf*) ;

__attribute__((used)) static void
FUNC_10(struct pcm_channel *VAR_2)
{
     struct snd_dbuf *VAR_3 = VAR_2->bufhard;
     struct snd_dbuf *VAR_4 = VAR_2->bufsoft;
 unsigned int VAR_5, VAR_6, VAR_7;

 FUNC_0(VAR_2);

 if ((VAR_2->flags & VAR_1) && !(VAR_2->flags & VAR_0))
  FUNC_4(VAR_4, ((void*)0), FUNC_6(VAR_4));

 VAR_7 = FUNC_6(VAR_3);
 VAR_6 = FUNC_3(FUNC_8(VAR_3),
     FUNC_2(0, FUNC_9(FUNC_8(VAR_4), VAR_4, VAR_3) -
      FUNC_7(VAR_3)));
 VAR_5 = FUNC_3(VAR_7, VAR_6);
 if (VAR_5 > 0)
  FUNC_5(VAR_4, VAR_3, VAR_2, VAR_2->feeder, VAR_5);




 if (FUNC_7(VAR_3) < VAR_6)
  VAR_2->xruns++;

 if (FUNC_6(VAR_3) < VAR_7)
  FUNC_1(VAR_2);
}
