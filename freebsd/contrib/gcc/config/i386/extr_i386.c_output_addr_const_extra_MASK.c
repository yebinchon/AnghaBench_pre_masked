
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef int FILE ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;






 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (char*,int *) ;
 int FUNC_4 (int *,int ) ;

bool
FUNC_5 (FILE *VAR_2, rtx VAR_3)
{
  rtx VAR_4;

  if (FUNC_0 (VAR_3) != VAR_1)
    return 0;

  VAR_4 = FUNC_2 (VAR_3, 0, 0);
  switch (FUNC_1 (VAR_3, 1))
    {
    case 131:
      FUNC_4 (VAR_2, VAR_4);

      FUNC_3 ("@GOTTPOFF", VAR_2);
      break;
    case 128:
      FUNC_4 (VAR_2, VAR_4);
      FUNC_3 ("@TPOFF", VAR_2);
      break;
    case 129:
      FUNC_4 (VAR_2, VAR_4);
      if (VAR_0)
 FUNC_3 ("@TPOFF", VAR_2);
      else
 FUNC_3 ("@NTPOFF", VAR_2);
      break;
    case 133:
      FUNC_4 (VAR_2, VAR_4);
      FUNC_3 ("@DTPOFF", VAR_2);
      break;
    case 132:
      FUNC_4 (VAR_2, VAR_4);
      if (VAR_0)
 FUNC_3 ("@GOTTPOFF(%rip)", VAR_2);
      else
 FUNC_3 ("@GOTNTPOFF", VAR_2);
      break;
    case 130:
      FUNC_4 (VAR_2, VAR_4);
      FUNC_3 ("@INDNTPOFF", VAR_2);
      break;

    default:
      return 0;
    }

  return 1;
}
