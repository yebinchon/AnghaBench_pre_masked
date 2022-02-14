
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct snd_dbuf {int dummy; } ;
struct pcm_channel {int flags; scalar_t__ lw; scalar_t__ direction; struct snd_dbuf* bufsoft; } ;


 int VAR_0 ;
 int FUNC_0 (struct pcm_channel*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct snd_dbuf*) ;
 scalar_t__ FUNC_2 (struct snd_dbuf*) ;
 scalar_t__ FUNC_3 (struct snd_dbuf*) ;
 scalar_t__ FUNC_4 (struct snd_dbuf*) ;

__attribute__((used)) static int
FUNC_5(struct pcm_channel *VAR_2)
{
 struct snd_dbuf *VAR_3 = VAR_2->bufsoft;
 u_int VAR_4;

 FUNC_0(VAR_2);

 if (VAR_2->flags & VAR_0) {
  if (FUNC_2(VAR_3) < VAR_2->lw)
   VAR_4 = VAR_2->lw;
  else
   VAR_4 = FUNC_4(VAR_3) - FUNC_2(VAR_3);
 } else {
  if (VAR_2->direction == VAR_1)
   VAR_4 = FUNC_1(VAR_3);
  else
   VAR_4 = FUNC_3(VAR_3);
 }

 return ((VAR_4 < VAR_2->lw) ? 0 : 1);
}
