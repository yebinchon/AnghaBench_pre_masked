
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_dbuf {int flags; int * dmamap; int * dmatag; scalar_t__ sl; int * buf; int * shadbuf; int * tmpbuf; scalar_t__ buf_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *,int ) ;

void
FUNC_3(struct snd_dbuf *VAR_2)
{
 if (VAR_2->tmpbuf)
  FUNC_2(VAR_2->tmpbuf, VAR_0);

 if (VAR_2->shadbuf)
  FUNC_2(VAR_2->shadbuf, VAR_0);

 if (VAR_2->buf) {
  if (VAR_2->flags & VAR_1) {
   if (VAR_2->buf_addr)
    FUNC_0(VAR_2->dmatag, VAR_2->dmamap);
   if (VAR_2->dmatag)
    FUNC_1(VAR_2->dmatag, VAR_2->buf, VAR_2->dmamap);
  } else
   FUNC_2(VAR_2->buf, VAR_0);
 }

 VAR_2->tmpbuf = ((void*)0);
 VAR_2->shadbuf = ((void*)0);
 VAR_2->buf = ((void*)0);
 VAR_2->sl = 0;
 VAR_2->dmatag = ((void*)0);
 VAR_2->dmamap = ((void*)0);
}
