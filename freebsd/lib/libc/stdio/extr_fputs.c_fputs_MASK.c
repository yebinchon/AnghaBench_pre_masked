
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __suio {scalar_t__ uio_resid; int uio_iovcnt; struct __siov* uio_iov; } ;
struct __siov {scalar_t__ iov_len; void* iov_base; } ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,struct __suio*) ;
 scalar_t__ FUNC_4 (char const*) ;

int
FUNC_5(const char * __restrict VAR_1, FILE * __restrict VAR_2)
{
 int VAR_3;
 struct __suio VAR_4;
 struct __siov VAR_5;

 VAR_5.iov_base = (void *)VAR_1;
 VAR_4.uio_resid = VAR_5.iov_len = FUNC_4(VAR_1);
 VAR_4.uio_iov = &VAR_5;
 VAR_4.uio_iovcnt = 1;
 FUNC_0(VAR_2);
 FUNC_2(VAR_2, -1);
 VAR_3 = FUNC_3(VAR_2, &VAR_4);
 FUNC_1();
 if (VAR_3 == 0)
  return (VAR_5.iov_len > VAR_0 ? VAR_0 : VAR_5.iov_len);
 return (VAR_3);
}
