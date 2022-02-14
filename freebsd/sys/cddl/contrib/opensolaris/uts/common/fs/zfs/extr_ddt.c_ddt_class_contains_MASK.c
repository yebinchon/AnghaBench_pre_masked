
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ** spa_ddt; } ;
typedef TYPE_1__ spa_t ;
typedef enum ddt_type { ____Placeholder_ddt_type } ddt_type ;
typedef enum ddt_class { ____Placeholder_ddt_class } ddt_class ;
typedef int ddt_t ;
struct TYPE_6__ {int dde_key; } ;
typedef TYPE_2__ ddt_entry_t ;
typedef int boolean_t ;
typedef int blkptr_t ;


 size_t FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int const*) ;
 scalar_t__ FUNC_3 (int *,int,int,TYPE_2__*) ;

boolean_t
FUNC_4(spa_t *VAR_4, enum ddt_class VAR_5, const blkptr_t *VAR_6)
{
 ddt_t *VAR_7;
 ddt_entry_t VAR_8;

 if (!FUNC_1(VAR_6))
  return (VAR_0);

 if (VAR_5 == VAR_2)
  return (VAR_1);

 VAR_7 = VAR_4->spa_ddt[FUNC_0(VAR_6)];

 FUNC_2(&VAR_8.dde_key, VAR_6);

 for (enum ddt_type VAR_9 = 0; VAR_9 < VAR_3; VAR_9++)
  for (enum ddt_class VAR_10 = 0; VAR_10 <= VAR_5; VAR_10++)
   if (FUNC_3(VAR_7, VAR_9, VAR_10, &VAR_8) == 0)
    return (VAR_1);

 return (VAR_0);
}
