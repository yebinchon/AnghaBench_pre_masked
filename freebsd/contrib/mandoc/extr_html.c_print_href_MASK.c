
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
struct html {char* base_man1; char* base_man2; char* base_includes; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char**,char*,char const*,char const*) ;
 int FUNC_2 (struct html*,char) ;
 int FUNC_3 (struct html*,char const*,char const*,int) ;
 int FUNC_4 (char*,struct stat*) ;
 char* FUNC_5 (char const*,char) ;

__attribute__((used)) static void
FUNC_6(struct html *VAR_0, const char *VAR_1, const char *VAR_2, int VAR_3)
{
 struct stat VAR_4;
 const char *VAR_5, *VAR_6;
 char *VAR_7;

 if (VAR_3) {
  VAR_6 = VAR_0->base_man1;
  if (VAR_0->base_man2 != ((void*)0)) {
   FUNC_1(&VAR_7, "%s.%s", VAR_1, VAR_2);
   if (FUNC_4(VAR_7, &VAR_4) == -1)
    VAR_6 = VAR_0->base_man2;
   FUNC_0(VAR_7);
  }
 } else
  VAR_6 = VAR_0->base_includes;

 while ((VAR_5 = FUNC_5(VAR_6, '%')) != ((void*)0)) {
  FUNC_3(VAR_0, VAR_6, VAR_5, 1);
  if (VAR_3 && VAR_5[1] == 'S') {
   if (VAR_2 == ((void*)0))
    FUNC_2(VAR_0, '1');
   else
    FUNC_3(VAR_0, VAR_2, ((void*)0), 1);
  } else if ((VAR_3 && VAR_5[1] == 'N') ||
      (VAR_3 == 0 && VAR_5[1] == 'I'))
   FUNC_3(VAR_0, VAR_1, ((void*)0), 1);
  else
   FUNC_3(VAR_0, VAR_5, VAR_5 + 2, 1);
  VAR_6 = VAR_5 + 2;
 }
 if (*VAR_6 != '\0')
  FUNC_3(VAR_0, VAR_6, ((void*)0), 1);
}
