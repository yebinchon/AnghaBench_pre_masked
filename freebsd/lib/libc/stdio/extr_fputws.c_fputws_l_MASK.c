
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int wchar_t ;
struct xlocale_ctype {size_t (* __wcsnrtombs ) (char*,int const**,int ,int,int *) ;} ;
struct __suio {int uio_iovcnt; size_t uio_resid; struct __siov* uio_iov; } ;
struct __siov {char* iov_base; size_t iov_len; } ;
typedef int locale_t ;
typedef int buf ;
struct TYPE_7__ {int _mbstate; } ;
typedef TYPE_1__ FILE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,int) ;
 int VAR_1 ;
 struct xlocale_ctype* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (TYPE_1__*,struct __suio*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 size_t FUNC_7 (char*,int const**,int ,int,int *) ;

int
FUNC_8(const wchar_t * __restrict VAR_2, FILE * __restrict VAR_3, locale_t VAR_4)
{
 size_t VAR_5;
 char VAR_6[VAR_0];
 struct __suio VAR_7;
 struct __siov VAR_8;
 const wchar_t *VAR_9;
 FUNC_0(VAR_4);
 struct xlocale_ctype *VAR_10 = FUNC_4(VAR_4);
 int VAR_11;

 VAR_11 = -1;
 FUNC_1(VAR_3);
 FUNC_3(VAR_3, 1);
 if (FUNC_6(VAR_3) != 0)
  goto end;
 VAR_7.uio_iov = &VAR_8;
 VAR_7.uio_iovcnt = 1;
 VAR_8.iov_base = VAR_6;
 VAR_9 = VAR_2;
 do {
  VAR_5 = VAR_10->__wcsnrtombs(VAR_6, &VAR_9, VAR_1, sizeof(VAR_6),
      &VAR_3->_mbstate);
  if (VAR_5 == (size_t)-1)
   goto end;
  VAR_7.uio_resid = VAR_8.iov_len = VAR_5;
  if (FUNC_5(VAR_3, &VAR_7) != 0)
   goto end;
 } while (VAR_9 != ((void*)0));
 VAR_11 = 0;
end:
 FUNC_2();
 return (VAR_11);
}
