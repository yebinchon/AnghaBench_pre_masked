
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int pretty_printer ;
typedef int block_stmt_iterator ;
typedef int basic_block ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,int,int) ;
 int FUNC_7 (int *,int ,int,int) ;
 int FUNC_8 (int *,int ,int,int,int) ;
 int FUNC_9 (int *,int ,int,int) ;
 int FUNC_10 (int *,int ,int,int) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void
FUNC_12 (pretty_printer *VAR_2, basic_block VAR_3,
        int VAR_4, int VAR_5)
{
  block_stmt_iterator VAR_6;
  tree VAR_7;
  int VAR_8 = VAR_4 - 2;

  if (VAR_8 < 0)
    VAR_8 = 0;

  FUNC_7 (VAR_2, VAR_3, VAR_4, VAR_5);

  FUNC_10 (VAR_2, VAR_3, VAR_4, VAR_5);

  for (VAR_6 = FUNC_4 (VAR_3); !FUNC_2 (VAR_6); FUNC_3 (&VAR_6))
    {
      int VAR_9;

      VAR_7 = FUNC_5 (VAR_6);

      VAR_9 = FUNC_1 (VAR_7) == VAR_0 ? VAR_8 : VAR_4;

      FUNC_0 (VAR_9);
      FUNC_8 (VAR_2, VAR_7, VAR_9, VAR_5, 1);
      FUNC_11 (VAR_2);
    }

  FUNC_9 (VAR_2, VAR_3, VAR_4, VAR_5);

  if (VAR_5 & VAR_1)
    FUNC_6 (VAR_2, VAR_3, VAR_4, VAR_5);
}
