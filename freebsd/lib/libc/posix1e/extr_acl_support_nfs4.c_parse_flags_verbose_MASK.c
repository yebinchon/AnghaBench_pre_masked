
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct flagnames_struct {int flag; int * name; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *,char*) ;
 char* FUNC_2 (char const*) ;
 char* FUNC_3 (char**,char*) ;
 int FUNC_4 (char*,char const*,char*) ;

__attribute__((used)) static int
FUNC_5(const char *VAR_0, uint32_t *VAR_1,
    const struct flagnames_struct *VAR_2, const char *VAR_3,
    int *VAR_4)
{
 int VAR_5, VAR_6, VAR_7 = 0;
 char *VAR_8, *VAR_9;

 VAR_8 = FUNC_2(VAR_0);
 *VAR_4 = 0;
 *VAR_1 = 0;

 while (VAR_8 != ((void*)0)) {
  VAR_9 = FUNC_3(&VAR_8, "/:");

  VAR_6 = 0;
  for (VAR_5 = 0; VAR_2[VAR_5].name != ((void*)0); VAR_5++) {
   if (FUNC_1(VAR_2[VAR_5].name, VAR_9) == 0) {
    *VAR_1 |= VAR_2[VAR_5].flag;
    VAR_6 = 1;
    VAR_7 = 1;
   }
  }

  if (!VAR_6) {
   if (VAR_7)
    FUNC_4("malformed ACL: \"%s\" field contains "
        "invalid flag \"%s\"", VAR_3, VAR_9);
   else
    *VAR_4 = 1;
   FUNC_0(VAR_8);
   return (-1);
  }
 }

 FUNC_0(VAR_8);
 return (0);
}
