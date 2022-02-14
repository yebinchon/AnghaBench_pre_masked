
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct iovec {size_t iov_len; } const iovec ;
struct iov_iter {size_t count; int nr_segs; size_t iov_offset; struct iovec const* iov; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (size_t,size_t) ;
 scalar_t__ FUNC_3 (int) ;

void FUNC_4(struct iov_iter *VAR_0, size_t VAR_1)
{
 FUNC_0(VAR_0->count < VAR_1);

 if (FUNC_1(VAR_0->nr_segs == 1)) {
  VAR_0->iov_offset += VAR_1;
  VAR_0->count -= VAR_1;
 } else {
  const struct iovec *VAR_2 = VAR_0->iov;
  size_t VAR_3 = VAR_0->iov_offset;





  while (VAR_1 || FUNC_3(VAR_0->count && !VAR_2->iov_len)) {
   int VAR_4;

   VAR_4 = FUNC_2(VAR_1, VAR_2->iov_len - VAR_3);
   FUNC_0(!VAR_0->count || VAR_0->count < VAR_4);
   VAR_0->count -= VAR_4;
   VAR_1 -= VAR_4;
   VAR_3 += VAR_4;
   if (VAR_2->iov_len == VAR_3) {
    VAR_2++;
    VAR_3 = 0;
   }
  }
  VAR_0->iov = VAR_2;
  VAR_0->iov_offset = VAR_3;
 }
}
