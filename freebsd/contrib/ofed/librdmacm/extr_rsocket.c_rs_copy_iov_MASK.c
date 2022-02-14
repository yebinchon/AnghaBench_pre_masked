
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iovec {size_t iov_len; scalar_t__ iov_base; } ;


 int FUNC_0 (void*,scalar_t__,size_t) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, const struct iovec **VAR_1, size_t *VAR_2, size_t VAR_3)
{
 size_t VAR_4;

 while (VAR_3) {
  VAR_4 = (*VAR_1)->iov_len - *VAR_2;
  if (VAR_4 > VAR_3) {
   FUNC_0 (VAR_0, (*VAR_1)->iov_base + *VAR_2, VAR_3);
   *VAR_2 += VAR_3;
   break;
  }

  FUNC_0(VAR_0, (*VAR_1)->iov_base + *VAR_2, VAR_4);
  VAR_3 -= VAR_4;
  VAR_0 += VAR_4;
  (*VAR_1)++;
  *VAR_2 = 0;
 }
}
