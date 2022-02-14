
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * tree ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int *) ;

__attribute__((used)) static void
FUNC_10 (tree VAR_4, tree VAR_5)
{
  tree VAR_6 = ((void*)0), VAR_7 = ((void*)0);

  if (FUNC_3 (VAR_4) == VAR_1)
    VAR_6 = FUNC_2 (VAR_4);
  if (FUNC_3 (VAR_5) == VAR_1)
    VAR_7 = FUNC_2 (VAR_5);





  if (FUNC_4 (VAR_5))
    ;
  else if (FUNC_4 (VAR_4) || (FUNC_8 (VAR_4) <= FUNC_8 (VAR_5)))
    VAR_6 = VAR_4, VAR_4 = VAR_5, VAR_5 = VAR_6, VAR_6 = VAR_7;
  else if (VAR_6 && FUNC_4 (VAR_6))
    VAR_4 = VAR_5, VAR_5 = VAR_6, VAR_6 = VAR_7;
  else if (VAR_7 && FUNC_3 (VAR_7) != VAR_2)
    VAR_5 = VAR_7;


  if (FUNC_3 (VAR_4) != VAR_1)
    return;





  if (FUNC_0 (FUNC_7 (FUNC_6 (VAR_4)))
      && (FUNC_3 (VAR_5) != VAR_0
   || FUNC_1 (VAR_3, FUNC_5 (VAR_5))))
    return;

  FUNC_9 (VAR_4, VAR_5, VAR_6);
}
