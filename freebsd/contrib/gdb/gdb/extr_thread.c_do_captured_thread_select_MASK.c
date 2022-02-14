
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_out {int dummy; } ;
struct thread_info {int ptid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 struct thread_info* FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ) ;
 char* FUNC_7 (int ) ;
 char* FUNC_8 (int ) ;
 int FUNC_9 (struct thread_info*) ;
 int FUNC_10 (struct ui_out*,char*,int ) ;
 int FUNC_11 (struct ui_out*,char*) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int
FUNC_13 (struct ui_out *VAR_3, void *VAR_4)
{
  int VAR_5;
  struct thread_info *VAR_6;

  VAR_5 = FUNC_12 (FUNC_3 (VAR_4));

  VAR_6 = FUNC_1 (VAR_5);

  if (!VAR_6)
    FUNC_0 ("Thread ID %d not known.", VAR_5);

  if (!FUNC_9 (VAR_6))
    FUNC_0 ("Thread ID %d has terminated.\n", VAR_5);

  FUNC_6 (VAR_6->ptid);

  FUNC_11 (VAR_3, "[Switching to thread ");
  FUNC_10 (VAR_3, "new-thread-id", FUNC_4 (VAR_2));
  FUNC_11 (VAR_3, " (");



  FUNC_11 (VAR_3, FUNC_7 (VAR_2));

  FUNC_11 (VAR_3, ")]");

  FUNC_5 (VAR_1,
       FUNC_2 (VAR_1), 1);
  return VAR_0;
}
