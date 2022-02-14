
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mansearch {scalar_t__ argmode; char const* sec; int * arch; scalar_t__ firstmatch; } ;
struct manpaths {size_t sz; } ;
struct manpage {int dummy; } ;
typedef int sections ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct manpaths const*,size_t,char const* const,int *,char*,struct manpage**,size_t*) ;
 int * FUNC_3 (char*,char) ;
 int FUNC_4 (char*,char*,...) ;

__attribute__((used)) static int
FUNC_5(const struct mansearch *VAR_2, const struct manpaths *VAR_3,
 int VAR_4, char **VAR_5, struct manpage **VAR_6, size_t *VAR_7)
{
 const char *const VAR_8[] =
     {"1", "8", "6", "2", "3", "5", "7", "4", "9", "3p"};
 const size_t VAR_9 = sizeof(VAR_8)/sizeof(VAR_8[0]);

 size_t VAR_10, VAR_11, VAR_12;

 FUNC_1(VAR_2->argmode == VAR_0);

 if (VAR_6 != ((void*)0))
  *VAR_6 = ((void*)0);
 *VAR_7 = VAR_12 = 0;
 while (VAR_4) {
  for (VAR_10 = 0; VAR_10 < VAR_3->sz; VAR_10++) {
   if (VAR_2->sec != ((void*)0)) {
    if (FUNC_2(VAR_3, VAR_10, VAR_2->sec,
        VAR_2->arch, *VAR_5, VAR_6, VAR_7) != -1 &&
        VAR_2->firstmatch)
     return 0;
   } else for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++)
    if (FUNC_2(VAR_3, VAR_10, VAR_8[VAR_11],
        VAR_2->arch, *VAR_5, VAR_6, VAR_7) != -1 &&
        VAR_2->firstmatch)
     return 0;
  }
  if (VAR_6 != ((void*)0) && *VAR_7 == VAR_12 &&
      FUNC_3(*VAR_5, '/') == ((void*)0)) {
   if (VAR_2->arch != ((void*)0) &&
       FUNC_0(VAR_2->arch, VAR_1) == 0)
    FUNC_4("Unknown architecture \"%s\".",
        VAR_2->arch);
   else if (VAR_2->sec == ((void*)0))
    FUNC_4("No entry for %s in the manual.",
        *VAR_5);
   else
    FUNC_4("No entry for %s in section %s "
        "of the manual.", *VAR_5, VAR_2->sec);
  }
  VAR_12 = *VAR_7;
  VAR_5++;
  VAR_4--;
 }
 return -1;
}
