
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mode_data {int precision; char* name; char* line; struct mode_data* component; int file; struct mode_data* next; } ;
typedef enum mode_class { ____Placeholder_mode_class } mode_class ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,char*,char*) ;
 struct mode_data** VAR_2 ;
 struct mode_data* FUNC_2 (int,int ,char const*,unsigned int) ;
 int FUNC_3 (char*,int,char*,char*) ;
 char* FUNC_4 (char*,char) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void
FUNC_8 (enum mode_class VAR_3,
      const char *VAR_4, unsigned int VAR_5)
{
  struct mode_data *VAR_6;
  struct mode_data *VAR_7;
  char VAR_8[8];
  enum mode_class VAR_9 = FUNC_0 (VAR_3);

  if (VAR_9 == VAR_1)
    return;

  for (VAR_6 = VAR_2[VAR_3]; VAR_6; VAR_6 = VAR_6->next)
    {

      if (VAR_6->precision == 1)
 continue;

      if (FUNC_5 (VAR_6->name) >= sizeof VAR_8)
 {
   FUNC_1 ("%s:%d:mode name \"%s\" is too long",
   VAR_6->file, VAR_6->line, VAR_6->name);
   continue;
 }




      if (VAR_3 == VAR_0)
 {
   char *VAR_10, *VAR_11 = 0;
   FUNC_6 (VAR_8, VAR_6->name, sizeof VAR_8);
   VAR_10 = FUNC_4 (VAR_8, 'F');
   if (VAR_10 == 0)
     VAR_11 = FUNC_4 (VAR_8, 'D');
   if (VAR_10 == 0 && VAR_11 == 0)
     {
       FUNC_1 ("%s:%d: float mode \"%s\" has no 'F' or 'D'",
       VAR_6->file, VAR_6->line, VAR_6->name);
       continue;
     }

   if (VAR_10 != 0)
     *VAR_10 = 'C';
   else
     FUNC_3 (VAR_8, sizeof VAR_8, "C%s", VAR_6->name);
 }
      else
 FUNC_3 (VAR_8, sizeof VAR_8, "C%s", VAR_6->name);

      VAR_7 = FUNC_2 (VAR_9, FUNC_7 (VAR_8), VAR_4, VAR_5);
      VAR_7->component = VAR_6;
    }
}
