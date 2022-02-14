
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree_stmt_iterator ;
typedef scalar_t__ tree ;
struct lower_data {scalar_t__ return_statements; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ FUNC_7 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,scalar_t__,int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_13 (tree_stmt_iterator *VAR_4, struct lower_data *VAR_5)
{
  tree VAR_6 = FUNC_12 (*VAR_4);
  tree VAR_7, VAR_8, VAR_9;


  VAR_7 = FUNC_4 (VAR_6, 0);
  if (VAR_7 && FUNC_3 (VAR_7) == VAR_1)
    VAR_7 = FUNC_4 (VAR_7, 1);


  for (VAR_8 = VAR_5->return_statements; VAR_8 ; VAR_8 = FUNC_2 (VAR_8))
    {
      tree VAR_10 = FUNC_4 (FUNC_6 (VAR_8), 0);
      if (VAR_10 && FUNC_3 (VAR_10) == VAR_1)
 VAR_10 = FUNC_4 (VAR_10, 1);

      if (VAR_7 == VAR_10)
 {
   VAR_9 = FUNC_5 (VAR_8);
   goto found;
 }
    }


  VAR_9 = FUNC_8 ();
  VAR_5->return_statements = FUNC_9 (VAR_9, VAR_6, VAR_5->return_statements);


 found:
  VAR_8 = FUNC_7 (VAR_0, VAR_3, VAR_9);
  FUNC_1 (VAR_8, FUNC_0 (VAR_6));
  FUNC_11 (VAR_4, VAR_8, VAR_2);
  FUNC_10 (VAR_4);
}
