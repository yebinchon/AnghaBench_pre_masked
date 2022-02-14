
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsubst_flags_t ;
typedef scalar_t__ tree ;



 scalar_t__ VAR_0 ;

 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;

 scalar_t__ FUNC_7 (scalar_t__,int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__,int ,scalar_t__) ;
 scalar_t__ FUNC_10 (int ,scalar_t__,int ,scalar_t__) ;

__attribute__((used)) static tree
FUNC_11 (tree VAR_3,
    tree VAR_4,
    tsubst_flags_t VAR_5,
    tree VAR_6,
    int VAR_7)
{
  if (VAR_3 == VAR_0)
    return VAR_0;

  switch (FUNC_0 (VAR_3))
    {
    case 129:
      if (FUNC_3 (VAR_3))
 return FUNC_9 (FUNC_2 (VAR_3), VAR_4, VAR_5, VAR_6);


    case 130:
    case 128:
      if (FUNC_5 (VAR_3))
 {
   tree VAR_8;
   tree VAR_9;
   tree VAR_10;
   bool VAR_11;


   VAR_11 = VAR_2;
   VAR_2 = 0;



   VAR_9 = FUNC_1 (VAR_3);
   if (VAR_9)
     VAR_9 = FUNC_11 (VAR_9, VAR_4, VAR_5,
     VAR_6, 1);
   VAR_8 = FUNC_10 (FUNC_6 (VAR_3), VAR_4,
      VAR_5, VAR_6);
   if (VAR_8 == VAR_1)
     VAR_10 = VAR_1;
   else
     {
       VAR_10 = FUNC_8 (VAR_3, VAR_8, VAR_6, VAR_9,
      VAR_7, VAR_5);
       VAR_10 = FUNC_7 (VAR_10, FUNC_4 (VAR_3), VAR_5);
     }

   VAR_2 = VAR_11;

   return VAR_10;
 }
      else

 return VAR_3;

    default:
      return FUNC_9 (VAR_3, VAR_4, VAR_5, VAR_6);
    }
}
