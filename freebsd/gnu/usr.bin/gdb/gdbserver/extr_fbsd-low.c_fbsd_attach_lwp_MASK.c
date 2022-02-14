
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct process_info {int stop_expected; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int,struct process_info*) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int,char*,int) ;
 scalar_t__ FUNC_5 (int ,int,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_6 (int) ;
 int VAR_4 ;

void
FUNC_7 (int VAR_5, int VAR_6)
{
  struct process_info *VAR_7;

  if (FUNC_5 (VAR_0, VAR_5, 0, 0) != 0)
    {
      FUNC_4 (VAR_2, "Cannot attach to process %d: %s (%d)\n", VAR_5,
        FUNC_6 (VAR_1), VAR_1);
      FUNC_3 (VAR_2);


      if (!VAR_4)
 FUNC_0 (0177);
      return;
    }

  VAR_7 = (struct process_info *) FUNC_1 (VAR_5);
  FUNC_2 (VAR_6, VAR_7);
  if (! VAR_3)
    VAR_7->stop_expected = 1;
}
