
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_6__ {int spa_guid; int spa_vdevs; int * spa_name; } ;
typedef TYPE_1__ spa_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;
 TYPE_1__* FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_0 ;
 int * FUNC_4 (char const*) ;
 int VAR_1 ;

__attribute__((used)) static spa_t *
FUNC_5(uint64_t VAR_2, const char *VAR_3)
{
 spa_t *VAR_4;

 if ((VAR_4 = FUNC_2(1, sizeof(spa_t))) == ((void*)0))
  return (((void*)0));
 if ((VAR_4->spa_name = FUNC_4(VAR_3)) == ((void*)0)) {
  FUNC_3(VAR_4);
  return (((void*)0));
 }
 FUNC_0(&VAR_4->spa_vdevs);
 VAR_4->spa_guid = VAR_2;
 FUNC_1(&VAR_1, VAR_4, VAR_0);

 return (VAR_4);
}
