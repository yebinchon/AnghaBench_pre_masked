
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct loop {int dummy; } ;
struct ar_data {int* step; int* delta; int stmt; struct loop* loop; } ;
typedef int HOST_WIDE_INT ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int *,int ,struct ar_data*) ;
 int FUNC_6 (int) ;
 int VAR_2 ;
 int FUNC_7 (int ) ;

__attribute__((used)) static bool
FUNC_8 (struct loop *VAR_3, tree *VAR_4, tree *VAR_5,
      HOST_WIDE_INT *VAR_6, HOST_WIDE_INT *VAR_7,
      tree VAR_8)
{
  struct ar_data VAR_9;
  tree VAR_10;
  HOST_WIDE_INT VAR_11;
  tree VAR_12 = *VAR_4;

  *VAR_6 = 0;
  *VAR_7 = 0;


  if (FUNC_2 (VAR_12) == VAR_1
      && FUNC_1 (FUNC_4 (VAR_12, 1)))
    VAR_12 = FUNC_4 (VAR_12, 0);

  *VAR_4 = VAR_12;

  for (; FUNC_2 (VAR_12) == VAR_1; VAR_12 = FUNC_4 (VAR_12, 0))
    {
      VAR_10 = FUNC_0 (FUNC_4 (VAR_12, 1));
      VAR_11 = FUNC_3 (VAR_10);
      FUNC_6 (VAR_11 % VAR_0 == 0);

      *VAR_7 += VAR_11 / VAR_0;
    }

  *VAR_5 = FUNC_7 (VAR_12);
  VAR_9.loop = VAR_3;
  VAR_9.stmt = VAR_8;
  VAR_9.step = VAR_6;
  VAR_9.delta = VAR_7;
  return FUNC_5 (VAR_5, VAR_2, &VAR_9);
}
