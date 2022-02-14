
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_dbuf {scalar_t__ bufsize; scalar_t__ rl; scalar_t__ rp; int fmt; } ;


 int FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (struct snd_dbuf*) ;
 int FUNC_2 (int ) ;

void
FUNC_3(struct snd_dbuf *VAR_0)
{
 if (VAR_0->bufsize > 0)
  FUNC_0(FUNC_1(VAR_0), FUNC_2(VAR_0->fmt), VAR_0->bufsize);
 VAR_0->rp = 0;
 VAR_0->rl = VAR_0->bufsize;
}
