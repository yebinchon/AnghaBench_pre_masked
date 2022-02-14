
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int spa_import_flags; scalar_t__ spa_mode; } ;
typedef TYPE_1__ spa_t ;
typedef int boolean_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

boolean_t
FUNC_0(spa_t *VAR_2)
{
 return ((VAR_2->spa_import_flags & VAR_1) &&
     VAR_2->spa_mode == VAR_0);
}
