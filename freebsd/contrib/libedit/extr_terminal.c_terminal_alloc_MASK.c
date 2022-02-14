
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int termbuf ;
struct termcapstr {int dummy; } ;
struct TYPE_4__ {char** t_str; int t_loc; char* t_buf; } ;
struct TYPE_5__ {TYPE_1__ el_terminal; int el_errfile; } ;
typedef TYPE_2__ EditLine ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (char*,char const*) ;
 size_t FUNC_4 (char const*) ;
 struct termcapstr const* VAR_2 ;

__attribute__((used)) static void
FUNC_5(EditLine *VAR_3, const struct termcapstr *VAR_4, const char *VAR_5)
{
 char VAR_6[VAR_0];
 size_t VAR_7, VAR_8;
 char **VAR_9 = VAR_3->el_terminal.t_str;
 char **VAR_10, **VAR_11 = &VAR_9[VAR_4 - VAR_2];

 (void) FUNC_2(VAR_6, 0, sizeof(VAR_6));
 if (VAR_5 == ((void*)0) || *VAR_5 == '\0') {
  *VAR_11 = ((void*)0);
  return;
 } else
  VAR_8 = FUNC_4(VAR_5);

 VAR_7 = *VAR_11 == ((void*)0) ? 0 : FUNC_4(*VAR_11);




 if (VAR_8 <= VAR_7) {
  if (*VAR_11)
   (void) FUNC_3(*VAR_11, VAR_5);
  return;
 }



 if (VAR_3->el_terminal.t_loc + 3 < VAR_0) {

  (void) FUNC_3(*VAR_11 = &VAR_3->el_terminal.t_buf[
      VAR_3->el_terminal.t_loc], VAR_5);
  VAR_3->el_terminal.t_loc += VAR_8 + 1;
  return;
 }




 VAR_7 = 0;
 for (VAR_10 = VAR_9; VAR_10 < &VAR_9[VAR_1]; VAR_10++)
  if (*VAR_10 != ((void*)0) && **VAR_10 != '\0' && *VAR_10 != *VAR_11) {
   char *VAR_12;

   for (VAR_12 = *VAR_10; *VAR_12 != '\0'; VAR_6[VAR_7++] = *VAR_12++)
    continue;
   VAR_6[VAR_7++] = '\0';
  }
 FUNC_1(VAR_3->el_terminal.t_buf, VAR_6, VAR_0);
 VAR_3->el_terminal.t_loc = VAR_7;
 if (VAR_3->el_terminal.t_loc + 3 >= VAR_0) {
  (void) FUNC_0(VAR_3->el_errfile,
      "Out of termcap string space.\n");
  return;
 }

 (void) FUNC_3(*VAR_11 = &VAR_3->el_terminal.t_buf[VAR_3->el_terminal.t_loc],
     VAR_5);
 VAR_3->el_terminal.t_loc += (size_t)VAR_8 + 1;
 return;
}
