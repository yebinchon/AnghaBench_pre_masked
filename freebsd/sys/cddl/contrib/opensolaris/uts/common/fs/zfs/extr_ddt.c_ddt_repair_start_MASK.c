
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef enum ddt_type { ____Placeholder_ddt_type } ddt_type ;
typedef enum ddt_class { ____Placeholder_ddt_class } ddt_class ;
typedef int ddt_t ;
typedef int ddt_key_t ;
struct TYPE_5__ {int dde_phys; } ;
typedef TYPE_1__ ddt_entry_t ;
typedef int blkptr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *,int const*) ;
 scalar_t__ FUNC_3 (int *,int,int,TYPE_1__*) ;

ddt_entry_t *
FUNC_4(ddt_t *VAR_3, const blkptr_t *VAR_4)
{
 ddt_key_t VAR_5;
 ddt_entry_t *VAR_6;

 FUNC_2(&VAR_5, VAR_4);

 VAR_6 = FUNC_1(&VAR_5);

 for (enum ddt_type VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  for (enum ddt_class VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {





   if (VAR_8 != VAR_1 &&
       FUNC_3(VAR_3, VAR_7, VAR_8, VAR_6) == 0)
    return (VAR_6);
  }
 }

 FUNC_0(VAR_6->dde_phys, sizeof (VAR_6->dde_phys));

 return (VAR_6);
}
