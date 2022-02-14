
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct snd_dbuf {int dummy; } ;
struct pcm_channel {int flags; struct snd_dbuf* bufsoft; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pcm_channel*) ;
 int FUNC_1 (struct pcm_channel*) ;
 scalar_t__ FUNC_2 (struct pcm_channel*) ;
 int FUNC_3 (struct pcm_channel*,int) ;
 int FUNC_4 (struct thread*,int ) ;
 int FUNC_5 (struct snd_dbuf*) ;

int
FUNC_6(struct pcm_channel *VAR_2, int VAR_3, struct thread *VAR_4)
{
 struct snd_dbuf *VAR_5 = VAR_2->bufsoft;
 int VAR_6;

 FUNC_0(VAR_2);

     if (!(VAR_2->flags & (VAR_0 | VAR_1))) {
  VAR_6 = FUNC_3(VAR_2, 1);
  if (VAR_6 != 0)
   return (0);
 }

 VAR_6 = 0;
 if (FUNC_2(VAR_2)) {
  FUNC_1(VAR_2);
  VAR_6 = VAR_3;
 } else
  FUNC_4(VAR_4, FUNC_5(VAR_5));

 return (VAR_6);
}
