
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct occurrence {int bb_has_division; int num_divisions; } ;
typedef TYPE_1__* basic_block ;
struct TYPE_4__ {scalar_t__ aux; } ;


 int VAR_0 ;
 int FUNC_0 (struct occurrence*,int ,int *) ;
 int VAR_1 ;
 struct occurrence* FUNC_1 (TYPE_1__*,int *) ;

__attribute__((used)) static inline void
FUNC_2 (basic_block VAR_2)
{
  struct occurrence *VAR_3;

  VAR_3 = (struct occurrence *) VAR_2->aux;
  if (!VAR_3)
    {
      VAR_3 = FUNC_1 (VAR_2, ((void*)0));
      FUNC_0 (VAR_3, VAR_0, &VAR_1);
    }

  VAR_3->bb_has_division = 1;
  VAR_3->num_divisions++;
}
