
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ spa_config_source; int spa_trust_config; } ;
typedef TYPE_1__ spa_t ;
typedef scalar_t__ spa_import_type_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,scalar_t__) ;
 int FUNC_5 (TYPE_1__*,scalar_t__) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_7(spa_t *VAR_4, spa_import_type_t VAR_5)
{
 int VAR_6 = 0;

 FUNC_0(FUNC_1(&VAR_3));
 FUNC_0(VAR_4->spa_config_source != VAR_1);
 if (VAR_5 != VAR_2)
  VAR_4->spa_trust_config = VAR_0;




 VAR_6 = FUNC_4(VAR_4, VAR_5);
 if (VAR_6 != 0)
  return (VAR_6);
 VAR_6 = FUNC_3(VAR_4);
 if (VAR_6 != 0)
  return (VAR_6);
 if (VAR_5 != VAR_2) {
  VAR_6 = FUNC_6(VAR_4);
  if (VAR_6 != 0)
   return (VAR_6);
 }
 VAR_6 = FUNC_5(VAR_4, VAR_5);
 if (VAR_6 != 0)
  return (VAR_6);






 VAR_6 = FUNC_2(VAR_4);
 if (VAR_6 != 0)
  return (VAR_6);

 return (0);
}
