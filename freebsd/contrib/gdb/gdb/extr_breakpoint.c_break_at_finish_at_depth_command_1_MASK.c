
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_info {int dummy; } ;
typedef scalar_t__ CORE_ADDR ;


 int FUNC_0 (char*,int,int,int *) ;
 scalar_t__ VAR_0 ;
 struct frame_info* VAR_1 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (scalar_t__,char**,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_3 (struct frame_info*) ;
 int FUNC_4 (scalar_t__) ;
 struct frame_info* FUNC_5 (char*) ;
 char* FUNC_6 (char*,char) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,char*,int) ;
 int FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (int) ;
 char* FUNC_12 (char*,int ,...) ;

__attribute__((used)) static void
FUNC_13 (char *VAR_2, int VAR_3, int VAR_4)
{
  struct frame_info *VAR_5;
  CORE_ADDR VAR_6, VAR_7, VAR_8 = 0;
  char *VAR_9 = ((void*)0);
  char *VAR_10;
  int VAR_11 = 0, VAR_12 = 0;

  if (!VAR_2 ||
      (VAR_2[0] == 'i' && VAR_2[1] == 'f' && (VAR_2[2] == ' ' || VAR_2[2] == '\t')))
    {

      if (VAR_0)
 {
   if (VAR_1)
     {
       VAR_8 = FUNC_3 (VAR_1);
       if (VAR_2)
  VAR_12 = 1;
     }
   else
     FUNC_1 ("No selected frame.");
 }
      else
 FUNC_1 ("No default breakpoint address now.");
    }
  else
    {
      VAR_9 = FUNC_6 (VAR_2, ' ');
      if (VAR_9)
 {
   VAR_9++;
   VAR_11 = FUNC_8 (VAR_9);
   VAR_10 = (char *) FUNC_11 (VAR_9 - VAR_2);
   FUNC_9 (VAR_10, VAR_2, VAR_9 - VAR_2 - 1);
   VAR_10[VAR_9 - VAR_2 - 1] = '\0';
 }
      else
 {
   VAR_10 = (char *) FUNC_11 (FUNC_8 (VAR_2) + 1);
   FUNC_7 (VAR_10, VAR_2);
 }

      VAR_5 = FUNC_5 (VAR_10);
      if (VAR_5)
 VAR_8 = FUNC_3 (VAR_5);
      else
 VAR_8 = 0;
    }
  if (VAR_12)
    {
      VAR_9 = VAR_2;
      VAR_11 = FUNC_8 (VAR_2);
    }

  if (VAR_8)
    {
      if (FUNC_2 (VAR_8, (char **) ((void*)0), &VAR_6, &VAR_7))
 {
   char *VAR_13;
   if (VAR_11)
     VAR_13 = FUNC_12 ("*0x%s %s", FUNC_4 (VAR_7), VAR_9);
   else
     VAR_13 = FUNC_12 ("*0x%s", FUNC_4 (VAR_7));
   FUNC_0 (VAR_13, VAR_3, VAR_4, ((void*)0));
   FUNC_10 (VAR_13);
 }
      else
 FUNC_1 ("No function contains the specified address");
    }
  else
    FUNC_1 ("Unable to set breakpoint at procedure exit");
}
