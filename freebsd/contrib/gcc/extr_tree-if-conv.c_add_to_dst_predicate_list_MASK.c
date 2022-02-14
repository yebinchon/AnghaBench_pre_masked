
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct loop {int dummy; } ;
typedef TYPE_1__* edge ;
typedef int block_stmt_iterator ;
struct TYPE_3__ {int dest; scalar_t__ aux; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,scalar_t__) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct loop*,int ) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__*,int,int *) ;
 scalar_t__ FUNC_6 (int ,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;

__attribute__((used)) static tree
FUNC_8 (struct loop * VAR_5, edge VAR_6,
      tree VAR_7, tree VAR_8,
      block_stmt_iterator *VAR_9)
{
  tree VAR_10 = VAR_1;

  if (!FUNC_4 (VAR_5, VAR_6->dest))
    return VAR_1;

  if (VAR_7 == VAR_3 || !VAR_7)
    VAR_10 = FUNC_7 (VAR_8);
  else
    {
      tree VAR_11;
      tree VAR_12 = VAR_1;
      tree VAR_13 = VAR_1;
      tree VAR_14 = VAR_1;
      VAR_7 = FUNC_5 (FUNC_7 (VAR_7),
     &VAR_13, 1, ((void*)0));
      if (VAR_13)
        FUNC_2 (VAR_9, VAR_13, VAR_0);

      VAR_8 = FUNC_5 (FUNC_7 (VAR_8),
       &VAR_14, 1, ((void*)0));
      if (VAR_14)
        FUNC_2 (VAR_9, VAR_14, VAR_0);




      VAR_6->aux = VAR_8;


      VAR_11 = FUNC_3 (VAR_2, VAR_4,
      FUNC_7 (VAR_7), VAR_8);
      VAR_12 = FUNC_6 (VAR_4, VAR_11);
      FUNC_2 (VAR_9, VAR_12, VAR_0);
      VAR_10 = FUNC_0 (VAR_12, 0);
    }
  FUNC_1 (VAR_6->dest, VAR_10);
  return VAR_10;
}
