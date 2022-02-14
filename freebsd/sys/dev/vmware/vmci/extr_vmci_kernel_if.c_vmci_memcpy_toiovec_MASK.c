
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct iovec {scalar_t__ iov_len; void* iov_base; } ;


 size_t FUNC_0 (scalar_t__,size_t) ;
 int FUNC_1 (void*,int *,size_t) ;

__attribute__((used)) static inline void
FUNC_2(struct iovec *VAR_0, uint8_t *VAR_1, size_t VAR_2)
{

 while (VAR_2 > 0) {
  if (VAR_0->iov_len) {
   size_t VAR_3 = FUNC_0(VAR_0->iov_len, VAR_2);
   FUNC_1(VAR_0->iov_base, VAR_1, VAR_3);
   VAR_1 += VAR_3;
   VAR_2 -= VAR_3;
   VAR_0->iov_base = (void *)((uintptr_t) VAR_0->iov_base +
       VAR_3);
   VAR_0->iov_len -= VAR_3;
  }
  VAR_0++;
 }
}
