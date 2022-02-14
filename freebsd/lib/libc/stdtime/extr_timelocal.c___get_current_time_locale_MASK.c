
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct lc_time_T {int dummy; } ;
struct xlocale_time {struct lc_time_T locale; } ;
typedef TYPE_1__* locale_t ;
struct TYPE_3__ {scalar_t__* components; scalar_t__ using_time_locale; } ;


 size_t VAR_0 ;
 int VAR_1 ;

struct lc_time_T *
FUNC_0(locale_t VAR_2)
{
 return (VAR_2->using_time_locale
  ? &((struct xlocale_time *)VAR_2->components[VAR_0])->locale
  : (struct lc_time_T *)&VAR_1);
}
