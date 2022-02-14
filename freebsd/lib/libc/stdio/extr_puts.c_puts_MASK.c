
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __suio {size_t uio_resid; int uio_iovcnt; struct __siov* uio_iov; } ;
struct __siov {char* iov_base; size_t iov_len; } ;


 char VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ,struct __suio*) ;
 int VAR_1 ;
 size_t FUNC_4 (char const*) ;

int
FUNC_5(char const *VAR_2)
{
 int VAR_3;
 size_t VAR_4;
 struct __suio VAR_5;
 struct __siov VAR_6[2];

 VAR_6[0].iov_base = (void *)VAR_2;
 VAR_6[0].iov_len = VAR_4 = FUNC_4(VAR_2);
 VAR_6[1].iov_base = "\n";
 VAR_6[1].iov_len = 1;
 VAR_5.uio_resid = VAR_4 + 1;
 VAR_5.uio_iov = &VAR_6[0];
 VAR_5.uio_iovcnt = 2;
 FUNC_0(VAR_1);
 FUNC_2(VAR_1, -1);
 VAR_3 = FUNC_3(VAR_1, &VAR_5) ? VAR_0 : '\n';
 FUNC_1();
 return (VAR_3);
}
