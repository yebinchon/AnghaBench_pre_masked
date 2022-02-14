
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct open_file {int dummy; } ;
struct iso_directory_record {char* name; int name_len; } ;


 size_t FUNC_0 (int ) ;
 char* FUNC_1 (struct open_file*,struct iso_directory_record*,int,size_t*) ;
 char* FUNC_2 (char const*,char) ;
 size_t FUNC_3 (char const*) ;
 char FUNC_4 (char const) ;

__attribute__((used)) static int
FUNC_5(struct open_file *VAR_0, const char *VAR_1, struct iso_directory_record *VAR_2,
    int VAR_3, int VAR_4)
{
 size_t VAR_5, VAR_6;
 char *VAR_7, *VAR_8;
 int VAR_9, VAR_10;

 if (VAR_3)
  VAR_7 = FUNC_1(VAR_0, VAR_2, VAR_4, &VAR_5);
 else
  VAR_7 = ((void*)0);
 if (VAR_7 == ((void*)0)) {
  VAR_5 = FUNC_0(VAR_2->name_len);
  VAR_7 = VAR_2->name;
  VAR_10 = 1;
 } else
  VAR_10 = 0;

 VAR_8 = FUNC_2(VAR_1, '/');
 if (VAR_8 != ((void*)0)) {
  VAR_6 = VAR_8 - VAR_1;
 } else {
  VAR_6 = FUNC_3(VAR_1);
 }

 if (VAR_6 != VAR_5)
  return (0);

 for (VAR_9 = VAR_5; --VAR_9 >= 0; VAR_1++, VAR_7++) {
  if (!*VAR_1 || *VAR_1 == '/')
   break;
  if (*VAR_1 == *VAR_7)
   continue;
  if (!VAR_10 && FUNC_4(*VAR_1) == *VAR_7)
   continue;
  return 0;
 }
 if (*VAR_1 && *VAR_1 != '/')
  return 0;





 if (VAR_9 >= 0 && (*VAR_7 == ';' || *VAR_7 == '.')) {

  if (*VAR_7 == '.' && VAR_7[1] != ';')
   return 0;
  while (--VAR_9 >= 0)
   if (*++VAR_7 != ';' && (*VAR_7 < '0' || *VAR_7 > '9'))
    return 0;
 }
 return 1;
}
