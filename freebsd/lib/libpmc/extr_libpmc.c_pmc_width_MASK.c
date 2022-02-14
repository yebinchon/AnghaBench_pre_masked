
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int pmc_id_t ;
typedef enum pmc_class { ____Placeholder_pmc_class } pmc_class ;
struct TYPE_4__ {unsigned int pm_nclass; TYPE_1__* pm_classes; } ;
struct TYPE_3__ {int pm_class; int pm_width; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;

int
FUNC_1(pmc_id_t VAR_3, uint32_t *VAR_4)
{
 unsigned int VAR_5;
 enum pmc_class VAR_6;

 VAR_6 = FUNC_0(VAR_3);
 for (VAR_5 = 0; VAR_5 < VAR_1.pm_nclass; VAR_5++)
  if (VAR_1.pm_classes[VAR_5].pm_class == VAR_6) {
   *VAR_4 = VAR_1.pm_classes[VAR_5].pm_width;
   return (0);
  }
 VAR_2 = VAR_0;
 return (-1);
}
