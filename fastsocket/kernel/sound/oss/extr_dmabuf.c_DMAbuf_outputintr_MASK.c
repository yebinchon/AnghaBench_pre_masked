
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_buffparms {int flags; int dma; int bytes_in_use; int fragment_size; int nbufs; int qhead; int lock; } ;
struct audio_operations {struct dma_buffparms* dmap_out; } ;


 int VAR_0 ;
 struct audio_operations** VAR_1 ;
 unsigned long FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_2 ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

void FUNC_9(int VAR_3, int VAR_4)
{
 struct audio_operations *VAR_5 = VAR_1[VAR_3];
 unsigned long VAR_6;
 struct dma_buffparms *VAR_7 = VAR_5->dmap_out;

 FUNC_7(&VAR_7->lock,VAR_6);
 if (!(VAR_7->flags & VAR_0)) {
  int VAR_8 = VAR_7->dma, VAR_9, VAR_10;
  unsigned long VAR_11;

  VAR_11=FUNC_0();

  if(!VAR_2)
   FUNC_2(VAR_7->dma);
  FUNC_1(VAR_8);
  VAR_9 = VAR_7->bytes_in_use - FUNC_5(VAR_8);
  if(!VAR_2)
   FUNC_4(VAR_7->dma);
  FUNC_6(VAR_11);

  VAR_9 = VAR_9 / VAR_7->fragment_size;
  if (VAR_9 < 0 || VAR_9 >= VAR_7->nbufs)
   VAR_9 = 0;
  VAR_10 = 0;
  while (VAR_7->qhead != VAR_9 && VAR_10++ < VAR_7->nbufs)
   FUNC_3(VAR_3, VAR_4);
 }
 else
  FUNC_3(VAR_3, VAR_4);
 FUNC_8(&VAR_7->lock,VAR_6);
}
