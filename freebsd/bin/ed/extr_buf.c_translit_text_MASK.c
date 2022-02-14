
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char* VAR_0 ;

char *
FUNC_0(char *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 static int VAR_5 = 0;

 unsigned char *VAR_6;

 VAR_0[VAR_5] = VAR_5;
 VAR_0[VAR_5 = VAR_3] = VAR_4;
 for (VAR_6 = (unsigned char *) VAR_1; VAR_2-- > 0; VAR_6++)
  *VAR_6 = VAR_0[*VAR_6];
 return VAR_1;
}
