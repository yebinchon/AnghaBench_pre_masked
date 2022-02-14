
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef enum gimplify_status { ____Placeholder_gimplify_status } gimplify_status ;
typedef int HOST_WIDE_INT ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ) ;
 unsigned int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (unsigned int) ;
 int FUNC_11 (int *,int ,int ,int) ;
 int FUNC_12 (int *,int *,int ,int ) ;
 int FUNC_13 (int *,int *,int ,int ,int) ;
 int FUNC_14 (int ,int) ;

__attribute__((used)) static enum gimplify_status
FUNC_15 (tree *VAR_3, tree *VAR_4)
{
  tree VAR_5 = FUNC_5 (*VAR_3, 0);
  tree VAR_6 = FUNC_5 (*VAR_3, 1);
  tree VAR_7 = FUNC_8 (FUNC_6 (FUNC_6 (VAR_5)));
  HOST_WIDE_INT VAR_8;


  VAR_8 = FUNC_14 (FUNC_9 (VAR_7), 1);
  VAR_8 = FUNC_10 (VAR_8);
  if (VAR_8 >= 0 && VAR_8 <= 4)
    {
      enum gimplify_status VAR_9;
      unsigned int VAR_10;

      if (FUNC_1 (FUNC_5 (VAR_5, 0)))
 VAR_10 = FUNC_0 (FUNC_5 (VAR_5, 0));
      else if (FUNC_4 (FUNC_5 (VAR_5, 0)) == VAR_0
        && FUNC_4 (FUNC_5 (FUNC_5 (VAR_5, 0), 1))
    == VAR_1)
 VAR_10 = FUNC_0 (FUNC_5 (FUNC_5 (VAR_5, 0), 1));
      else
 VAR_10 = FUNC_7 (VAR_7);


      if (FUNC_10 (VAR_10) >= VAR_8)
 {

   if (FUNC_2 (VAR_7) || FUNC_3 (VAR_7))
     {
       VAR_9 = FUNC_11 (VAR_3, VAR_5, VAR_6, VAR_8);
       if (VAR_9 != VAR_2)
  return VAR_9;
     }



   VAR_9 = FUNC_13 (VAR_3, VAR_4, VAR_5, VAR_6, VAR_8);
   if (VAR_9 != VAR_2)
     return VAR_9;
 }
    }


  return FUNC_12 (VAR_3, VAR_4, VAR_5, VAR_6);
}
