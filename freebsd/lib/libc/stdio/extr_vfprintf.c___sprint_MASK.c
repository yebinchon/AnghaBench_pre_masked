
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __suio {scalar_t__ uio_resid; scalar_t__ uio_iovcnt; } ;
typedef int locale_t ;
typedef int FILE ;


 int FUNC_0 (int *,struct __suio*) ;

__attribute__((used)) static int
FUNC_1(FILE *VAR_0, struct __suio *VAR_1, locale_t VAR_2)
{
 int VAR_3;

 if (VAR_1->uio_resid == 0) {
  VAR_1->uio_iovcnt = 0;
  return (0);
 }
 VAR_3 = FUNC_0(VAR_0, VAR_1);
 VAR_1->uio_resid = 0;
 VAR_1->uio_iovcnt = 0;
 return (VAR_3);
}
