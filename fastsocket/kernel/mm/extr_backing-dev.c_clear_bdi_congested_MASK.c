
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wait_queue_head_t ;
struct backing_dev_info {int state; } ;
typedef enum bdi_state { ____Placeholder_bdi_state } bdi_state ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct backing_dev_info *VAR_4, int VAR_5)
{
 enum bdi_state VAR_6;
 wait_queue_head_t *VAR_7 = &VAR_2[VAR_5];

 VAR_6 = VAR_5 ? VAR_1 : VAR_0;
 if (FUNC_2(VAR_6, &VAR_4->state))
  FUNC_0(&VAR_3[VAR_5]);
 FUNC_1();
 if (FUNC_3(VAR_7))
  FUNC_4(VAR_7);
}
