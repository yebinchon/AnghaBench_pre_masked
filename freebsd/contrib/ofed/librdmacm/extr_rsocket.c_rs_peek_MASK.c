
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct rsocket {int rmsg_head; int rbuf_offset; int rmsg_tail; int rq_size; size_t rbuf_size; int * rbuf; TYPE_1__* rmsg; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {size_t data; } ;


 int FUNC_0 (void*,int *,size_t) ;

__attribute__((used)) static ssize_t FUNC_1(struct rsocket *VAR_0, void *VAR_1, size_t VAR_2)
{
 size_t VAR_3 = VAR_2;
 uint32_t VAR_4, VAR_5;
 int VAR_6, VAR_7;

 VAR_6 = VAR_0->rmsg_head;
 VAR_7 = VAR_0->rbuf_offset;

 for (; VAR_3 && (VAR_6 != VAR_0->rmsg_tail); VAR_3 -= VAR_5) {
  if (VAR_3 < VAR_0->rmsg[VAR_6].data) {
   VAR_5 = VAR_3;
  } else {
   VAR_5 = VAR_0->rmsg[VAR_6].data;
   if (++VAR_6 == VAR_0->rq_size + 1)
    VAR_6 = 0;
  }

  VAR_4 = VAR_0->rbuf_size - VAR_7;
  if (VAR_5 > VAR_4) {
   FUNC_0(VAR_1, &VAR_0->rbuf[VAR_7], VAR_4);
   VAR_7 = 0;
   VAR_1 += VAR_4;
   VAR_5 -= VAR_4;
   VAR_3 -= VAR_4;
  }
  FUNC_0(VAR_1, &VAR_0->rbuf[VAR_7], VAR_5);
  VAR_7 += VAR_5;
  VAR_1 += VAR_5;
 }

 return VAR_2 - VAR_3;
}
