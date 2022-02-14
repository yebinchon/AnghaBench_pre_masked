
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_dbuf {int dmaflags; unsigned int maxsize; unsigned int bufsize; scalar_t__ buf_addr; int buf; int dmamap; int dmatag; int flags; } ;
typedef int bus_dma_tag_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,int ,unsigned int,int ,struct snd_dbuf*,int ) ;
 scalar_t__ FUNC_1 (int ,void**,int,int *) ;
 int FUNC_2 (struct snd_dbuf*) ;
 int FUNC_3 (struct snd_dbuf*,int,int) ;
 int VAR_4 ;

int
FUNC_4(struct snd_dbuf *VAR_5, bus_dma_tag_t VAR_6, int VAR_7,
    unsigned int VAR_8)
{
 int VAR_9;

 VAR_5->dmatag = VAR_6;
 VAR_5->dmaflags = VAR_7 | VAR_1 | VAR_0;
 VAR_5->maxsize = VAR_8;
 VAR_5->bufsize = VAR_5->maxsize;
 VAR_5->buf_addr = 0;
 VAR_5->flags |= VAR_3;
 if (FUNC_1(VAR_5->dmatag, (void **)&VAR_5->buf, VAR_5->dmaflags,
     &VAR_5->dmamap)) {
  FUNC_2(VAR_5);
  return (VAR_2);
 }
 if (FUNC_0(VAR_5->dmatag, VAR_5->dmamap, VAR_5->buf, VAR_5->maxsize,
     VAR_4, VAR_5, 0) != 0 || VAR_5->buf_addr == 0) {
  FUNC_2(VAR_5);
  return (VAR_2);
 }

 VAR_9 = FUNC_3(VAR_5, 2, VAR_5->maxsize / 2);
 if (VAR_9 != 0)
  FUNC_2(VAR_5);

 return (VAR_9);
}
