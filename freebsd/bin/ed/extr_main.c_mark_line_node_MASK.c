
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int line_t ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (unsigned char) ;
 int ** VAR_2 ;
 int VAR_3 ;

int
FUNC_1(line_t *VAR_4, int VAR_5)
{
 if (!FUNC_0((unsigned char)VAR_5)) {
  VAR_1 = "invalid mark character";
  return VAR_0;
 } else if (VAR_2[VAR_5 - 'a'] == ((void*)0))
  VAR_3++;
 VAR_2[VAR_5 - 'a'] = VAR_4;
 return 0;
}
