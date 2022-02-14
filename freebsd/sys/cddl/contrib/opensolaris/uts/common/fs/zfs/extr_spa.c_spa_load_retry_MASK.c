
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u_longlong_t ;
struct TYPE_10__ {scalar_t__ ub_txg; } ;
struct TYPE_11__ {int spa_mode; scalar_t__ spa_load_max_txg; TYPE_1__ spa_uberblock; } ;
typedef TYPE_2__ spa_t ;
typedef int spa_load_state_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int ,int ) ;
 int FUNC_4 (TYPE_2__*,char*,int ) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_6(spa_t *VAR_1, spa_load_state_t VAR_2)
{
 int VAR_3 = VAR_1->spa_mode;

 FUNC_5(VAR_1);
 FUNC_2(VAR_1);

 VAR_1->spa_load_max_txg = VAR_1->spa_uberblock.ub_txg - 1;

 FUNC_0(VAR_1, VAR_3);
 FUNC_1(VAR_1);

 FUNC_4(VAR_1, "spa_load_retry: rewind, max txg: %llu",
     (u_longlong_t)VAR_1->spa_load_max_txg);

 return (FUNC_3(VAR_1, VAR_2, VAR_0));
}
