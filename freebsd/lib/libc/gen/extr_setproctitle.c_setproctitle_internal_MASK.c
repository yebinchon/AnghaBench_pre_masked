
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef int ul_ps_strings ;
struct ps_strings {char** ps_argvstr; int ps_nargvstr; } ;


 int VAR_0 ;
 char* FUNC_0 () ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,int,char*,char*,...) ;
 size_t FUNC_3 (char*) ;
 int FUNC_4 (char*,unsigned long*,size_t*,int *,int ) ;
 int FUNC_5 (char*,int,char const*,int ) ;

__attribute__((used)) static char *
FUNC_6(const char *VAR_1, va_list VAR_2)
{
 static struct ps_strings *VAR_3;
 static char *VAR_4 = ((void*)0);
 static char *VAR_5 = ((void*)0);
 static char **VAR_6, *VAR_7;
 static int VAR_8 = -1;
 static char *VAR_9[2] = { ((void*)0), ((void*)0) };
 char **VAR_10;
 int VAR_11;
 int VAR_12;
 size_t VAR_13;
 unsigned long VAR_14;

 if (VAR_4 == ((void*)0)) {
  VAR_4 = FUNC_1(VAR_0);
  if (VAR_4 == ((void*)0))
   return (((void*)0));
  VAR_9[0] = VAR_4;
 }

 if (VAR_5 == ((void*)0) ) {
  VAR_5 = FUNC_1(VAR_0);
  if (VAR_5 == ((void*)0))
   return (((void*)0));
  *VAR_5 = '\0';
 }

 if (VAR_1) {
  VAR_4[VAR_0 - 1] = '\0';

  if (VAR_1[0] == '-') {

   VAR_1++;
   VAR_13 = 0;
  } else {

   (void)FUNC_2(VAR_4, VAR_0, "%s: ", FUNC_0());
   VAR_13 = FUNC_3(VAR_4);
  }


  (void)FUNC_5(VAR_4 + VAR_13, VAR_0 - VAR_13, VAR_1, VAR_2);

  VAR_10 = VAR_9;
  VAR_11 = 1;
  VAR_7 = VAR_4;
 } else if (*VAR_5 != '\0') {

  VAR_10 = VAR_6;
  VAR_11 = VAR_8;
  VAR_7 = VAR_5;
 } else

  return (((void*)0));

 if (VAR_3 == ((void*)0)) {
  VAR_13 = sizeof(VAR_14);
  if (FUNC_4("kern.ps_strings", &VAR_14, &VAR_13, ((void*)0),
      0) == -1)
   return (((void*)0));
  VAR_3 = (struct ps_strings *)VAR_14;
 }





 if (VAR_3->ps_argvstr == ((void*)0))
  return (((void*)0));


 if (VAR_8 == -1) {

  VAR_8 = VAR_3->ps_nargvstr;
  VAR_6 = VAR_3->ps_argvstr;
  for (VAR_12 = VAR_13 = 0; VAR_12 < VAR_8; VAR_12++) {






   if (VAR_6[VAR_12] == ((void*)0)) {
    VAR_8 = VAR_12;
    break;
   }
   FUNC_2(VAR_5 + VAR_13, VAR_0 - VAR_13, "%s%s",
       VAR_13 != 0 ? " " : "", VAR_6[VAR_12]);
   if (VAR_13 != 0)
    VAR_13++;
   VAR_13 += FUNC_3(VAR_6[VAR_12]);
   if (VAR_13 >= VAR_0)
    break;
  }
 }
 VAR_3->ps_nargvstr = VAR_11;
 VAR_3->ps_argvstr = VAR_10;

 return (VAR_10[0]);
}
