
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iovec {size_t iov_len; void* iov_base; } ;


 int FUNC_0 (struct iovec*,int,int) ;

struct iovec
FUNC_1(void *VAR_0, size_t VAR_1) {
 struct iovec VAR_2;

 FUNC_0(&VAR_2, 0xf5, sizeof VAR_2);
 VAR_2.iov_base = VAR_0;
 VAR_2.iov_len = VAR_1;
 return (VAR_2);
}
