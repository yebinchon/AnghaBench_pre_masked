
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_buffparms {int flags; unsigned long user_counter; unsigned long fragment_size; int cfrag; long byte_counter; long max_byte_counter; int bytes_in_use; unsigned long* counts; size_t qtail; int nbufs; int qlen; int lock; int * raw_buf; int neutral_byte; } ;
struct audio_operations {TYPE_1__* d; struct dma_buffparms* dmap_out; } ;
struct TYPE_2__ {int (* postprocess_write ) (int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,struct dma_buffparms*) ;
 struct audio_operations** VAR_3 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int) ;

int FUNC_4(int VAR_4, int VAR_5)
{
 struct audio_operations *VAR_6 = VAR_3[VAR_4];
 struct dma_buffparms *VAR_7 = VAR_6->dmap_out;
 unsigned long VAR_8;
 unsigned long VAR_9, VAR_10;
 int VAR_11;
 unsigned long VAR_12;

 FUNC_1(&VAR_7->lock,VAR_12);
 VAR_11= (VAR_7->flags & VAR_2);
 VAR_8 = (VAR_7->user_counter / VAR_7->fragment_size) * VAR_7->fragment_size;

 VAR_7->flags &= ~VAR_2;
 VAR_7->cfrag = -1;
 VAR_7->user_counter += VAR_5;
 VAR_7->flags |= VAR_1;

 if (VAR_7->byte_counter >= VAR_7->max_byte_counter) {

  long VAR_13 = VAR_7->byte_counter;
  VAR_7->byte_counter = (VAR_7->byte_counter % VAR_7->bytes_in_use);
  VAR_13 -= VAR_7->byte_counter;
  VAR_7->user_counter -= VAR_13;
 }
 VAR_9 = (VAR_7->user_counter / VAR_7->fragment_size) * VAR_7->fragment_size;

 VAR_10 = (VAR_7->user_counter - 1) % VAR_7->bytes_in_use;
 VAR_7->neutral_byte = VAR_7->raw_buf[VAR_10];


 while (VAR_8 < VAR_9) {
  VAR_7->counts[VAR_7->qtail] = VAR_7->fragment_size;
  VAR_7->qtail = (VAR_7->qtail + 1) % VAR_7->nbufs;
  VAR_7->qlen++;
  VAR_8 += VAR_7->fragment_size;
 }

 VAR_7->counts[VAR_7->qtail] = VAR_7->user_counter - VAR_8;





 if (VAR_6->d->postprocess_write)
  VAR_6->d->postprocess_write(VAR_4);

 if (!(VAR_7->flags & VAR_0))
  if (VAR_7->qlen > 1 || (VAR_7->qlen > 0 && (VAR_11 || VAR_7->qlen >= VAR_7->nbufs - 1)))
   FUNC_0(VAR_4, VAR_7);

 FUNC_2(&VAR_7->lock,VAR_12);
 return 0;
}
