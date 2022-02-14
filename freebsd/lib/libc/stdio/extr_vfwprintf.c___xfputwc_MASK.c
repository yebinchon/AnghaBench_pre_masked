
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int wint_t ;
typedef scalar_t__ wchar_t ;
struct __suio {size_t uio_resid; int uio_iovcnt; struct __siov* uio_iov; } ;
struct __siov {char* iov_base; size_t iov_len; } ;
typedef int mbstate_t ;
typedef int locale_t ;
struct TYPE_5__ {int _flags; } ;
typedef TYPE_1__ FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__,TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,struct __suio*) ;
 int VAR_5 ;
 size_t FUNC_2 (char*,scalar_t__,int *) ;

__attribute__((used)) static wint_t
FUNC_3(wchar_t VAR_6, FILE *VAR_7, locale_t VAR_8)
{
 mbstate_t VAR_9;
 char VAR_10[VAR_1];
 struct __suio VAR_11;
 struct __siov VAR_12;
 size_t VAR_13;

 if ((VAR_7->_flags & VAR_4) == 0)
  return (FUNC_0(VAR_6, VAR_7, VAR_8));

 VAR_9 = VAR_5;
 if ((VAR_13 = FUNC_2(VAR_10, VAR_6, &VAR_9)) == (size_t)-1) {
  VAR_7->_flags |= VAR_3;
  return (VAR_2);
 }
 VAR_11.uio_iov = &VAR_12;
 VAR_11.uio_resid = VAR_13;
 VAR_11.uio_iovcnt = 1;
 VAR_12.iov_base = VAR_10;
 VAR_12.iov_len = VAR_13;
 return (FUNC_1(VAR_7, &VAR_11) != VAR_0 ? (wint_t)VAR_6 : VAR_2);
}
