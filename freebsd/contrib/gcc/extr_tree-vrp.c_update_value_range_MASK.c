
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * equiv; int max; int min; int type; } ;
typedef TYPE_1__ value_range_t ;
typedef int tree ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static inline bool
FUNC_5 (tree VAR_0, value_range_t *VAR_1)
{
  value_range_t *VAR_2;
  bool VAR_3;


  VAR_2 = FUNC_1 (VAR_0);
  VAR_3 = VAR_2->type != VAR_1->type
    || !FUNC_4 (VAR_2->min, VAR_1->min)
    || !FUNC_4 (VAR_2->max, VAR_1->max)
    || !FUNC_3 (VAR_2->equiv, VAR_1->equiv);

  if (VAR_3)
    FUNC_2 (VAR_2, VAR_1->type, VAR_1->min, VAR_1->max,
              VAR_1->equiv);

  FUNC_0 (VAR_1->equiv);
  VAR_1->equiv = ((void*)0);

  return VAR_3;
}
