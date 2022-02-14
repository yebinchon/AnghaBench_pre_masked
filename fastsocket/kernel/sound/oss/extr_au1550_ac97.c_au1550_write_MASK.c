
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int f_flags; scalar_t__ private_data; } ;
struct dmabuf {size_t cnt_factor; scalar_t__ dmasize; int count; scalar_t__ nextIn; scalar_t__ rawbuf; int dma_qcount; int fragsize; scalar_t__ nextOut; int wait; scalar_t__ dma_fragsize; int total_bytes; int dmanr; scalar_t__ mapped; } ;
struct au1550_state {int sem; int lock; struct dmabuf dma_dac; } ;
typedef int ssize_t ;
typedef int loff_t ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char const*,size_t) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int ,scalar_t__,int) ;
 int FUNC_5 (struct dmabuf*,char*,int,int ) ;
 int VAR_8 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,size_t) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 () ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int *,unsigned long) ;
 int FUNC_15 (int *,unsigned long) ;
 int FUNC_16 (struct au1550_state*) ;
 int VAR_9 ;

__attribute__((used)) static ssize_t
FUNC_17(struct file *VAR_10, const char *VAR_11, size_t VAR_12, loff_t * VAR_13)
{
 struct au1550_state *VAR_14 = (struct au1550_state *)VAR_10->private_data;
 struct dmabuf *VAR_15 = &VAR_14->dma_dac;
 FUNC_0(VAR_9, VAR_8);
 ssize_t VAR_16 = 0;
 unsigned long VAR_17;
 int VAR_18, VAR_19, VAR_20;

 FUNC_9("write: count=%d\n", VAR_12);

 if (VAR_15->mapped)
  return -VAR_2;
 if (!FUNC_2(VAR_7, VAR_11, VAR_12))
  return -VAR_1;

 VAR_12 *= VAR_15->cnt_factor;

 FUNC_7(&VAR_14->sem);
 FUNC_3(&VAR_15->wait, &VAR_9);

 while (VAR_12 > 0) {


  do {
   FUNC_14(&VAR_14->lock, VAR_17);
   VAR_20 = (int) VAR_15->dmasize - VAR_15->count;
   if (VAR_20 <= 0)
    FUNC_1(VAR_5);
   FUNC_15(&VAR_14->lock, VAR_17);
   if (VAR_20 <= 0) {
    if (VAR_10->f_flags & VAR_4) {
     if (!VAR_16)
      VAR_16 = -VAR_0;
     goto out;
    }
    FUNC_8(&VAR_14->sem);
    FUNC_11();
    if (FUNC_13(VAR_8)) {
     if (!VAR_16)
      VAR_16 = -VAR_3;
     goto out2;
    }
    FUNC_7(&VAR_14->sem);
   }
  } while (VAR_20 <= 0);



  if ((VAR_18 = FUNC_5(VAR_15, (char *) VAR_11,
         VAR_12 > VAR_20 ?
         VAR_20 : VAR_12, 0)) < 0) {
   if (!VAR_16)
    VAR_16 = -VAR_1;
   goto out;
  }

  FUNC_14(&VAR_14->lock, VAR_17);
  VAR_15->count += VAR_18;
  VAR_15->nextIn += VAR_18;
  if (VAR_15->nextIn >= VAR_15->rawbuf + VAR_15->dmasize)
   VAR_15->nextIn -= VAR_15->dmasize;





  while ((VAR_15->dma_qcount < 2) && (VAR_15->count >= VAR_15->fragsize)) {
   if (FUNC_4(VAR_15->dmanr, VAR_15->nextOut,
       VAR_15->fragsize) == 0) {
    FUNC_6("qcount < 2 and no ring room!");
   }
   VAR_15->nextOut += VAR_15->fragsize;
   if (VAR_15->nextOut >= VAR_15->rawbuf + VAR_15->dmasize)
    VAR_15->nextOut -= VAR_15->dmasize;
   VAR_15->total_bytes += VAR_15->dma_fragsize;
   if (VAR_15->dma_qcount == 0)
    FUNC_16(VAR_14);
   VAR_15->dma_qcount++;
  }
  FUNC_15(&VAR_14->lock, VAR_17);

  VAR_12 -= VAR_18;
  VAR_19 = VAR_18 / VAR_15->cnt_factor;
  VAR_11 += VAR_19;
  VAR_16 += VAR_19;
 }

out:
 FUNC_8(&VAR_14->sem);
out2:
 FUNC_10(&VAR_15->wait, &VAR_9);
 FUNC_12(VAR_6);
 return VAR_16;
}
