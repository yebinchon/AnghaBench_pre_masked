
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int *,scalar_t__,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (char*,int ) ;
 scalar_t__ FUNC_5 (scalar_t__,int) ;

__attribute__((used)) static void
FUNC_6 (tree VAR_1, tree VAR_2)
{
  tree VAR_3, VAR_4, VAR_5;
  int VAR_6;

  for (VAR_3 = VAR_1; VAR_3; VAR_3 = FUNC_0 (VAR_3))
    {
      if (FUNC_4 ("nonnull", FUNC_1 (VAR_3)))
 {
   VAR_4 = FUNC_2 (VAR_3);





   for (VAR_5 = VAR_2, VAR_6 = 1; ;
        VAR_6++, VAR_5 = FUNC_0 (VAR_5))
     {
       if (!VAR_5)
 break;
       if (!VAR_4 || FUNC_5 (VAR_4, VAR_6))
 FUNC_3 (VAR_0, ((void*)0),
       FUNC_2 (VAR_5),
       VAR_6);
     }
 }
    }
}
