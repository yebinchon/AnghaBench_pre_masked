
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char**,int*,int,int,char**,char*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (char*,char**) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*) ;

int FUNC_9(char **VAR_0, int *VAR_1)
{
 int VAR_2, VAR_3;
 char *VAR_4 = *VAR_0;
 int VAR_5 = *VAR_1;
 char *VAR_6 = VAR_4;

 VAR_2 = FUNC_2();
 if (VAR_2 == 0)
  return 0;
 VAR_4[0] = VAR_2;
 VAR_4[1] = 0;
 if (!FUNC_3(VAR_2) && VAR_2 != '.' && VAR_2 != '_')
  return VAR_2;

 *VAR_6++ = VAR_2;
 if (FUNC_4(VAR_2) || VAR_2 == '_') {
  for ( ; (VAR_2 = FUNC_2()) != 0; ) {
   if (VAR_6-VAR_4 >= VAR_5)
    if (!FUNC_1(&VAR_4, &VAR_5, VAR_6-VAR_4+2, 100, &VAR_6, "gettok"))
     FUNC_0( "out of space for name %.10s...", VAR_4 );
   if (FUNC_3(VAR_2) || VAR_2 == '_')
    *VAR_6++ = VAR_2;
   else {
    *VAR_6 = 0;
    FUNC_7(VAR_2);
    break;
   }
  }
  *VAR_6 = 0;
  VAR_3 = 'a';
 } else {
  char *VAR_7;

  for ( ; (VAR_2 = FUNC_2()) != 0; ) {
   if (VAR_6-VAR_4 >= VAR_5)
    if (!FUNC_1(&VAR_4, &VAR_5, VAR_6-VAR_4+2, 100, &VAR_6, "gettok"))
     FUNC_0( "out of space for number %.10s...", VAR_4 );
   if (FUNC_5(VAR_2) || VAR_2 == 'e' || VAR_2 == 'E'
     || VAR_2 == '.' || VAR_2 == '+' || VAR_2 == '-')
    *VAR_6++ = VAR_2;
   else {
    FUNC_7(VAR_2);
    break;
   }
  }
  *VAR_6 = 0;
  FUNC_6(VAR_4, &VAR_7);
  if (VAR_7 == VAR_4) {
   VAR_4[1] = 0;
   VAR_3 = VAR_4[0];
   FUNC_8(VAR_7+1);
  } else {
   FUNC_8(VAR_7);
   VAR_7[0] = 0;
   VAR_3 = '0';
  }
 }
 *VAR_0 = VAR_4;
 *VAR_1 = VAR_5;
 return VAR_3;
}
