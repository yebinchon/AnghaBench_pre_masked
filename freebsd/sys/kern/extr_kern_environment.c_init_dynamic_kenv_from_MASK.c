
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (char*,int *) ;
 int FUNC_1 (char*,size_t) ;
 int * VAR_5 ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (size_t,int ,int ) ;
 int FUNC_4 (char*,char*) ;
 char* FUNC_5 (char*,char) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void
FUNC_8(char *VAR_6, int *VAR_7)
{
 char *VAR_8, *VAR_9, *VAR_10, *VAR_11;
 size_t VAR_12;
 int VAR_13;

 if (VAR_6 && *VAR_6 != '\0') {
  VAR_11 = ((void*)0);
  VAR_13 = *VAR_7;
  for (VAR_8 = VAR_6; VAR_8 != ((void*)0); VAR_8 = VAR_9) {
   VAR_9 = FUNC_2(VAR_8);
   VAR_12 = FUNC_7(VAR_8) + 1;
   if (VAR_12 > VAR_0 + 1 + VAR_1 + 1) {
    FUNC_4(
    "WARNING: too long kenv string, ignoring %s\n",
        VAR_8);
    goto sanitize;
   }
   VAR_10 = FUNC_5(VAR_8, '=');
   if (VAR_10 == ((void*)0)) {
    FUNC_4(
    "WARNING: malformed static env value, ignoring %s\n",
        VAR_8);
    goto sanitize;
   }
   *VAR_10 = 0;







   VAR_11 = FUNC_0(VAR_8, ((void*)0));
   *VAR_10 = '=';
   if (VAR_11 != ((void*)0))
    goto sanitize;
   if (VAR_13 > VAR_2) {
    FUNC_4(
    "WARNING: too many kenv strings, ignoring %s\n",
        VAR_8);
    goto sanitize;
   }

   VAR_5[VAR_13] = FUNC_3(VAR_12, VAR_3, VAR_4);
   FUNC_6(VAR_5[VAR_13++], VAR_8);
sanitize:
   FUNC_1(VAR_8, VAR_12 - 1);
  }
  *VAR_7 = VAR_13;
 }
}
