
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int *) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;

const char *
FUNC_8 (rtx * VAR_2)
{
  char VAR_3[100];
  int VAR_4;
  int VAR_5;
  int VAR_6;

  FUNC_6 (VAR_3, "fstmfdx\t%m0!, {%P1");
  VAR_4 = FUNC_7 (VAR_3);

  FUNC_3 (FUNC_0 (VAR_2[1]) == VAR_1);

  VAR_5 = (FUNC_1 (VAR_2[1]) - VAR_0) / 2;
  for (VAR_6 = 1; VAR_6 < FUNC_2 (VAR_2[2], 0); VAR_6++)
    {
      VAR_4 += FUNC_5 (&VAR_3[VAR_4], ", d%d", VAR_5 + VAR_6);
    }
  FUNC_6 (&VAR_3[VAR_4], "}");

  FUNC_4 (VAR_3, VAR_2);
  return "";
}
