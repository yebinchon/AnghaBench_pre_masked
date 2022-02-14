
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;




 int const VAR_0 ;






 int const FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int const VAR_1 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int const,int ,int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_13 (int ) ;

__attribute__((used)) static int
FUNC_14 (tree VAR_3, tree VAR_4, tree VAR_5)
{
  if (FUNC_12 (VAR_4, VAR_5, 0))
    return 1;

  if (FUNC_0 (VAR_3) != VAR_0)
    return 0;

  switch (FUNC_0 (VAR_4))
    {
    case 135:


      if (!FUNC_10 (VAR_5))
 return 0;


    case 131:
      return (FUNC_14 (VAR_3, FUNC_3 (VAR_4, 0), VAR_5)
       || FUNC_14 (VAR_3, FUNC_3 (VAR_4, 1), VAR_5));

    case 129:
    case 132:
      return (FUNC_14 (VAR_3, FUNC_3 (VAR_4, 0), VAR_5)
       && FUNC_14 (VAR_3, FUNC_3 (VAR_4, 1), VAR_5));

    case 133:
      if (FUNC_0 (FUNC_3 (VAR_4, 1)) == 134)
 {
   tree VAR_6, VAR_7;

   VAR_6 = FUNC_3 (VAR_4, 1);


   if (FUNC_6 (FUNC_5 (VAR_2))
       > FUNC_2 (VAR_6)
       && FUNC_1 (VAR_6) == 0
       && 0 != (VAR_7 = FUNC_9 (VAR_3,
       FUNC_8 (133,
             VAR_2,
             VAR_6, 0)))
       && ! FUNC_4 (VAR_7))
     return FUNC_14 (VAR_3, VAR_7, VAR_5);
 }
      return 0;

    case 130:

      if ((FUNC_0 (FUNC_5 (FUNC_3 (VAR_4, 0))) != VAR_0)
   || (FUNC_6 (VAR_3)
       < FUNC_6 (FUNC_5 (FUNC_3 (VAR_4, 0)))))
 return 0;



    case 128:
      return FUNC_14 (VAR_3, FUNC_3 (VAR_4, 0), VAR_5);

    case 134:
      if (FUNC_0 (VAR_5) != 134
   || (FUNC_7 (VAR_3)
       && (FUNC_13 (VAR_4) < 0
    || FUNC_13 (VAR_5) < 0)))
 return 0;
      return FUNC_11 (FUNC_8 (VAR_1,
      VAR_4, VAR_5, 0));

    default:
      return 0;
    }
}
