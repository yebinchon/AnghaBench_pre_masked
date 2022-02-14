
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_name_list {int fname; struct file_name_list* next; } ;
typedef int rtx ;
typedef int FILE ;



 int FUNC_0 (char const*) ;
 char* FUNC_1 (int ,int ) ;
 scalar_t__ VAR_0 ;
 char* FUNC_2 (scalar_t__,char const*,char const*,...) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 struct file_name_list* VAR_2 ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int,char*,char const*) ;
 int FUNC_8 (int ,int) ;
 scalar_t__ FUNC_9 (int *,int *,int*) ;
 char const* VAR_3 ;
 int VAR_4 ;
 char* FUNC_10 (char const*) ;

__attribute__((used)) static void
FUNC_11 (rtx VAR_5, int VAR_6)
{
  const char *VAR_7 = FUNC_1 (VAR_5, 0);
  const char *VAR_8;
  int VAR_9;
  char *VAR_10;
  FILE *VAR_11;


  if (! FUNC_0 (VAR_7))
    {
      struct file_name_list *VAR_12;


      for (VAR_12 = VAR_2; VAR_12; VAR_12 = VAR_12->next)
 {
   static const char VAR_13[2] = { 128, '\0' };

   VAR_10 = FUNC_2 (VAR_12->fname, VAR_13, VAR_7, ((void*)0));
   VAR_11 = FUNC_4 (VAR_10, "r");
   if (VAR_11 != ((void*)0))
     goto success;
   FUNC_5 (VAR_10);
 }
    }

  if (VAR_0)
    VAR_10 = FUNC_2 (VAR_0, VAR_7, ((void*)0));
  else
    VAR_10 = FUNC_10 (VAR_7);
  VAR_11 = FUNC_4 (VAR_10, "r");
  if (VAR_11 == ((void*)0))
    {
      FUNC_5 (VAR_10);
      FUNC_7 (VAR_6, "include file `%s' not found", VAR_7);
      VAR_1 = 1;
      return;
    }
 success:




  VAR_8 = VAR_3;
  VAR_9 = VAR_4;
  VAR_3 = VAR_10;
  VAR_4 = 1;

  if (&FUNC_6)
    FUNC_6 (VAR_10);


  while (FUNC_9 (VAR_11, &VAR_5, &VAR_6))
    FUNC_8 (VAR_5, VAR_6);




  VAR_3 = VAR_8;
  VAR_4 = VAR_9;

  FUNC_3 (VAR_11);
}
