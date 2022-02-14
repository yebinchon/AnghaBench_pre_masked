
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int splay_tree ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int ,int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int VAR_1 ;
 int FUNC_11 (int ) ;
 int VAR_2 ;
 int FUNC_12 (int ,char*,int ) ;

__attribute__((used)) static bool
FUNC_13 (tree VAR_3, tree VAR_4, splay_tree VAR_5)
{
  tree VAR_6;
  tree VAR_7 = FUNC_1 (VAR_3);
  bool VAR_8 = 0;


  FUNC_5 (FUNC_7 (VAR_7));
  VAR_6 = FUNC_11 (FUNC_2 (VAR_7));

  if (!FUNC_6 (FUNC_0 (VAR_3)))
    {
      if (FUNC_3 (2))
 FUNC_9
   (VAR_3, FUNC_10 (VAR_1, FUNC_0 (VAR_3)));
      else
 FUNC_12 (VAR_0,
   "offset of empty base %qT may not be ABI-compliant and may"
   "change in a future version of GCC",
   FUNC_1 (VAR_3));
    }



  if (FUNC_8 (VAR_3,
    FUNC_0 (VAR_3),
    VAR_5,
                 0))
    {


      VAR_8 = 1;
      FUNC_9 (VAR_3, FUNC_4 (VAR_2, VAR_4));
      while (1)
 {
   if (!FUNC_8 (VAR_3,
      FUNC_0 (VAR_3),
      VAR_5,
                   0))

     break;


   FUNC_9 (VAR_3, VAR_6);
 }
    }
  return VAR_8;
}
