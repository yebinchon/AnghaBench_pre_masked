
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsubst_flags_t ;
typedef scalar_t__ tree ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_4 (int ,scalar_t__,int ,scalar_t__) ;

__attribute__((used)) static tree
FUNC_5 (tree VAR_2,
    tree VAR_3,
    tsubst_flags_t VAR_4,
    tree VAR_5)
{
  tree VAR_6;
  tree VAR_7;

  VAR_6 = FUNC_2 (VAR_2);
  VAR_7 = VAR_0;
  if (VAR_6)
    {
      if (! FUNC_1 (VAR_6))
 VAR_7 = VAR_6;
      else
 while (VAR_6)
   {
     tree VAR_8;
     VAR_8 = FUNC_4 (FUNC_1 (VAR_6), VAR_3, VAR_4, VAR_5);
     if (VAR_8 == VAR_1)
       return VAR_8;
     VAR_7 = FUNC_3 (VAR_7, VAR_8, VAR_4);
     VAR_6 = FUNC_0 (VAR_6);
   }
    }
  return VAR_7;
}
