
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_buffparms {int flags; int dma; int bytes_in_use; int fragment_size; int nbufs; int qtail; int lock; } ;
struct audio_operations {struct dma_buffparms* dmap_in; } ;


 int VAR_0 ;
 struct audio_operations** VAR_1 ;
 unsigned long FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_2 ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

void FUNC_9(int VAR_3)
{
 struct audio_operations *VAR_4 = VAR_1[VAR_3];
 struct dma_buffparms *VAR_5 = VAR_4->dmap_in;
 unsigned long VAR_6;

 FUNC_7(&VAR_5->lock,VAR_6);

 if (!(VAR_5->flags & VAR_0)) {
  int VAR_7 = VAR_5->dma, VAR_8, VAR_9;
  unsigned long VAR_10;

  VAR_10=FUNC_0();
  if(!VAR_2)
   FUNC_2(VAR_5->dma);
  FUNC_1(VAR_7);
  VAR_8 = VAR_5->bytes_in_use - FUNC_5(VAR_7);
  if(!VAR_2)
   FUNC_4(VAR_5->dma);
  FUNC_6(VAR_10);

  VAR_8 = VAR_8 / VAR_5->fragment_size;
  if (VAR_8 < 0 || VAR_8 >= VAR_5->nbufs)
   VAR_8 = 0;

  VAR_9 = 0;
  while (VAR_5->qtail != VAR_8 && ++VAR_9 < VAR_5->nbufs)
   FUNC_3(VAR_3);
 } else
  FUNC_3(VAR_3);
 FUNC_8(&VAR_5->lock,VAR_6);
}
