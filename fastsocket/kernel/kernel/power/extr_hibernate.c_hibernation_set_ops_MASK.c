
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_hibernation_ops {scalar_t__ restore_cleanup; scalar_t__ pre_restore; scalar_t__ enter; scalar_t__ finish; scalar_t__ prepare; scalar_t__ pre_snapshot; scalar_t__ end; scalar_t__ begin; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 struct platform_hibernation_ops* VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;

void FUNC_3(struct platform_hibernation_ops *VAR_5)
{
 if (VAR_5 && !(VAR_5->begin && VAR_5->end && VAR_5->pre_snapshot
     && VAR_5->prepare && VAR_5->finish && VAR_5->enter && VAR_5->pre_restore
     && VAR_5->restore_cleanup)) {
  FUNC_0(1);
  return;
 }
 FUNC_1(&VAR_4);
 VAR_3 = VAR_5;
 if (VAR_5)
  VAR_2 = VAR_0;
 else if (VAR_2 == VAR_0)
  VAR_2 = VAR_1;

 FUNC_2(&VAR_4);
}
