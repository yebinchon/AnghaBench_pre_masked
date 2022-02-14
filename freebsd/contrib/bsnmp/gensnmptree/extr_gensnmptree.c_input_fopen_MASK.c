
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct TYPE_2__ {char* path; } ;
typedef int FILE ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *,char*,char const*) ;
 char** VAR_1 ;
 int FUNC_1 (char*,char const*) ;
 int * FUNC_2 (char*,char const*) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_2, int VAR_3)
{
 FILE *VAR_4;
 char *VAR_5;
 u_int VAR_6;

 if (VAR_2[0] == '/') {
  if ((VAR_4 = FUNC_2(((void*)0), VAR_2)) != ((void*)0)) {
   FUNC_0(VAR_4, ((void*)0), VAR_2);
   return;
  }

 } else {
  if (VAR_3) {
   if (VAR_0 == ((void*)0))
    VAR_5 = ((void*)0);
   else
    VAR_5 = VAR_0->path;

   if ((VAR_4 = FUNC_2(VAR_5, VAR_2)) != ((void*)0)) {
    FUNC_0(VAR_4, ((void*)0), VAR_2);
    return;
   }
  }

  for (VAR_6 = 0; VAR_1[VAR_6] != ((void*)0); VAR_6++)
   if ((VAR_4 = FUNC_2(VAR_1[VAR_6], VAR_2)) != ((void*)0)) {
    FUNC_0(VAR_4, VAR_1[VAR_6], VAR_2);
    return;
   }
 }
 FUNC_1("cannot open '%s'", VAR_2);
}
