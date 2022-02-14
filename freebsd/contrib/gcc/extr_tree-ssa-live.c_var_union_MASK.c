
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* var_map ;
typedef scalar_t__ tree ;
struct TYPE_5__ {int* compact_to_partition; int* partition_to_compact; int var_partition; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_1__*,scalar_t__,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int,int) ;
 int FUNC_8 (TYPE_1__*,scalar_t__) ;

int
FUNC_9 (var_map VAR_3, tree VAR_4, tree VAR_5)
{
  int VAR_6, VAR_7, VAR_8;
  tree VAR_9 = VAR_1;
  tree VAR_10 = VAR_1;





  if (FUNC_3 (VAR_4) == VAR_2)
    VAR_6 = FUNC_6 (VAR_3->var_partition, FUNC_2 (VAR_4));
  else
    {
      VAR_6 = FUNC_8 (VAR_3, VAR_4);
      if (VAR_3->compact_to_partition)
        VAR_6 = VAR_3->compact_to_partition[VAR_6];
      VAR_9 = VAR_4;
    }

  if (FUNC_3 (VAR_5) == VAR_2)
    VAR_7 = FUNC_6 (VAR_3->var_partition, FUNC_2 (VAR_5));
  else
    {
      VAR_7 = FUNC_8 (VAR_3, VAR_5);
      if (VAR_3->compact_to_partition)
        VAR_7 = VAR_3->compact_to_partition[VAR_7];



      if (!VAR_9 || (FUNC_1 (VAR_9) && FUNC_0 (VAR_9)))
        {
   VAR_10 = VAR_9;
   VAR_9 = VAR_5;
 }
      else
 VAR_10 = VAR_5;
    }

  FUNC_5 (VAR_6 != VAR_0);
  FUNC_5 (VAR_7 != VAR_0);

  if (VAR_6 == VAR_7)
    VAR_8 = VAR_6;
  else
    VAR_8 = FUNC_7 (VAR_3->var_partition, VAR_6, VAR_7);

  if (VAR_3->partition_to_compact)
    VAR_8 = VAR_3->partition_to_compact[VAR_8];

  if (VAR_9)
    FUNC_4 (VAR_3, VAR_9, VAR_8);
  if (VAR_10)
    FUNC_4 (VAR_3, VAR_10, VAR_8);

  return VAR_8;
}
