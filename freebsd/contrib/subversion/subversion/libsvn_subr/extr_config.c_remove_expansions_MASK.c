
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ x_values; int x_pool; } ;
typedef TYPE_1__ svn_config_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(svn_config_t *VAR_2)
{
  if (!VAR_2->x_values)
    return;

  FUNC_0(VAR_2, ((void*)0), VAR_2->x_pool, VAR_1);
  FUNC_1(VAR_2->x_pool);
  VAR_2->x_values = VAR_0;
}
