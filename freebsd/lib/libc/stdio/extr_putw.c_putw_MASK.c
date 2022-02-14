
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int w ;
struct __suio {int uio_resid; int uio_iovcnt; struct __siov* uio_iov; } ;
struct __siov {int* iov_base; int iov_len; } ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,struct __suio*) ;

int
FUNC_3(int VAR_0, FILE *VAR_1)
{
 int VAR_2;
 struct __suio VAR_3;
 struct __siov VAR_4;

 VAR_4.iov_base = &VAR_0;
 VAR_3.uio_resid = VAR_4.iov_len = sizeof(VAR_0);
 VAR_3.uio_iov = &VAR_4;
 VAR_3.uio_iovcnt = 1;
 FUNC_0(VAR_1);
 VAR_2 = FUNC_2(VAR_1, &VAR_3);
 FUNC_1();
 return (VAR_2);
}
