
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_out {int dummy; } ;
struct thread_info {int num; struct thread_info* next; } ;
struct cleanup {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cleanup*) ;
 struct cleanup* FUNC_1 (struct ui_out*,char*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct thread_info* VAR_1 ;
 int FUNC_4 (struct ui_out*,char*,int) ;

__attribute__((used)) static int
FUNC_5 (struct ui_out *VAR_2, void *VAR_3)
{
  struct thread_info *VAR_4;
  int VAR_5 = 0;
  struct cleanup *VAR_6;

  FUNC_2 ();
  FUNC_3 ();

  VAR_6 = FUNC_1 (VAR_2, "thread-ids");

  for (VAR_4 = VAR_1; VAR_4; VAR_4 = VAR_4->next)
    {
      VAR_5++;
      FUNC_4 (VAR_2, "thread-id", VAR_4->num);
    }

  FUNC_0 (VAR_6);
  FUNC_4 (VAR_2, "number-of-threads", VAR_5);
  return VAR_0;
}
