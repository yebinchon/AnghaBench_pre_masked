
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct lc_numeric_T {int dummy; } ;
struct xlocale_numeric {struct lc_numeric_T locale; } ;
typedef TYPE_1__* locale_t ;
struct TYPE_3__ {scalar_t__* components; scalar_t__ using_numeric_locale; } ;


 size_t VAR_0 ;
 int VAR_1 ;

struct lc_numeric_T *
FUNC_0(locale_t VAR_2)
{
 return (VAR_2->using_numeric_locale
  ? &((struct xlocale_numeric *)VAR_2->components[VAR_0])->locale
  : (struct lc_numeric_T *)&VAR_1);
}
