
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct loop {int dummy; } ;
typedef TYPE_1__* edge ;
struct TYPE_6__ {int src; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_1__**) ;
 TYPE_1__** FUNC_2 (struct loop*,unsigned int*) ;
 int FUNC_3 (struct loop*,int ) ;
 scalar_t__ FUNC_4 (struct loop*,TYPE_1__*) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;

tree
FUNC_6 (struct loop *VAR_2, edge *VAR_3)
{
  unsigned VAR_4, VAR_5;
  edge *VAR_6 = FUNC_2 (VAR_2, &VAR_4);
  edge VAR_7;
  tree VAR_8 = VAR_0, VAR_9;

  *VAR_3 = ((void*)0);
  for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
    {
      VAR_7 = VAR_6[VAR_5];
      if (!FUNC_3 (VAR_2, VAR_7->src))
 continue;

      VAR_9 = FUNC_4 (VAR_2, VAR_7);
      if (FUNC_0 (VAR_9))
 continue;

      if (VAR_8
   && !FUNC_5 (VAR_9, VAR_8))
 continue;

      VAR_8 = VAR_9;
      *VAR_3 = VAR_7;
    }
  FUNC_1 (VAR_6);

  return VAR_8 ? VAR_8 : VAR_1;
}
