
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct tar {int dummy; } ;
struct archive_read {int dummy; } ;
struct archive_entry {int dummy; } ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (struct archive_read*,size_t,int *) ;
 int FUNC_1 (struct archive_entry*,void const*,size_t) ;
 char* FUNC_2 (struct archive_entry*) ;
 int* FUNC_3 (struct archive_entry*) ;
 int FUNC_4 (struct archive_entry*) ;
 int FUNC_5 (struct archive_read*,size_t*) ;
 int FUNC_6 (struct archive_read*,struct tar*,struct archive_entry*,size_t*) ;

__attribute__((used)) static int
FUNC_7(struct archive_read *VAR_3, struct tar *VAR_4,
    struct archive_entry *VAR_5, const void *VAR_6, size_t *VAR_7)
{
 int64_t VAR_8;
 const void *VAR_9;
 const char *VAR_10, *VAR_11;
 const wchar_t *VAR_12, *VAR_13;

 (void)VAR_6;

 VAR_13 = VAR_12 = FUNC_3(VAR_5);
 if (VAR_12 != ((void*)0)) {

  for (; *VAR_12 != L'\0'; ++VAR_12) {
   if (VAR_12[0] == '/' && VAR_12[1] != L'\0')
    VAR_13 = VAR_12 + 1;
  }




  if (VAR_13[0] != L'.' || VAR_13[1] != L'_' || VAR_13[2] == L'\0')
   return VAR_2;
 } else {

  VAR_11 = VAR_10 = FUNC_2(VAR_5);
  if (VAR_10 == ((void*)0))
   return (VAR_0);
  for (; *VAR_10 != '\0'; ++VAR_10) {
   if (VAR_10[0] == '/' && VAR_10[1] != '\0')
    VAR_11 = VAR_10 + 1;
  }




  if (VAR_11[0] != '.' || VAR_11[1] != '_' || VAR_11[2] == '\0')
   return VAR_2;
 }


 VAR_8 = FUNC_4(VAR_5);
 VAR_9 = FUNC_0(VAR_3, (size_t)VAR_8, ((void*)0));
 if (VAR_9 == ((void*)0)) {
  *VAR_7 = 0;
  return (VAR_1);
 }
 FUNC_1(VAR_5, VAR_9, (size_t)VAR_8);
 *VAR_7 = (size_t)((VAR_8 + 511) & ~ 511);
 FUNC_5(VAR_3, VAR_7);
 return (FUNC_6(VAR_3, VAR_4, VAR_5, VAR_7));
}
