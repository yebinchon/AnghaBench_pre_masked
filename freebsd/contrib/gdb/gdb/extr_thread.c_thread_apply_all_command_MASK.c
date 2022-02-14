
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_info {int num; int ptid; struct thread_info* next; } ;
struct cleanup {int dummy; } ;


 int FUNC_0 (struct cleanup*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;
 int VAR_0 ;
 struct cleanup* FUNC_3 (int ,void*) ;
 struct cleanup* FUNC_4 (int ) ;
 int FUNC_5 (char*,int ,int ) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (struct thread_info*) ;
 struct thread_info* VAR_1 ;
 int VAR_2 ;
 char* FUNC_12 (char*) ;

__attribute__((used)) static void
FUNC_13 (char *VAR_3, int VAR_4)
{
  struct thread_info *VAR_5;
  struct cleanup *VAR_6;
  struct cleanup *VAR_7;
  char *VAR_8;

  if (VAR_3 == ((void*)0) || *VAR_3 == '\000')
    FUNC_1 ("Please specify a command following the thread ID list");

  VAR_6 = FUNC_4 (VAR_0);



  FUNC_8 ();



  VAR_8 = FUNC_12 (VAR_3);
  VAR_7 = FUNC_3 (VAR_2, (void *) VAR_8);
  for (VAR_5 = VAR_1; VAR_5; VAR_5 = VAR_5->next)
    if (FUNC_11 (VAR_5))
      {
 FUNC_7 (VAR_5->ptid);




 FUNC_5 ("\nThread %d (%s):\n", VAR_5->num,
    FUNC_9 (VAR_0));

 FUNC_2 (VAR_3, VAR_4);
 FUNC_6 (VAR_3, VAR_8);
      }

  FUNC_0 (VAR_7);
  FUNC_0 (VAR_6);
}
