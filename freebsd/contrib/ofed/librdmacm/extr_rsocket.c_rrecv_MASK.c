
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct rsocket {scalar_t__ type; int state; size_t rmsg_head; int rq_size; size_t rbuf_size; size_t rbuf_offset; size_t rbuf_bytes_avail; int rlock; int * rbuf; TYPE_1__* rmsg; int rseq_no; } ;
typedef int ssize_t ;
struct TYPE_2__ {size_t data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct rsocket*,void*,size_t,int,int *,int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_6 ;
 struct rsocket* FUNC_3 (int *,int) ;
 int FUNC_4 (void*,int *,size_t) ;
 int VAR_7 ;
 int FUNC_5 (struct rsocket*) ;
 int FUNC_6 (struct rsocket*,int ,int ) ;
 scalar_t__ FUNC_7 (struct rsocket*) ;
 int FUNC_8 (struct rsocket*,int) ;
 int VAR_8 ;
 size_t FUNC_9 (struct rsocket*,void*,size_t) ;
 int VAR_9 ;

ssize_t FUNC_10(int VAR_10, void *VAR_11, size_t VAR_12, int VAR_13)
{
 struct rsocket *VAR_14;
 size_t VAR_15 = VAR_12;
 uint32_t VAR_16, VAR_17;
 int VAR_18 = 0;

 VAR_14 = FUNC_3(&VAR_6, VAR_10);
 if (VAR_14->type == VAR_4) {
  FUNC_1(&VAR_14->rlock);
  VAR_18 = FUNC_0(VAR_14, VAR_11, VAR_12, VAR_13, ((void*)0), ((void*)0));
  FUNC_2(&VAR_14->rlock);
  return VAR_18;
 }

 if (VAR_14->state & VAR_8) {
  VAR_18 = FUNC_5(VAR_14);
  if (VAR_18) {
   if (VAR_5 == VAR_1)
    VAR_5 = VAR_0;
   return VAR_18;
  }
 }
 FUNC_1(&VAR_14->rlock);
 do {
  if (!FUNC_7(VAR_14)) {
   VAR_18 = FUNC_6(VAR_14, FUNC_8(VAR_14, VAR_13),
       VAR_7);
   if (VAR_18)
    break;
  }

  if (VAR_13 & VAR_2) {
   VAR_15 = VAR_12 - FUNC_9(VAR_14, VAR_11, VAR_15);
   break;
  }

  for (; VAR_15 && FUNC_7(VAR_14); VAR_15 -= VAR_17) {
   if (VAR_15 < VAR_14->rmsg[VAR_14->rmsg_head].data) {
    VAR_17 = VAR_15;
    VAR_14->rmsg[VAR_14->rmsg_head].data -= VAR_15;
   } else {
    VAR_14->rseq_no++;
    VAR_17 = VAR_14->rmsg[VAR_14->rmsg_head].data;
    if (++VAR_14->rmsg_head == VAR_14->rq_size + 1)
     VAR_14->rmsg_head = 0;
   }

   VAR_16 = VAR_14->rbuf_size - VAR_14->rbuf_offset;
   if (VAR_17 > VAR_16) {
    FUNC_4(VAR_11, &VAR_14->rbuf[VAR_14->rbuf_offset], VAR_16);
    VAR_14->rbuf_offset = 0;
    VAR_11 += VAR_16;
    VAR_17 -= VAR_16;
    VAR_15 -= VAR_16;
    VAR_14->rbuf_bytes_avail += VAR_16;
   }
   FUNC_4(VAR_11, &VAR_14->rbuf[VAR_14->rbuf_offset], VAR_17);
   VAR_14->rbuf_offset += VAR_17;
   VAR_11 += VAR_17;
   VAR_14->rbuf_bytes_avail += VAR_17;
  }

 } while (VAR_15 && (VAR_13 & VAR_3) && (VAR_14->state & VAR_9));

 FUNC_2(&VAR_14->rlock);
 return (VAR_18 && VAR_15 == VAR_12) ? VAR_18 : VAR_12 - VAR_15;
}
