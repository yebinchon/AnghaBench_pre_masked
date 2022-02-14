
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* locale_t ;
struct TYPE_6__ {TYPE_1__** components; } ;
struct TYPE_5__ {char const* locale; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;

const char *FUNC_2(int VAR_1, locale_t VAR_2)
{
 int VAR_3 = FUNC_1(VAR_1) - 1;
 FUNC_0(VAR_2);
 if (VAR_3 >= VAR_0)
  return (((void*)0));
 if (VAR_2->components[VAR_3])
  return (VAR_2->components[VAR_3]->locale);
 return ("C");
}
