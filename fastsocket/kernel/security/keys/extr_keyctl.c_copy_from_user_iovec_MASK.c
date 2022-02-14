
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iovec {int iov_len; int iov_base; } ;


 long VAR_0 ;
 scalar_t__ FUNC_0 (void*,int ,int ) ;

__attribute__((used)) static long FUNC_1(void *VAR_1, const struct iovec *VAR_2,
     unsigned VAR_3)
{
 for (; VAR_3 > 0; VAR_3--) {
  if (FUNC_0(VAR_1, VAR_2->iov_base, VAR_2->iov_len) != 0)
   return -VAR_0;
  VAR_1 += VAR_2->iov_len;
  VAR_2++;
 }
 return 0;
}
