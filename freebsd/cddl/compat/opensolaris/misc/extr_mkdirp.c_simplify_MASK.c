
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wchar_t ;


 char* FUNC_0 (int,size_t) ;
 int FUNC_1 (char*) ;
 size_t FUNC_2 (char*,char*,size_t) ;
 char* FUNC_3 (char const*) ;
 size_t FUNC_4 (char*) ;
 size_t FUNC_5 (char*,char*,size_t) ;

__attribute__((used)) static char *
FUNC_6(const char *VAR_0)
{
 int VAR_1;
 size_t VAR_2;
 size_t VAR_3;
 wchar_t *VAR_4;
 wchar_t *VAR_5;
 char *VAR_6;





 if (!VAR_0)
     return (((void*)0));





 if ((VAR_6 = FUNC_3(VAR_0)) == ((void*)0)) {
  return (((void*)0));
 }






 VAR_2 = FUNC_4(VAR_6);

 if ((VAR_5 = FUNC_0(sizeof (wchar_t), VAR_2+1)) == ((void*)0)) {
  FUNC_1(VAR_6);
  return (((void*)0));
 }

 if ((VAR_3 = FUNC_2(VAR_5, VAR_6, VAR_2)) == (size_t)-1) {
  FUNC_1(VAR_6);
  FUNC_1(VAR_5);
  return (((void*)0));
 }





 for (VAR_4 = VAR_5, VAR_1 = 0; VAR_1 < VAR_3; VAR_1++) {
  *VAR_4++ = VAR_5[VAR_1];

  if (VAR_5[VAR_1] == '/') {
   VAR_1++;

   while (VAR_5[VAR_1] == '/') {
    VAR_1++;
   }

   VAR_1--;
  }
 }

 *VAR_4 = '\0';





 if (FUNC_5(VAR_6, VAR_5, VAR_2) == (size_t)-1) {
  FUNC_1(VAR_6);
  FUNC_1(VAR_5);
  return (((void*)0));
 }

 FUNC_1(VAR_5);
 return (VAR_6);
}
