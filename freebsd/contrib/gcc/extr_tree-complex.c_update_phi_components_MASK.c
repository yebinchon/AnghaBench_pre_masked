
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * tree ;
typedef int basic_block ;
typedef int * SSA_NAME_DEF_STMT ;


 int * FUNC_0 (int *,unsigned int) ;
 int * FUNC_1 (int *) ;
 unsigned int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned int,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_5 (int *) ;
 int * FUNC_6 (int *,int ) ;
 int * FUNC_7 (int *,int *,int,int) ;
 int * FUNC_8 (int ,int) ;
 scalar_t__ FUNC_9 (int ) ;
 int * FUNC_10 (int ) ;

__attribute__((used)) static void
FUNC_11 (basic_block VAR_1)
{
  tree VAR_2;

  for (VAR_2 = FUNC_10 (VAR_1); VAR_2; VAR_2 = FUNC_1 (VAR_2))
    if (FUNC_9 (FUNC_3 (VAR_2)))
      {
 tree VAR_3, VAR_4, VAR_5 = ((void*)0), VAR_6 = ((void*)0);
 unsigned int VAR_7, VAR_8;

 VAR_3 = FUNC_8 (FUNC_3 (VAR_2), 0);
 if (FUNC_5 (VAR_3) == VAR_0)
   {
     VAR_5 = FUNC_6 (VAR_3, VAR_1);
     SSA_NAME_DEF_STMT (VAR_9) = VAR_5;
   }

 VAR_4 = FUNC_8 (FUNC_3 (VAR_2), 1);
 if (FUNC_5 (VAR_4) == VAR_0)
   {
     VAR_6 = FUNC_6 (VAR_4, VAR_1);
     SSA_NAME_DEF_STMT (VAR_10) = VAR_6;
   }

 for (VAR_7 = 0, VAR_8 = FUNC_2 (VAR_2); VAR_7 < VAR_8; ++VAR_7)
   {
     tree VAR_11, VAR_12 = FUNC_0 (VAR_2, VAR_7);
     if (VAR_5)
       {
  VAR_11 = FUNC_7 (((void*)0), VAR_12, 0, 0);
  FUNC_4 (VAR_5, VAR_7, VAR_11);
       }
     if (VAR_6)
       {
  VAR_11 = FUNC_7 (((void*)0), VAR_12, 1, 0);
  FUNC_4 (VAR_6, VAR_7, VAR_11);
       }
   }
      }
}
