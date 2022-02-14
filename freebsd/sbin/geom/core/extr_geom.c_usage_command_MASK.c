
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_option {char* go_name; int go_char; int * go_val; } ;
struct g_command {char* gc_name; int gc_flags; struct g_option* gc_options; int * gc_usage; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct g_option*) ;
 scalar_t__ VAR_1 ;
 char* VAR_2 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char*) ;
 int VAR_3 ;
 char* FUNC_3 (int *) ;
 char* FUNC_4 (char**,char*) ;

__attribute__((used)) static void
FUNC_5(struct g_command *VAR_4, const char *VAR_5)
{
 struct g_option *VAR_6;
 unsigned VAR_7;

 if (VAR_4->gc_usage != ((void*)0)) {
  char *VAR_8, *VAR_9, *VAR_10;

  VAR_10 = VAR_9 = FUNC_3(VAR_4->gc_usage);
  while ((VAR_8 = FUNC_4(&VAR_9, "\n")) != ((void*)0)) {
   if (*VAR_8 == '\0')
    continue;
   FUNC_1(VAR_3, "%s %s %s %s\n", VAR_5, VAR_2,
       VAR_4->gc_name, VAR_8);
  }
  FUNC_2(VAR_10);
  return;
 }

 FUNC_1(VAR_3, "%s %s %s", VAR_5, VAR_2, VAR_4->gc_name);
 if ((VAR_4->gc_flags & VAR_0) != 0)
  FUNC_1(VAR_3, " [-v]");
 for (VAR_7 = 0; ; VAR_7++) {
  VAR_6 = &VAR_4->gc_options[VAR_7];
  if (VAR_6->go_name == ((void*)0))
   break;
  if (VAR_6->go_val != ((void*)0) || FUNC_0(VAR_6) == VAR_1)
   FUNC_1(VAR_3, " [");
  else
   FUNC_1(VAR_3, " ");
  FUNC_1(VAR_3, "-%c", VAR_6->go_char);
  if (FUNC_0(VAR_6) != VAR_1)
   FUNC_1(VAR_3, " %s", VAR_6->go_name);
  if (VAR_6->go_val != ((void*)0) || FUNC_0(VAR_6) == VAR_1)
   FUNC_1(VAR_3, "]");
 }
 FUNC_1(VAR_3, "\n");
}
