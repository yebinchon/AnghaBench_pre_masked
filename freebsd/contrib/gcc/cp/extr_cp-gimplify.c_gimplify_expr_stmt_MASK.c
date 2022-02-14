
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * tree ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 () ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int *,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_8 (int ,char*) ;

__attribute__((used)) static void
FUNC_9 (tree *VAR_6)
{
  tree VAR_7 = FUNC_0 (*VAR_6);

  if (VAR_7 == VAR_2)
    VAR_7 = ((void*)0);







  if (VAR_7 && (VAR_3 || VAR_5))
    {
      if (!FUNC_3 (VAR_7))
 {
   if (!FUNC_1 (VAR_7)
       && !FUNC_5 (FUNC_4 (VAR_7))
       && !FUNC_2 (VAR_7))
     FUNC_8 (VAR_1, "statement with no effect");
 }
      else if (VAR_5)
 FUNC_7 (VAR_7, VAR_4);
    }

  if (VAR_7 == VAR_0)
    VAR_7 = FUNC_6 ();

  *VAR_6 = VAR_7;
}
