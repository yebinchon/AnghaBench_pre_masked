
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 scalar_t__ FUNC_0 (int ,unsigned int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;

tree
FUNC_2 (tree VAR_2, tree (*VAR_3) (tree, void *),
       tree (*VAR_4) (tree, void *), void *VAR_5)
{
  tree VAR_6;
  unsigned VAR_7;
  tree VAR_8;


  if (VAR_3)
    {
      VAR_6 = VAR_3 (VAR_2, VAR_5);
      if (VAR_6)
 {
   if (VAR_6 == VAR_1)
     goto skip_bases;
   return VAR_6;
 }
    }


  for (VAR_7 = 0; FUNC_0 (VAR_2, VAR_7, VAR_8); VAR_7++)
    {
      VAR_6 = FUNC_2 (VAR_8, VAR_3, VAR_4, VAR_5);
      if (VAR_6)
 return VAR_6;
    }

 skip_bases:

  if (VAR_4)
    {
      VAR_6 = VAR_4 (VAR_2, VAR_5);
      FUNC_1 (VAR_6 != VAR_1);
      return VAR_6;
    }

  return VAR_0;
}
