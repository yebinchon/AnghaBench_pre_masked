
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_dbuf {int blksz; int dl; } ;



void
FUNC_0(struct snd_dbuf *VAR_0, int VAR_1)
{
 VAR_0->dl = VAR_1? VAR_0->blksz : 0;
}
