
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;
 int VAR_6 ;
 int FUNC_2 (int ,char*,int) ;

void
FUNC_3 (const char *VAR_7)
{
  int VAR_8;

  while (*VAR_7)
    switch (VAR_8 = *VAR_7++)
      {
      case 'A':
 VAR_0 = 1;
 break;
      case 'p':
 VAR_2 = 1;
 break;
      case 'P':
 VAR_1 = 1;
 VAR_2 = 1;
 break;
      case 'v':
 VAR_3 = VAR_6;
 break;
      case 'x':
 VAR_4 = 1;
 break;
      case 'y':
 VAR_5 = 1;
 break;
      case 'D':
      case 'I':
 break;
      case 'H':
 FUNC_1();
 break;

      case 'a':
      default:
 if (!FUNC_0 (VAR_8))
   FUNC_2 (0, "unrecognized gcc debugging option: %c", VAR_8);
 break;
      }
}
