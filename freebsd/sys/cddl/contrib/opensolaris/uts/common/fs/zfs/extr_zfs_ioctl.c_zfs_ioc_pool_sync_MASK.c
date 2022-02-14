
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int spa_root_vdev; } ;
typedef TYPE_1__ spa_t ;
typedef int nvlist_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (char const*,TYPE_1__**,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(const char *VAR_3, nvlist_t *VAR_4, nvlist_t *VAR_5)
{
 int VAR_6;
 boolean_t VAR_7;
 spa_t *VAR_8;

 if ((VAR_6 = FUNC_5(VAR_3, &VAR_8, VAR_0)) != 0)
  return (VAR_6);

 VAR_7 = FUNC_0(VAR_4, "force");
 if (VAR_7) {
  FUNC_2(VAR_8, VAR_2, VAR_0, VAR_1);
  FUNC_7(VAR_8->spa_root_vdev);
  FUNC_3(VAR_8, VAR_2, VAR_0);
 }
 FUNC_6(FUNC_4(VAR_8), 0);

 FUNC_1(VAR_8, VAR_0);

 return (VAR_6);
}
