
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;



 int FUNC_0 (scalar_t__) ;


 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*,scalar_t__*) ;

__attribute__((used)) static void
FUNC_7 (rtx VAR_3)
{
  rtx VAR_4[3];

  if (! VAR_3)
    {
      FUNC_4 ("\t restore\n", VAR_1);
      return;
    }

  FUNC_5 (FUNC_0 (VAR_3) == VAR_0);

  VAR_4[0] = FUNC_1 (VAR_3);
  VAR_3 = FUNC_2 (VAR_3);

  switch (FUNC_0 (VAR_3))
    {
      case 128:
 VAR_4[1] = FUNC_3 (VAR_3, 0);
 VAR_4[2] = FUNC_3 (VAR_3, 1);
 FUNC_6 (" restore %r1, %2, %Y0", VAR_4);
 break;
      case 129:
 VAR_4[1] = FUNC_3 (VAR_3, 0);
 VAR_4[2] = FUNC_3 (VAR_3, 1);
 FUNC_6 (" restore %r1, %%lo(%a2), %Y0", VAR_4);
 break;
      case 130:
 VAR_4[1] = FUNC_3 (VAR_3, 0);
 FUNC_5 (FUNC_3 (VAR_3, 1) == VAR_2);
 FUNC_6 (" restore %r1, %r1, %Y0", VAR_4);
 break;
      default:
 VAR_4[1] = VAR_3;
 FUNC_6 (" restore %%g0, %1, %Y0", VAR_4);
 break;
    }
}
