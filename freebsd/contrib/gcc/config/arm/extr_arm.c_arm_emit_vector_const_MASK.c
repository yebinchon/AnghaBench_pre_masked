
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;



 int FUNC_5 (int *,char const*,...) ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;

int
FUNC_8 (FILE *VAR_1, rtx VAR_2)
{
  int VAR_3;
  const char * VAR_4;

  FUNC_6 (FUNC_2 (VAR_2) == VAR_0);

  switch (FUNC_3 (VAR_2))
    {
    case 130: VAR_4 = "%08x"; break;
    case 129: VAR_4 = "%04x"; break;
    case 128: VAR_4 = "%02x"; break;
    default: FUNC_7 ();
    }

  FUNC_5 (VAR_1, "0x");
  for (VAR_3 = FUNC_1 (VAR_2); VAR_3--;)
    {
      rtx VAR_5;

      VAR_5 = FUNC_0 (VAR_2, VAR_3);
      FUNC_5 (VAR_1, VAR_4, FUNC_4 (VAR_5));
    }

  return 1;
}
