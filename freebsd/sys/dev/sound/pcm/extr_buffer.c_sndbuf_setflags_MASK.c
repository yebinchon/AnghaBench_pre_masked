
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct snd_dbuf {int flags; } ;



void
FUNC_0(struct snd_dbuf *VAR_0, u_int32_t VAR_1, int VAR_2)
{
 VAR_0->flags &= ~VAR_1;
 if (VAR_2)
  VAR_0->flags |= VAR_1;
}
