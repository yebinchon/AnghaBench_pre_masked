
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_dbuf {int dummy; } ;
struct pcm_channel {int flags; int devinfo; int methods; struct snd_dbuf* bufsoft; struct snd_dbuf* bufhard; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct pcm_channel*) ;
 scalar_t__ FUNC_2 (struct pcm_channel*) ;
 int FUNC_3 (struct pcm_channel*) ;
 int VAR_1 ;
 int FUNC_4 (struct pcm_channel*) ;
 scalar_t__ FUNC_5 (struct pcm_channel*) ;
 int FUNC_6 (struct pcm_channel*,int ) ;
 int FUNC_7 (struct snd_dbuf*) ;
 int FUNC_8 (struct snd_dbuf*) ;

int
FUNC_9(struct pcm_channel *VAR_2)
{
     struct snd_dbuf *VAR_3 = VAR_2->bufhard;
     struct snd_dbuf *VAR_4 = VAR_2->bufsoft;

 if (FUNC_2(VAR_2)) {
  FUNC_1(VAR_2);
  FUNC_6(VAR_2, VAR_1);
  FUNC_3(VAR_2);
 }
 while (FUNC_5(VAR_2) == 0)
  ;
 if (FUNC_0(VAR_2->methods, VAR_2->devinfo))
  FUNC_8(VAR_3);
 FUNC_7(VAR_4);
 FUNC_7(VAR_3);
 FUNC_1(VAR_2);
 VAR_2->flags |= VAR_0;
 FUNC_4(VAR_2);

 return (0);
}
