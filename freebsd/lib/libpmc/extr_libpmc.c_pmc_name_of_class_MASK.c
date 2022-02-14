
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum pmc_class { ____Placeholder_pmc_class } pmc_class ;
struct TYPE_3__ {int pm_class; char const* pm_name; } ;


 int VAR_0 ;
 size_t FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

const char *
FUNC_1(enum pmc_class VAR_3)
{
 size_t VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2); VAR_4++)
  if (VAR_3 == VAR_2[VAR_4].pm_class)
   return (VAR_2[VAR_4].pm_name);

 VAR_1 = VAR_0;
 return (((void*)0));
}
