
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pool; int ref_count; } ;
typedef TYPE_1__ connection_t ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(connection_t *VAR_0)
{

  if (FUNC_0(&VAR_0->ref_count) == 0)
    FUNC_1(VAR_0->pool);
}
