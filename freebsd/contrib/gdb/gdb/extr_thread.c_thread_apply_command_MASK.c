
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_info {int num; int ptid; } ;
struct cleanup {int dummy; } ;


 int FUNC_0 (struct cleanup*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,int) ;
 struct thread_info* FUNC_3 (int) ;
 int VAR_0 ;
 int FUNC_4 (char) ;
 struct cleanup* FUNC_5 (int ,void*) ;
 struct cleanup* FUNC_6 (int ) ;
 int FUNC_7 (char*,int ,int ) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,char**,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct thread_info*) ;
 int FUNC_14 (char*,int) ;
 int VAR_1 ;
 char* FUNC_15 (char*) ;

__attribute__((used)) static void
FUNC_16 (char *VAR_2, int VAR_3)
{
  char *VAR_4;
  char *VAR_5;
  struct cleanup *VAR_6;
  struct cleanup *VAR_7;
  char *VAR_8;

  if (VAR_2 == ((void*)0) || *VAR_2 == '\000')
    FUNC_1 ("Please specify a thread ID list");

  for (VAR_4 = VAR_2; *VAR_4 != '\000' && !FUNC_4 (*VAR_4); VAR_4++);

  if (*VAR_4 == '\000')
    FUNC_1 ("Please specify a command following the thread ID list");

  VAR_6 = FUNC_6 (VAR_0);



  VAR_8 = FUNC_15 (VAR_4);
  VAR_7 = FUNC_5 (VAR_1, (void *) VAR_8);
  while (VAR_2 < VAR_4)
    {
      struct thread_info *VAR_9;
      int VAR_10, VAR_11;

      VAR_10 = FUNC_9 (VAR_2, &VAR_5, 10);
      if (VAR_5 == VAR_2)
 FUNC_1 ("Error parsing %s", VAR_2);
      VAR_2 = VAR_5;

      while (*VAR_2 == ' ' || *VAR_2 == '\t')
 VAR_2++;

      if (*VAR_2 == '-')
 {
   VAR_2++;
   VAR_11 = FUNC_9 (VAR_2, &VAR_5, 10);
   if (VAR_5 == VAR_2)
     FUNC_1 ("Error parsing %s", VAR_2);
   VAR_2 = VAR_5;

   while (*VAR_2 == ' ' || *VAR_2 == '\t')
     VAR_2++;
 }
      else
 VAR_11 = VAR_10;

      for (; VAR_10 <= VAR_11; VAR_10++)
 {
   VAR_9 = FUNC_3 (VAR_10);

   if (!VAR_9)
     FUNC_14 ("Unknown thread %d.", VAR_10);
   else if (!FUNC_13 (VAR_9))
     FUNC_14 ("Thread %d has terminated.", VAR_10);
   else
     {
       FUNC_10 (VAR_9->ptid);




       FUNC_7 ("\nThread %d (%s):\n", VAR_9->num,
          FUNC_11 (VAR_0));

       FUNC_2 (VAR_4, VAR_3);
       FUNC_8 (VAR_4, VAR_8);
     }
 }
    }

  FUNC_0 (VAR_7);
  FUNC_0 (VAR_6);
}
