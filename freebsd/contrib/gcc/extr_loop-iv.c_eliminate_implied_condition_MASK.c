
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2 (enum rtx_code VAR_2, rtx VAR_3, rtx *VAR_4)
{
  switch (VAR_2)
    {
    case 129:

      if (FUNC_1 (VAR_3, *VAR_4))
 *VAR_4 = VAR_1;
      break;

    case 128:

      if (FUNC_1 (*VAR_4, VAR_3))
 *VAR_4 = VAR_0;
      break;

    default:
      FUNC_0 ();
    }
}
