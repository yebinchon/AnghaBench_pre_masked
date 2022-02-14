
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iso_directory_record {char* name; int name_len; } ;


 size_t FUNC_0 (int ) ;
 char* FUNC_1 (struct iso_directory_record*,int,size_t*) ;
 char const FUNC_2 (char const) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_0, struct iso_directory_record *VAR_1, int VAR_2,
    int VAR_3)
{
 size_t VAR_4;
 const char *VAR_5 = ((void*)0);
 int VAR_6, VAR_7;

 if (VAR_2)
  VAR_5 = FUNC_1(VAR_1, VAR_3, &VAR_4);
 else
  VAR_5 = ((void*)0);
 if (VAR_5 == ((void*)0)) {
  VAR_4 = FUNC_0(VAR_1->name_len);
  VAR_5 = VAR_1->name;
  VAR_7 = 1;
 } else
  VAR_7 = 0;
 for (VAR_6 = VAR_4; --VAR_6 >= 0; VAR_0++, VAR_5++) {
  if (!*VAR_0 || *VAR_0 == '/')
   break;
  if (*VAR_0 == *VAR_5)
   continue;
  if (!VAR_7 && FUNC_2(*VAR_0) == *VAR_5)
   continue;
  return 0;
 }
 if (*VAR_0 && *VAR_0 != '/') {
  return 0;
 }





 if (VAR_6 >= 0 && (*VAR_5 == ';' || *VAR_5 == '.')) {

  if (*VAR_5 == '.' && VAR_5[1] != ';') {
   return 0;
  }
  while (--VAR_6 >= 0)
   if (*++VAR_5 != ';' && (*VAR_5 < '0' || *VAR_5 > '9')) {
    return 0;
   }
 }
 return 1;
}
