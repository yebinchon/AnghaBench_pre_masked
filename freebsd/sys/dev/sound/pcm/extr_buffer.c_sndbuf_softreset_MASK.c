
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_dbuf {scalar_t__ bufsize; scalar_t__ buf; scalar_t__ rl; } ;


 int FUNC_0 (struct snd_dbuf*,scalar_t__) ;

void
FUNC_1(struct snd_dbuf *VAR_0)
{
 VAR_0->rl = 0;
 if (VAR_0->buf && VAR_0->bufsize > 0)
  FUNC_0(VAR_0, VAR_0->bufsize);
}
