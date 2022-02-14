
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xpt_task {int task; } ;
struct TYPE_2__ {scalar_t__ buses_to_config; int buses_config_done; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,struct xpt_task*) ;
 struct xpt_task* FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 TYPE_1__ VAR_4 ;

void
FUNC_5(void)
{
 FUNC_3();
 VAR_4.buses_to_config--;
 if (VAR_4.buses_to_config == 0 && VAR_4.buses_config_done == 0) {
  struct xpt_task *VAR_5;

  VAR_4.buses_config_done = 1;
  FUNC_4();

  VAR_5 = FUNC_1(sizeof(struct xpt_task), VAR_0, VAR_1);
  if (VAR_5 != ((void*)0)) {
   FUNC_0(&VAR_5->task, 0, VAR_3, VAR_5);
   FUNC_2(VAR_2, &VAR_5->task);
  }
 } else
  FUNC_4();
}
