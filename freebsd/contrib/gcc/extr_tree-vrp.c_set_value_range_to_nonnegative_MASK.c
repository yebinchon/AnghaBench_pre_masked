
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int equiv; } ;
typedef TYPE_1__ value_range_t ;
typedef int tree ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int ,int ,int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static inline void
FUNC_6 (value_range_t *VAR_1, tree VAR_2,
    bool VAR_3)
{
  tree VAR_4;

  if (VAR_3 && !FUNC_5 (VAR_2))
    {
      FUNC_4 (VAR_1);
      return;
    }

  VAR_4 = FUNC_1 (VAR_2, 0);
  FUNC_3 (VAR_1, VAR_0, VAR_4,
     (VAR_3
      ? FUNC_2 (VAR_2)
      : FUNC_0 (VAR_2)),
     VAR_1->equiv);
}
