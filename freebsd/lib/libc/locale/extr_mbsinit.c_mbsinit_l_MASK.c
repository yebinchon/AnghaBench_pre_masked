
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int mbstate_t ;
typedef int locale_t ;
struct TYPE_2__ {int (* __mbsinit ) (int const*) ;} ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int const*) ;

int
FUNC_3(const mbstate_t *VAR_0, locale_t VAR_1)
{
 FUNC_0(VAR_1);
 return (FUNC_1(VAR_1)->__mbsinit(VAR_0));
}
