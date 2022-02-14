
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_dbuf {int dummy; } ;
struct pcm_channel {scalar_t__ blocks; struct snd_dbuf* bufsoft; struct snd_dbuf* bufhard; } ;


 int FUNC_0 (struct snd_dbuf*) ;

void
FUNC_1(struct pcm_channel *VAR_0)
{
 struct snd_dbuf *VAR_1 = VAR_0->bufhard;
 struct snd_dbuf *VAR_2 = VAR_0->bufsoft;

 VAR_0->blocks = 0;
 FUNC_0(VAR_1);
 FUNC_0(VAR_2);
}
