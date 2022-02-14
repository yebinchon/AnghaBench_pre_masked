
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,char const*,char*) ;
 int FUNC_2 (char*) ;

void
FUNC_3 (const char *VAR_0, int VAR_1)
{
  char VAR_2[200];
  char VAR_3[5];
  char *VAR_4 = VAR_3;
  if (VAR_1 & 1)
    *VAR_4++ = 'R';

  if (VAR_1 & 2)
    *VAR_4++ = 'W';
  if (VAR_1 & 4)
    *VAR_4++ = 'X';
  if (VAR_1 & 8)
    *VAR_4++ = 'S';
  *VAR_4++ = 0;
  FUNC_1 (VAR_2, "-attr %s %s", VAR_0, VAR_3);
  FUNC_0 (FUNC_2 (VAR_2));
}
