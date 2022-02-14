
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_dbuf {scalar_t__ bufsize; scalar_t__ buf; scalar_t__ xrun; scalar_t__ total; scalar_t__ prev_total; scalar_t__ dl; scalar_t__ rl; scalar_t__ rp; scalar_t__ hp; } ;


 int FUNC_0 (struct snd_dbuf*,scalar_t__) ;
 int FUNC_1 (struct snd_dbuf*) ;

void
FUNC_2(struct snd_dbuf *VAR_0)
{
 VAR_0->hp = 0;
 VAR_0->rp = 0;
 VAR_0->rl = 0;
 VAR_0->dl = 0;
 VAR_0->prev_total = 0;
 VAR_0->total = 0;
 VAR_0->xrun = 0;
 if (VAR_0->buf && VAR_0->bufsize > 0)
  FUNC_0(VAR_0, VAR_0->bufsize);
 FUNC_1(VAR_0);
}
