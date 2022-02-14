
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_dbuf {unsigned int maxsize; unsigned int bufsize; void* buf; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_dbuf*,int,int) ;

int
FUNC_1(struct snd_dbuf *VAR_1, void *VAR_2, unsigned int VAR_3)
{
 VAR_1->flags &= ~VAR_0;
 if (VAR_2)
  VAR_1->flags |= VAR_0;
 VAR_1->buf = VAR_2;
 VAR_1->maxsize = VAR_3;
 VAR_1->bufsize = VAR_1->maxsize;
 return FUNC_0(VAR_1, 2, VAR_1->maxsize / 2);
}
