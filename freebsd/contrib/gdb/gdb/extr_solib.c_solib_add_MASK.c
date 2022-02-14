
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_ops {int dummy; } ;
struct so_list {char* so_name; int symbols_loaded; struct so_list* next; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,struct so_list*,char*,int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*) ;
 char* FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 () ;
 struct so_list* VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (int,struct target_ops*) ;

void
FUNC_8 (char *VAR_3, int VAR_4, struct target_ops *VAR_5, int VAR_6)
{
  struct so_list *VAR_7;

  if (VAR_3)
    {
      char *VAR_8 = FUNC_4 (VAR_3);

      if (VAR_8)
 FUNC_2 ("Invalid regexp: %s", VAR_8);
    }

  FUNC_7 (VAR_4, VAR_5);




  {
    int VAR_9 = 0;
    int VAR_10 = 0;

    for (VAR_7 = VAR_1; VAR_7; VAR_7 = VAR_7->next)
      if (! VAR_3 || FUNC_5 (VAR_7->so_name))
 {
   VAR_9 = 1;

   if (VAR_7->symbols_loaded)
     {
       if (VAR_4)
  FUNC_3 ("Symbols already loaded for %s\n",
       VAR_7->so_name);
     }
   else if (VAR_6)
     {
       if (FUNC_1
    (VAR_2, VAR_7,
     "Error while reading shared library symbols:\n",
     VAR_0))
  {
    if (VAR_4)
      FUNC_3 ("Loaded symbols for %s\n",
           VAR_7->so_name);
    VAR_7->symbols_loaded = 1;
    VAR_10 = 1;
  }
     }
 }

    if (VAR_4 && VAR_3 && ! VAR_9)
      FUNC_3
 ("No loaded shared libraries match the pattern `%s'.\n", VAR_3);

    if (VAR_10)
      {


 FUNC_6 ();

 FUNC_0 ();
      }
  }
}
