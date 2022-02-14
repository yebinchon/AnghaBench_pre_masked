
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct __suio {size_t uio_resid; int uio_iovcnt; struct __siov* uio_iov; } ;
struct __siov {size_t iov_len; void* iov_base; } ;
struct TYPE_6__ {int _flags; } ;
typedef TYPE_1__ FILE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,int) ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (TYPE_1__*,struct __suio*) ;
 int VAR_3 ;

size_t
FUNC_4(const void * __restrict VAR_4, size_t VAR_5, size_t VAR_6, FILE * __restrict VAR_7)
{
 size_t VAR_8;
 struct __suio VAR_9;
 struct __siov VAR_10;




 if ((VAR_6 == 0) || (VAR_5 == 0))
  return (0);







 if (((VAR_6 | VAR_5) > 0xFFFF) &&
     (VAR_6 > VAR_1 / VAR_5)) {
  VAR_3 = VAR_0;
  VAR_7->_flags |= VAR_2;
  return (0);
 }

 VAR_8 = VAR_6 * VAR_5;

 VAR_10.iov_base = (void *)VAR_4;
 VAR_9.uio_resid = VAR_10.iov_len = VAR_8;
 VAR_9.uio_iov = &VAR_10;
 VAR_9.uio_iovcnt = 1;

 FUNC_0(VAR_7);
 FUNC_2(VAR_7, -1);





 if (FUNC_3(VAR_7, &VAR_9) != 0)
     VAR_6 = (VAR_8 - VAR_9.uio_resid) / VAR_5;
 FUNC_1();
 return (VAR_6);
}
