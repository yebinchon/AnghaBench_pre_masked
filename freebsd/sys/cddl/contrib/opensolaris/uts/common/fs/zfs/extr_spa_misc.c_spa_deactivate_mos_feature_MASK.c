
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int spa_root_vdev; int spa_label_features; } ;
typedef TYPE_1__ spa_t ;


 scalar_t__ FUNC_0 (int ,char const*) ;
 int FUNC_1 (int ) ;

void
FUNC_2(spa_t *VAR_0, const char *VAR_1)
{
 if (FUNC_0(VAR_0->spa_label_features, VAR_1) == 0)
  FUNC_1(VAR_0->spa_root_vdev);
}
