
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_7 (scalar_t__,int ,scalar_t__) ;

__attribute__((used)) static tree
FUNC_8 (tree VAR_3, tree VAR_4, int *VAR_5)
{
  tree VAR_6;

  *VAR_5 = 0;


  if (FUNC_4 (VAR_3) == VAR_2)
    *VAR_5 = 1;

  for (VAR_6 = FUNC_6 (VAR_3); VAR_6; VAR_6 = FUNC_3 (VAR_6))
    {

      if (FUNC_4 (VAR_6) != VAR_0 || FUNC_1 (VAR_6))
 continue;


      if (FUNC_4 (FUNC_5 (VAR_6)) == VAR_2)
 *VAR_5 = 1;




      if (FUNC_0 (FUNC_5 (VAR_6)))
 {


   VAR_4 = FUNC_7 (VAR_6, VAR_1, VAR_4);

   VAR_4 = FUNC_8 (FUNC_5 (VAR_6), VAR_4,
       VAR_5);
 }

      else if (FUNC_2 (VAR_6))
 VAR_4 = FUNC_7 (VAR_6, VAR_1, VAR_4);
    }

  return VAR_4;
}
