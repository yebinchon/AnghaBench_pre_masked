
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct backing_dev_info {int state; } ;
typedef enum bdi_state { ____Placeholder_bdi_state } bdi_state ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * VAR_2 ;
 int FUNC_1 (int,int *) ;

void FUNC_2(struct backing_dev_info *VAR_3, int VAR_4)
{
 enum bdi_state VAR_5;

 VAR_5 = VAR_4 ? VAR_1 : VAR_0;
 if (!FUNC_1(VAR_5, &VAR_3->state))
  FUNC_0(&VAR_2[VAR_4]);
}
