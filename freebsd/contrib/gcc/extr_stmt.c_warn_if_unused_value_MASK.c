
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int location_t ;



 int FUNC_0 (int ) ;



 int FUNC_1 (int ) ;

 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;







 int FUNC_5 (int ) ;
 int VAR_0 ;


 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ) ;




 scalar_t__ FUNC_15 (int ) ;

 int FUNC_16 (int ,char*,int *) ;

int
FUNC_17 (tree VAR_1, location_t VAR_2)
{
 restart:
  if (FUNC_14 (VAR_1) || FUNC_9 (VAR_1))
    return 0;




  if (FUNC_15 (FUNC_13 (VAR_1)))
    return 0;

  if (FUNC_3 (VAR_1))
    VAR_2 = FUNC_4 (VAR_1);

  switch (FUNC_6 (VAR_1))
    {
    case 135:
    case 137:
    case 136:
    case 138:
    case 139:
    case 140:
    case 133:
    case 145:
    case 130:
    case 128:
    case 142:
    case 129:
      return 0;

    case 146:

      VAR_1 = FUNC_0 (VAR_1);
      goto restart;

    case 134:
      VAR_1 = FUNC_10 (VAR_1, 0);
      goto restart;

    case 131:
    case 132:

      VAR_1 = FUNC_10 (VAR_1, 1);
      goto restart;

    case 144:
      if (FUNC_17 (FUNC_10 (VAR_1, 0), VAR_2))
 return 1;

      if (FUNC_8 (FUNC_10 (VAR_1, 1)))
 return 0;
      VAR_1 = FUNC_10 (VAR_1, 1);
      goto restart;

    case 143:


      if (FUNC_11 (VAR_1))
 return 0;
      goto warn;

    case 141:


      if (FUNC_6 (FUNC_13 (FUNC_10 (VAR_1, 0))) == VAR_0)
 {
   VAR_1 = FUNC_10 (VAR_1, 0);
   goto restart;
 }


    default:

      if ((FUNC_1 (VAR_1) || FUNC_5 (VAR_1))
   && FUNC_12 (VAR_1))
 return 0;




      if (FUNC_2 (VAR_1) && FUNC_7 (FUNC_6 (VAR_1)) == 0)
 return 0;

    warn:
      FUNC_16 (0, "%Hvalue computed is not used", &VAR_2);
      return 1;
    }
}
