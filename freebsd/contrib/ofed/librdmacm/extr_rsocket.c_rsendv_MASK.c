
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct rsocket {int state; size_t sbuf_bytes_avail; size_t target_sge; size_t sq_inline; void* sbuf; int slock; TYPE_2__* ssgl; TYPE_1__* target_sgl; scalar_t__ iomap_pending; } ;
struct iovec {size_t iov_len; } ;
typedef int ssize_t ;
struct TYPE_4__ {size_t addr; size_t length; } ;
struct TYPE_3__ {size_t length; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_7 ;
 struct rsocket* FUNC_3 (int *,int) ;
 int FUNC_4 (struct rsocket*) ;
 int VAR_8 ;
 int FUNC_5 (void*,struct iovec const**,size_t*,size_t) ;
 int FUNC_6 (struct rsocket*) ;
 int FUNC_7 (struct rsocket*,int ,int ) ;
 int FUNC_8 (struct rsocket*,int) ;
 int VAR_9 ;
 size_t FUNC_9 (struct rsocket*) ;
 int FUNC_10 (struct rsocket*,int) ;
 int VAR_10 ;
 int FUNC_11 (struct rsocket*,TYPE_2__*,int,size_t,int ) ;

__attribute__((used)) static ssize_t FUNC_12(int VAR_11, const struct iovec *VAR_12, int VAR_13, int VAR_14)
{
 struct rsocket *VAR_15;
 const struct iovec *VAR_16;
 size_t VAR_17, VAR_18, VAR_19 = 0;
 uint32_t VAR_20, VAR_21 = VAR_5;
 int VAR_22, VAR_23 = 0;

 VAR_15 = FUNC_3(&VAR_7, VAR_11);
 if (VAR_15->state & VAR_9) {
  VAR_23 = FUNC_6(VAR_15);
  if (VAR_23) {
   if (VAR_6 == VAR_2)
    VAR_6 = VAR_0;
   return VAR_23;
  }
 }

 VAR_16 = VAR_12;
 VAR_18 = VAR_12[0].iov_len;
 for (VAR_22 = 1; VAR_22 < VAR_13; VAR_22++)
  VAR_18 += VAR_12[VAR_22].iov_len;
 VAR_17 = VAR_18;

 FUNC_1(&VAR_15->slock);
 if (VAR_15->iomap_pending) {
  VAR_23 = FUNC_10(VAR_15, VAR_14);
  if (VAR_23)
   goto out;
 }
 for (; VAR_17; VAR_17 -= VAR_20) {
  if (!FUNC_4(VAR_15)) {
   VAR_23 = FUNC_7(VAR_15, FUNC_8(VAR_15, VAR_14),
       VAR_8);
   if (VAR_23)
    break;
   if (!(VAR_15->state & VAR_10)) {
    VAR_23 = FUNC_0(VAR_1);
    break;
   }
  }

  if (VAR_21 < VAR_17) {
   VAR_20 = VAR_21;
   if (VAR_21 < VAR_4)
    VAR_21 <<= 1;
  } else {
   VAR_20 = VAR_17;
  }

  if (VAR_20 > VAR_15->sbuf_bytes_avail)
   VAR_20 = VAR_15->sbuf_bytes_avail;
  if (VAR_20 > VAR_15->target_sgl[VAR_15->target_sge].length)
   VAR_20 = VAR_15->target_sgl[VAR_15->target_sge].length;

  if (VAR_20 <= FUNC_9(VAR_15)) {
   FUNC_5((void *) (uintptr_t) VAR_15->ssgl[0].addr,
        &VAR_16, &VAR_19, VAR_20);
   VAR_15->ssgl[0].length = VAR_20;
   VAR_23 = FUNC_11(VAR_15, VAR_15->ssgl, 1, VAR_20,
         VAR_20 <= VAR_15->sq_inline ? VAR_3 : 0);
   if (VAR_20 < FUNC_9(VAR_15))
    VAR_15->ssgl[0].addr += VAR_20;
   else
    VAR_15->ssgl[0].addr = (uintptr_t) VAR_15->sbuf;
  } else {
   VAR_15->ssgl[0].length = FUNC_9(VAR_15);
   FUNC_5((void *) (uintptr_t) VAR_15->ssgl[0].addr, &VAR_16,
        &VAR_19, VAR_15->ssgl[0].length);
   VAR_15->ssgl[1].length = VAR_20 - VAR_15->ssgl[0].length;
   FUNC_5(VAR_15->sbuf, &VAR_16, &VAR_19, VAR_15->ssgl[1].length);
   VAR_23 = FUNC_11(VAR_15, VAR_15->ssgl, 2, VAR_20,
         VAR_20 <= VAR_15->sq_inline ? VAR_3 : 0);
   VAR_15->ssgl[0].addr = (uintptr_t) VAR_15->sbuf + VAR_15->ssgl[1].length;
  }
  if (VAR_23)
   break;
 }
out:
 FUNC_2(&VAR_15->slock);

 return (VAR_23 && VAR_17 == VAR_18) ? VAR_23 : VAR_18 - VAR_17;
}
