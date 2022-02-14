
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int spa_t ;
typedef enum ddt_type { ____Placeholder_ddt_type } ddt_type ;
typedef enum ddt_class { ____Placeholder_ddt_class } ddt_class ;
typedef int ddt_t ;
struct TYPE_3__ {int dde_key; } ;
typedef TYPE_1__ ddt_entry_t ;
typedef int blkptr_t ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int const*) ;
 int FUNC_2 (int *,int,int,TYPE_1__*) ;
 int * FUNC_3 (int *,int const*) ;
 int VAR_2 ;

void
FUNC_4(spa_t *VAR_3, const blkptr_t *VAR_4)
{
 ddt_t *VAR_5;
 ddt_entry_t VAR_6;

 if (!VAR_2 || VAR_4 == ((void*)0) || !FUNC_0(VAR_4))
  return;






 VAR_5 = FUNC_3(VAR_3, VAR_4);
 FUNC_1(&VAR_6.dde_key, VAR_4);

 for (enum ddt_type VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  for (enum ddt_class VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
   FUNC_2(VAR_5, VAR_7, VAR_8, &VAR_6);
  }
 }
}
