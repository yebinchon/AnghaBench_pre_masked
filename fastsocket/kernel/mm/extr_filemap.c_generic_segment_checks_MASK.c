
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iovec {size_t iov_len; int iov_base; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int ,size_t) ;
 scalar_t__ FUNC_1 (int) ;

int FUNC_2(const struct iovec *VAR_2,
   unsigned long *VAR_3, size_t *VAR_4, int VAR_5)
{
 unsigned long VAR_6;
 size_t VAR_7 = 0;
 for (VAR_6 = 0; VAR_6 < *VAR_3; VAR_6++) {
  const struct iovec *VAR_8 = &VAR_2[VAR_6];





  VAR_7 += VAR_8->iov_len;
  if (FUNC_1((ssize_t)(VAR_7|VAR_8->iov_len) < 0))
   return -VAR_1;
  if (FUNC_0(VAR_5, VAR_8->iov_base, VAR_8->iov_len))
   continue;
  if (VAR_6 == 0)
   return -VAR_0;
  *VAR_3 = VAR_6;
  VAR_7 -= VAR_8->iov_len;
  break;
 }
 *VAR_4 = VAR_7;
 return 0;
}
