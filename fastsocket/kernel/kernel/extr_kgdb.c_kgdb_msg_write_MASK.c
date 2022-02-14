
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* VAR_1 ;
 char* FUNC_0 (char*,char const) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(const char *VAR_2, int VAR_3)
{
 char *VAR_4;
 int VAR_5;
 int VAR_6;


 VAR_1[0] = 'O';


 while (VAR_3 > 0) {
  VAR_4 = VAR_1 + 1;


  if ((VAR_3 << 1) > (VAR_0 - 2))
   VAR_5 = (VAR_0 - 2) >> 1;
  else
   VAR_5 = VAR_3;


  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
   VAR_4 = FUNC_0(VAR_4, VAR_2[VAR_6]);
  *VAR_4 = '\0';


  VAR_2 += VAR_5;
  VAR_3 -= VAR_5;


  FUNC_1(VAR_1);
 }
}
