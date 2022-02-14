
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (int ,int ,scalar_t__,int) ;
 int VAR_2 ;

tree
FUNC_4 (tree VAR_3)
{
  tree VAR_4, VAR_5;

  ++VAR_2;

  VAR_5 = VAR_3;
  for (VAR_4 = FUNC_1 (VAR_3); VAR_4; VAR_4 = FUNC_1 (VAR_4))
    {
      int VAR_6 = 0;

      if (FUNC_3 (FUNC_2 (VAR_5),
   FUNC_0 (FUNC_2 (VAR_4)),
   VAR_0, 0))
 VAR_6--;

      if (FUNC_3 (FUNC_2 (VAR_4),
   FUNC_0 (FUNC_2 (VAR_5)),
   VAR_0, 0))
 VAR_6++;

      if (VAR_6 == -1)
 VAR_5 = VAR_4;
      else if (!VAR_6)
 {


   VAR_4 = FUNC_1 (VAR_4);
   VAR_5 = VAR_4;
   if (!VAR_4)
     break;
 }
    }

  if (VAR_5)


    for (VAR_4 = VAR_3; VAR_4 != VAR_5; VAR_4 = FUNC_1 (VAR_4))
      if (FUNC_3 (FUNC_2 (VAR_5),
   FUNC_0 (FUNC_2 (VAR_4)),
   VAR_0, 0)
   || !FUNC_3 (FUNC_2 (VAR_4),
       FUNC_0 (FUNC_2 (VAR_5)),
       VAR_0, 0))
 {
   VAR_5 = VAR_0;
   break;
 }

  VAR_2--;

  if (!VAR_5)
    return VAR_1;

  return VAR_5;
}
