
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int ) ;

char *
FUNC_1 (char *VAR_3)
{
  char *VAR_4;
  for (VAR_4 = VAR_1;
       !VAR_2[(unsigned char) *VAR_4];
       VAR_4++)
    ;

  *VAR_3 = *VAR_4;
  *VAR_4 = '\0';

  return VAR_4;
}
