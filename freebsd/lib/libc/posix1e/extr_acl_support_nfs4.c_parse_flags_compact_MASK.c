
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct flagnames_struct {char const letter; int flag; int * name; } ;


 int FUNC_0 (char*,char const*,char const) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_0, uint32_t *VAR_1,
    const struct flagnames_struct *VAR_2, const char *VAR_3)
{
 int VAR_4, VAR_5, VAR_6;

 *VAR_1 = 0;

 for (VAR_4 = 0;; VAR_4++) {
  if (VAR_0[VAR_4] == '\0')
   return (0);


  if (VAR_0[VAR_4] == '-')
   continue;

  VAR_6 = 0;

  for (VAR_5 = 0; VAR_2[VAR_5].name != ((void*)0); VAR_5++) {
   if (VAR_2[VAR_5].letter == VAR_0[VAR_4]) {
    *VAR_1 |= VAR_2[VAR_5].flag;
    VAR_6 = 1;
    break;
   }
  }

  if (!VAR_6) {
   FUNC_0("malformed ACL: \"%s\" field contains "
       "invalid flag \"%c\"", VAR_3, VAR_0[VAR_4]);
   return (-1);
  }
 }
}
