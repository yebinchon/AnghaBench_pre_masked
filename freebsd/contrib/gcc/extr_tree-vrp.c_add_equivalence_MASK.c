
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ equiv; } ;
typedef TYPE_1__ value_range_t ;
typedef int tree ;
typedef int bitmap ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,unsigned int) ;
 TYPE_1__** VAR_0 ;

__attribute__((used)) static void
FUNC_3 (bitmap VAR_1, tree VAR_2)
{
  unsigned VAR_3 = FUNC_0 (VAR_2);
  value_range_t *VAR_4 = VAR_0[VAR_3];

  FUNC_2 (VAR_1, VAR_3);
  if (VAR_4 && VAR_4->equiv)
    FUNC_1 (VAR_1, VAR_4->equiv);
}
