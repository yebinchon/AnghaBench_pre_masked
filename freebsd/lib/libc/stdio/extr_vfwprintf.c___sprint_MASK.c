
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct __suio {scalar_t__ uio_resid; scalar_t__ uio_iovcnt; struct __siov* uio_iov; } ;
struct __siov {int iov_len; scalar_t__ iov_base; } ;
typedef int locale_t ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *,int ) ;

__attribute__((used)) static int
FUNC_1(FILE *VAR_1, struct __suio *VAR_2, locale_t VAR_3)
{
 struct __siov *VAR_4;
 wchar_t *VAR_5;
 int VAR_6, VAR_7;

 VAR_4 = VAR_2->uio_iov;
 for (; VAR_2->uio_resid != 0; VAR_2->uio_resid -= VAR_7, VAR_4++) {
  VAR_5 = (wchar_t *)VAR_4->iov_base;
  VAR_7 = VAR_4->iov_len;
  for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
   if (FUNC_0(VAR_5[VAR_6], VAR_1, VAR_3) == VAR_0)
    return (-1);
  }
 }
 VAR_2->uio_iovcnt = 0;
 return (0);
}
