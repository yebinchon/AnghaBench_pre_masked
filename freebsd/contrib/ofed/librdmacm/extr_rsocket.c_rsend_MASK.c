
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct rsocket {scalar_t__ type; int state; size_t sbuf_bytes_avail; size_t target_sge; size_t sq_inline; void* sbuf; int slock; struct ibv_sge* ssgl; TYPE_1__* target_sgl; scalar_t__ iomap_pending; } ;
struct ibv_sge {uintptr_t addr; size_t length; scalar_t__ lkey; } ;
typedef int ssize_t ;
struct TYPE_2__ {size_t length; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct rsocket*,void const*,size_t,int) ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_8 ;
 struct rsocket* FUNC_4 (int *,int) ;
 int FUNC_5 (void*,void const*,size_t) ;
 int FUNC_6 (struct rsocket*) ;
 int VAR_9 ;
 int FUNC_7 (struct rsocket*) ;
 int FUNC_8 (struct rsocket*,int ,int ) ;
 int FUNC_9 (struct rsocket*,int) ;
 int VAR_10 ;
 size_t FUNC_10 (struct rsocket*) ;
 int FUNC_11 (struct rsocket*,int) ;
 int VAR_11 ;
 int FUNC_12 (struct rsocket*,struct ibv_sge*,int,size_t,int ) ;

ssize_t FUNC_13(int VAR_12, const void *VAR_13, size_t VAR_14, int VAR_15)
{
 struct rsocket *VAR_16;
 struct ibv_sge VAR_17;
 size_t VAR_18 = VAR_14;
 uint32_t VAR_19, VAR_20 = VAR_5;
 int VAR_21 = 0;

 VAR_16 = FUNC_4(&VAR_8, VAR_12);
 if (VAR_16->type == VAR_6) {
  FUNC_2(&VAR_16->slock);
  VAR_21 = FUNC_1(VAR_16, VAR_13, VAR_14, VAR_15);
  FUNC_3(&VAR_16->slock);
  return VAR_21;
 }

 if (VAR_16->state & VAR_10) {
  VAR_21 = FUNC_7(VAR_16);
  if (VAR_21) {
   if (VAR_7 == VAR_2)
    VAR_7 = VAR_0;
   return VAR_21;
  }
 }

 FUNC_2(&VAR_16->slock);
 if (VAR_16->iomap_pending) {
  VAR_21 = FUNC_11(VAR_16, VAR_15);
  if (VAR_21)
   goto out;
 }
 for (; VAR_18; VAR_18 -= VAR_19, VAR_13 += VAR_19) {
  if (!FUNC_6(VAR_16)) {
   VAR_21 = FUNC_8(VAR_16, FUNC_9(VAR_16, VAR_15),
       VAR_9);
   if (VAR_21)
    break;
   if (!(VAR_16->state & VAR_11)) {
    VAR_21 = FUNC_0(VAR_1);
    break;
   }
  }

  if (VAR_20 < VAR_18) {
   VAR_19 = VAR_20;
   if (VAR_20 < VAR_4)
    VAR_20 <<= 1;
  } else {
   VAR_19 = VAR_18;
  }

  if (VAR_19 > VAR_16->sbuf_bytes_avail)
   VAR_19 = VAR_16->sbuf_bytes_avail;
  if (VAR_19 > VAR_16->target_sgl[VAR_16->target_sge].length)
   VAR_19 = VAR_16->target_sgl[VAR_16->target_sge].length;

  if (VAR_19 <= VAR_16->sq_inline) {
   VAR_17.addr = (uintptr_t) VAR_13;
   VAR_17.length = VAR_19;
   VAR_17.lkey = 0;
   VAR_21 = FUNC_12(VAR_16, &VAR_17, 1, VAR_19, VAR_3);
  } else if (VAR_19 <= FUNC_10(VAR_16)) {
   FUNC_5((void *) (uintptr_t) VAR_16->ssgl[0].addr, VAR_13, VAR_19);
   VAR_16->ssgl[0].length = VAR_19;
   VAR_21 = FUNC_12(VAR_16, VAR_16->ssgl, 1, VAR_19, 0);
   if (VAR_19 < FUNC_10(VAR_16))
    VAR_16->ssgl[0].addr += VAR_19;
   else
    VAR_16->ssgl[0].addr = (uintptr_t) VAR_16->sbuf;
  } else {
   VAR_16->ssgl[0].length = FUNC_10(VAR_16);
   FUNC_5((void *) (uintptr_t) VAR_16->ssgl[0].addr, VAR_13,
    VAR_16->ssgl[0].length);
   VAR_16->ssgl[1].length = VAR_19 - VAR_16->ssgl[0].length;
   FUNC_5(VAR_16->sbuf, VAR_13 + VAR_16->ssgl[0].length, VAR_16->ssgl[1].length);
   VAR_21 = FUNC_12(VAR_16, VAR_16->ssgl, 2, VAR_19, 0);
   VAR_16->ssgl[0].addr = (uintptr_t) VAR_16->sbuf + VAR_16->ssgl[1].length;
  }
  if (VAR_21)
   break;
 }
out:
 FUNC_3(&VAR_16->slock);

 return (VAR_21 && VAR_18 == VAR_14) ? VAR_21 : VAR_14 - VAR_18;
}
