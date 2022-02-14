
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* VAR_0 ;
 int FUNC_1 (int ,char*) ;
 char* VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;

__attribute__((used)) static void
FUNC_2 (char *VAR_5)
{
  switch (*VAR_5)
    {
    case 'x':
      break;
    case 'd':
    case 'o':
      if (*VAR_5 == 'd')
 VAR_2 = 10;
      else
 VAR_2 = 8;
      VAR_3[4] = *VAR_5;
      VAR_4[5] = *VAR_5;
      VAR_1[3] = VAR_0[3] = *VAR_5;
      break;
    default:
      FUNC_1 (FUNC_0("%s: invalid radix"), VAR_5);
    }
}
