
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int block_stmt_iterator ;
typedef int basic_block ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (scalar_t__,int ,int ) ;
 int FUNC_10 () ;
 int VAR_2 ;

tree
FUNC_11 (basic_block VAR_3)
{
  block_stmt_iterator VAR_4, VAR_5 = FUNC_7 (VAR_3);
  bool VAR_6 = 1;
  tree VAR_7, VAR_8;

  for (VAR_4 = VAR_5; !FUNC_3 (VAR_4); VAR_6 = 0, FUNC_6 (&VAR_4))
    {
      VAR_8 = FUNC_8 (VAR_4);
      if (FUNC_2 (VAR_8) != VAR_1)
 break;
      VAR_7 = FUNC_1 (VAR_8);
      if (!FUNC_0 (VAR_7))
 {
   if (!VAR_6)
     FUNC_5 (&VAR_4, &VAR_5);
   return VAR_7;
 }
    }

  VAR_7 = FUNC_10 ();
  VAR_8 = FUNC_9 (VAR_1, VAR_2, VAR_7);
  FUNC_4 (&VAR_5, VAR_8, VAR_0);
  return VAR_7;
}
