
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_10 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ,int ,int ) ;
 scalar_t__ FUNC_13 (int ,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static bool
FUNC_14 (tree VAR_4)
{
  tree VAR_5;
  bool VAR_6 = 0;

  FUNC_11 (FUNC_1 (VAR_4));




  if (FUNC_9 (VAR_4))
    return 1;





  VAR_5 = FUNC_12 (FUNC_8 (VAR_4),
    FUNC_10 (VAR_0),
                0);


  if (!VAR_5 || VAR_5 == VAR_1)
    return 0;

  for (VAR_5 = FUNC_0 (VAR_5); VAR_5; VAR_5 = FUNC_3 (VAR_5))
    {
      tree VAR_7;
      tree VAR_8;


      VAR_7 = FUNC_2 (VAR_5);


      VAR_8 = FUNC_4 (FUNC_7 (FUNC_5 (VAR_7)));
      if (VAR_8 == VAR_3)
 return 0;



      if (FUNC_4 (VAR_8) == VAR_3
   && FUNC_13 (FUNC_6 (VAR_8), VAR_2))
 VAR_6 = 1;
    }

  return VAR_6;
}
