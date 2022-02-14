
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct _xlocale {int dummy; } ;
typedef TYPE_2__* locale_t ;
struct TYPE_5__ {int destructor; } ;
struct TYPE_6__ {int monetary_locale_changed; int numeric_locale_changed; TYPE_1__ header; } ;


 TYPE_2__* FUNC_0 (int,int) ;
 int VAR_0 ;

__attribute__((used)) static locale_t
FUNC_1(void)
{
 locale_t VAR_1 = FUNC_0(sizeof(struct _xlocale), 1);

 VAR_1->header.destructor = VAR_0;
 VAR_1->monetary_locale_changed = 1;
 VAR_1->numeric_locale_changed = 1;
 return (VAR_1);
}
