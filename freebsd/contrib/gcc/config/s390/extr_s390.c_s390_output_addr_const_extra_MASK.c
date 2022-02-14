
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef int FILE ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 () ;
 int FUNC_7 (int *,int ) ;

bool
FUNC_8 (FILE *VAR_1, rtx VAR_2)
{
  if (FUNC_0 (VAR_2) == VAR_0 && FUNC_3 (VAR_2, 0) == 1)
    switch (FUNC_1 (VAR_2, 1))
      {
      case 136:
 FUNC_7 (VAR_1, FUNC_2 (VAR_2, 0, 0));
 FUNC_5 (VAR_1, "@GOTENT");
 return 1;
      case 137:
 FUNC_7 (VAR_1, FUNC_2 (VAR_2, 0, 0));
 FUNC_5 (VAR_1, "@GOT");
 return 1;
      case 134:
 FUNC_7 (VAR_1, FUNC_2 (VAR_2, 0, 0));
 FUNC_5 (VAR_1, "@GOTOFF");
 return 1;
      case 131:
 FUNC_7 (VAR_1, FUNC_2 (VAR_2, 0, 0));
 FUNC_5 (VAR_1, "@PLT");
 return 1;
      case 130:
 FUNC_7 (VAR_1, FUNC_2 (VAR_2, 0, 0));
 FUNC_5 (VAR_1, "@PLTOFF");
 return 1;
      case 129:
 FUNC_7 (VAR_1, FUNC_2 (VAR_2, 0, 0));
 FUNC_5 (VAR_1, "@TLSGD");
 return 1;
      case 128:
 FUNC_4 (VAR_1, FUNC_6 ());
 FUNC_5 (VAR_1, "@TLSLDM");
 return 1;
      case 138:
 FUNC_7 (VAR_1, FUNC_2 (VAR_2, 0, 0));
 FUNC_5 (VAR_1, "@DTPOFF");
 return 1;
      case 132:
 FUNC_7 (VAR_1, FUNC_2 (VAR_2, 0, 0));
 FUNC_5 (VAR_1, "@NTPOFF");
 return 1;
      case 135:
 FUNC_7 (VAR_1, FUNC_2 (VAR_2, 0, 0));
 FUNC_5 (VAR_1, "@GOTNTPOFF");
 return 1;
      case 133:
 FUNC_7 (VAR_1, FUNC_2 (VAR_2, 0, 0));
 FUNC_5 (VAR_1, "@INDNTPOFF");
 return 1;
      }

  return 0;
}
