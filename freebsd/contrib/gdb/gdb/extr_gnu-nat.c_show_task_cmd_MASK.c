
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inf {scalar_t__ pause_sc; scalar_t__ detach_sc; scalar_t__ default_thread_detach_sc; scalar_t__ task; } ;


 int FUNC_0 (char*,char*) ;
 struct inf* FUNC_1 () ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int) ;

__attribute__((used)) static void
FUNC_11 (char *VAR_0, int VAR_1)
{
  struct inf *VAR_2 = FUNC_1 ();

  FUNC_0 (VAR_0, "show task");

  FUNC_4 (0, VAR_1);
  FUNC_2 (0, VAR_1);
  FUNC_7 (0, VAR_1);

  if (VAR_2->pause_sc == 0)
    FUNC_9 (0, VAR_1);
  FUNC_10 (0, VAR_1);

  if (VAR_2->task)
    {
      FUNC_5 (0, VAR_1);
      FUNC_3 (0, VAR_1);
    }

  if (VAR_2->detach_sc != 0)
    FUNC_6 (0, VAR_1);
  if (VAR_2->default_thread_detach_sc != 0)
    FUNC_8 (0, VAR_1);
}
