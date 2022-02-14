
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_dbuf {int dummy; } ;
struct pcm_channel {int flags; struct snd_dbuf* bufsoft; struct snd_dbuf* bufhard; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pcm_channel*) ;
 scalar_t__ FUNC_1 (struct pcm_channel*) ;
 int VAR_3 ;
 int FUNC_2 (struct pcm_channel*) ;
 int FUNC_3 (struct pcm_channel*,int ) ;
 int FUNC_4 (struct snd_dbuf*) ;
 int FUNC_5 (struct snd_dbuf*,int ) ;

int
FUNC_6(struct pcm_channel *VAR_4)
{
     int VAR_5 = 0;
     struct snd_dbuf *VAR_6 = VAR_4->bufhard;
     struct snd_dbuf *VAR_7 = VAR_4->bufsoft;

 FUNC_0(VAR_4);
 if (FUNC_1(VAR_4))
  return 0;
 VAR_4->flags |= VAR_0;

 VAR_4->flags &= ~VAR_1;

 FUNC_3(VAR_4, VAR_3);
 FUNC_5(VAR_6, 0);
 if (!(VAR_4->flags & VAR_2))
  FUNC_2(VAR_4);
     VAR_5 = FUNC_4(VAR_7);

 VAR_4->flags &= ~VAR_0;
 return VAR_5;
}
