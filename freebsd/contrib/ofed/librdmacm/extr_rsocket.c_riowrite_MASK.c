
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct rsocket {int state; size_t sbuf_bytes_avail; size_t sq_inline; void* sbuf; int slock; struct ibv_sge* ssgl; scalar_t__ iomap_pending; } ;
struct TYPE_2__ {scalar_t__ length; } ;
struct rs_iomap {scalar_t__ offset; TYPE_1__ sge; } ;
struct ibv_sge {uintptr_t addr; size_t length; scalar_t__ lkey; } ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 struct rsocket* FUNC_3 (int *,int) ;
 int FUNC_4 (void*,void const*,size_t) ;
 int FUNC_5 (struct rsocket*) ;
 int VAR_5 ;
 struct rs_iomap* FUNC_6 (struct rsocket*,scalar_t__) ;
 int FUNC_7 (struct rsocket*,int ,int ) ;
 int FUNC_8 (struct rsocket*,int) ;
 size_t FUNC_9 (struct rsocket*) ;
 int FUNC_10 (struct rsocket*,int) ;
 int VAR_6 ;
 int FUNC_11 (struct rsocket*,struct rs_iomap*,scalar_t__,struct ibv_sge*,int,size_t,int ) ;

size_t FUNC_12(int VAR_7, const void *VAR_8, size_t VAR_9, off_t VAR_10, int VAR_11)
{
 struct rsocket *VAR_12;
 struct rs_iomap *VAR_13 = ((void*)0);
 struct ibv_sge VAR_14;
 size_t VAR_15 = VAR_9;
 uint32_t VAR_16, VAR_17 = VAR_3;
 int VAR_18 = 0;

 VAR_12 = FUNC_3(&VAR_4, VAR_7);
 FUNC_1(&VAR_12->slock);
 if (VAR_12->iomap_pending) {
  VAR_18 = FUNC_10(VAR_12, VAR_11);
  if (VAR_18)
   goto out;
 }
 for (; VAR_15; VAR_15 -= VAR_16, VAR_8 += VAR_16, VAR_10 += VAR_16) {
  if (!VAR_13 || VAR_10 > VAR_13->offset + VAR_13->sge.length) {
   VAR_13 = FUNC_6(VAR_12, VAR_10);
   if (!VAR_13)
    break;
  }

  if (!FUNC_5(VAR_12)) {
   VAR_18 = FUNC_7(VAR_12, FUNC_8(VAR_12, VAR_11),
       VAR_5);
   if (VAR_18)
    break;
   if (!(VAR_12->state & VAR_6)) {
    VAR_18 = FUNC_0(VAR_0);
    break;
   }
  }

  if (VAR_17 < VAR_15) {
   VAR_16 = VAR_17;
   if (VAR_17 < VAR_2)
    VAR_17 <<= 1;
  } else {
   VAR_16 = VAR_15;
  }

  if (VAR_16 > VAR_12->sbuf_bytes_avail)
   VAR_16 = VAR_12->sbuf_bytes_avail;
  if (VAR_16 > VAR_13->offset + VAR_13->sge.length - VAR_10)
   VAR_16 = VAR_13->offset + VAR_13->sge.length - VAR_10;

  if (VAR_16 <= VAR_12->sq_inline) {
   VAR_14.addr = (uintptr_t) VAR_8;
   VAR_14.length = VAR_16;
   VAR_14.lkey = 0;
   VAR_18 = FUNC_11(VAR_12, VAR_13, VAR_10, &VAR_14, 1,
           VAR_16, VAR_1);
  } else if (VAR_16 <= FUNC_9(VAR_12)) {
   FUNC_4((void *) (uintptr_t) VAR_12->ssgl[0].addr, VAR_8, VAR_16);
   VAR_12->ssgl[0].length = VAR_16;
   VAR_18 = FUNC_11(VAR_12, VAR_13, VAR_10, VAR_12->ssgl, 1, VAR_16, 0);
   if (VAR_16 < FUNC_9(VAR_12))
    VAR_12->ssgl[0].addr += VAR_16;
   else
    VAR_12->ssgl[0].addr = (uintptr_t) VAR_12->sbuf;
  } else {
   VAR_12->ssgl[0].length = FUNC_9(VAR_12);
   FUNC_4((void *) (uintptr_t) VAR_12->ssgl[0].addr, VAR_8,
    VAR_12->ssgl[0].length);
   VAR_12->ssgl[1].length = VAR_16 - VAR_12->ssgl[0].length;
   FUNC_4(VAR_12->sbuf, VAR_8 + VAR_12->ssgl[0].length, VAR_12->ssgl[1].length);
   VAR_18 = FUNC_11(VAR_12, VAR_13, VAR_10, VAR_12->ssgl, 2, VAR_16, 0);
   VAR_12->ssgl[0].addr = (uintptr_t) VAR_12->sbuf + VAR_12->ssgl[1].length;
  }
  if (VAR_18)
   break;
 }
out:
 FUNC_2(&VAR_12->slock);

 return (VAR_18 && VAR_15 == VAR_9) ? VAR_18 : VAR_9 - VAR_15;
}
