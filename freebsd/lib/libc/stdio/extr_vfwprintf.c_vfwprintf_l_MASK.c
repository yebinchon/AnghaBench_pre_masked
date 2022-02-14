
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int wchar_t ;
typedef int va_list ;
typedef int locale_t ;
struct TYPE_6__ {int _flags; scalar_t__ _file; } ;
typedef TYPE_1__ FILE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*,int ,int const*,int ) ;
 int FUNC_4 (TYPE_1__*,int ,int const*,int ) ;

int
FUNC_5(FILE * __restrict VAR_3, locale_t VAR_4,
  const wchar_t * __restrict VAR_5, va_list VAR_6)

{
 int VAR_7;
 FUNC_0(VAR_4);
 FUNC_1(VAR_3);

 if ((VAR_3->_flags & (VAR_0|VAR_2|VAR_1)) == (VAR_0|VAR_2) &&
     VAR_3->_file >= 0)
  VAR_7 = FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6);
 else
  VAR_7 = FUNC_4(VAR_3, VAR_4, VAR_5, VAR_6);
 FUNC_2();
 return (VAR_7);
}
