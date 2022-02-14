
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tracepoint {struct action_line* actions; } ;
struct cleanup {int dummy; } ;
struct action_line {char* action; struct action_line* next; } ;
typedef enum actionline_type { ____Placeholder_actionline_type } actionline_type ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct cleanup*) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (struct tracepoint*) ;
 int FUNC_4 (int ) ;
 char* FUNC_5 (int ) ;
 char* FUNC_6 (char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 struct cleanup* FUNC_7 (struct tracepoint*) ;
 char* FUNC_8 (char*) ;
 int FUNC_9 (int ,int ) ;
 int * VAR_11 ;
 int VAR_12 ;
 char* FUNC_10 (char*) ;
 int FUNC_11 (char**,struct tracepoint*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*) ;
 struct action_line* FUNC_14 (int) ;

__attribute__((used)) static void
FUNC_15 (struct tracepoint *VAR_13)
{
  char *VAR_14;
  char *VAR_15 = "> ", *VAR_16 = "  > ";
  char *VAR_17 = VAR_15;
  enum actionline_type VAR_18;
  extern FILE *VAR_19;
  struct action_line *VAR_20 = ((void*)0), *VAR_21;
  struct cleanup *VAR_22;



  VAR_9++;
  VAR_22 = FUNC_7 (VAR_13);
  while (1)
    {


      FUNC_13 ("");
      FUNC_4 (VAR_7);
      FUNC_4 (VAR_6);

      if (&FUNC_8 && VAR_19 == ((void*)0))
 VAR_14 = FUNC_8) (VAR_17);
      else if (VAR_19 == VAR_11 && FUNC_0 (VAR_19))
 {
   VAR_14 = FUNC_6 (VAR_17);
   if (VAR_14 && *VAR_14)
     FUNC_1 (VAR_14);
 }
      else
 VAR_14 = FUNC_5 (0);

      VAR_18 = FUNC_11 (&VAR_14, VAR_13);
      if (VAR_18 == VAR_0)
 continue;

      VAR_21 = FUNC_14 (sizeof (struct action_line));
      VAR_21->next = ((void*)0);
      VAR_21->action = VAR_14;

      if (VAR_20 == ((void*)0))
 VAR_13->actions = VAR_20 = VAR_21;
      else
 {
   VAR_20->next = VAR_21;
   VAR_20 = VAR_21;
 }

      if (VAR_18 == VAR_3)
 {
   if (VAR_17 == VAR_16)
     {
       FUNC_12 ("Already processing 'while-stepping'");
       continue;
     }
   else
     VAR_17 = VAR_16;
 }
      else if (VAR_18 == VAR_1)
 {
   if (VAR_17 == VAR_16)
     {
       VAR_17 = VAR_15;
     }
   else
     {
       if (VAR_13->actions->next == ((void*)0))
  {


    FUNC_3 (VAR_13);
  }
       break;
     }
 }
    }




  VAR_9--;
  FUNC_2 (VAR_22);
}
