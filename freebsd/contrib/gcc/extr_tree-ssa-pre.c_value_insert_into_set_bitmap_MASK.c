
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* value_set_t ;
typedef int tree ;
struct TYPE_3__ {int * values; int indexed; } ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;

__attribute__((used)) static inline void
FUNC_4 (value_set_t VAR_1, tree VAR_2)
{
  FUNC_3 (VAR_1->indexed);

  if (VAR_1->values == ((void*)0))
    VAR_1->values = FUNC_0 (&VAR_0);

  FUNC_2 (VAR_1->values, FUNC_1 (VAR_2));
}
