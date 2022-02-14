
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int conversion ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int * FUNC_5 (int ,int ,int *) ;
 int * FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_8 (int ,int ,int ,int,int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;

__attribute__((used)) static conversion *
FUNC_12 (tree VAR_4, tree VAR_5)
{
  tree VAR_6 = FUNC_9 (FUNC_2 (VAR_4));
  tree VAR_7 = FUNC_9 (FUNC_2 (VAR_5));
  conversion *VAR_8;
  bool VAR_9;







  if (FUNC_10 (VAR_5))
    {
      VAR_8 = FUNC_8 (FUNC_7 (VAR_7),
      VAR_6,
      VAR_4,
                   0,
      VAR_1);
      if (VAR_8)
 return VAR_8;
    }
  if (FUNC_0 (VAR_6) && FUNC_0 (VAR_7)
      && ((VAR_9 = FUNC_1 (VAR_7, VAR_6)) || FUNC_1 (VAR_6, VAR_7)))
    {
      if (VAR_9 && FUNC_4 (VAR_7, VAR_6))
 {
   VAR_8 = FUNC_6 (VAR_6, VAR_4);
   if (!FUNC_11 (FUNC_3 (VAR_6),
       FUNC_3 (VAR_7)))
     VAR_8 = FUNC_5 (VAR_2, VAR_7, VAR_8);
   else
     VAR_8 = FUNC_5 (VAR_3, VAR_7, VAR_8);
   return VAR_8;
 }
      else
 return ((void*)0);
    }
  else





    return FUNC_8 (VAR_7, VAR_6, VAR_4, 0,
    VAR_0);
}
