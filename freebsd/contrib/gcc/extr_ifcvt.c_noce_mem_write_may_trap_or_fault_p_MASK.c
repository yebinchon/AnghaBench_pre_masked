
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ rtx ;
struct TYPE_2__ {scalar_t__ (* delegitimize_address ) (scalar_t__) ;} ;



 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;


 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static bool
FUNC_7 (rtx VAR_2)
{
  rtx VAR_3;

  if (FUNC_1 (VAR_2))
    return 1;

  if (FUNC_5 (VAR_2))
    return 1;

  VAR_3 = FUNC_3 (VAR_2, 0);


  VAR_3 = VAR_1.delegitimize_address (VAR_3);

  while (VAR_3)
    switch (FUNC_0 (VAR_3))
      {
      case 138:
      case 131:
      case 130:
      case 134:
      case 133:
      case 132:
 VAR_3 = FUNC_3 (VAR_3, 0);
 break;
      case 136:
      case 129:
 VAR_3 = FUNC_3 (VAR_3, 1);
 break;
      case 135:
 if (FUNC_0 (FUNC_3 (VAR_3, 1)) == VAR_0)
   VAR_3 = FUNC_3 (VAR_3, 0);
 else
   return 0;
 break;
      case 137:
 return 1;
      case 128:
 if (FUNC_2 (VAR_3)
     && FUNC_4 (FUNC_2 (VAR_3), 0))
   return 1;
 return 0;
      default:
 return 0;
      }

  return 0;
}
