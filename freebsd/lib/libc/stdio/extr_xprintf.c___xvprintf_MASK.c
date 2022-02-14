
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int va_list ;
struct TYPE_5__ {int _flags; scalar_t__ _file; } ;
typedef TYPE_1__ FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,char const*,unsigned int,int ) ;
 int FUNC_1 (TYPE_1__*,char const*,unsigned int,int ) ;

int
FUNC_2(FILE *VAR_3, const char *VAR_4, va_list VAR_5)
{
 unsigned VAR_6;
 const char *VAR_7;


 for (VAR_7 = VAR_4, VAR_6 = 0; *VAR_7; VAR_7++) {
  if (*VAR_7 != '%')
   continue;
  VAR_6++;
  if (VAR_7[1] == '%')
   VAR_7++;
 }


 if ((VAR_3->_flags & (VAR_0|VAR_2|VAR_1)) == (VAR_0|VAR_2) &&
     VAR_3->_file >= 0)
  return (FUNC_1(VAR_3, VAR_4, VAR_6, VAR_5));
 else
  return (FUNC_0(VAR_3, VAR_4, VAR_6, VAR_5));
}
