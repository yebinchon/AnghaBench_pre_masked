
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ e_FmMacExceptions ;
struct TYPE_2__ {scalar_t__ num; char const* str; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static const char *
FUNC_0(e_FmMacExceptions VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_1[VAR_3].num != VAR_2 &&
     VAR_1[VAR_3].num != VAR_0; ++VAR_3)
  ;

 if (VAR_1[VAR_3].num == VAR_0)
  return ("<Unknown Exception>");

 return (VAR_1[VAR_3].str);
}
