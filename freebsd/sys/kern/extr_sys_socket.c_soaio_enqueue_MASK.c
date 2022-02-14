
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task {scalar_t__ ta_pending; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,struct task*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ,int *) ;
 int VAR_8 ;
 int FUNC_5 (scalar_t__*) ;

void
FUNC_6(struct task *VAR_9)
{

 FUNC_2(&VAR_2);
 FUNC_0(VAR_9->ta_pending == 0);
 VAR_9->ta_pending++;
 FUNC_1(&VAR_1, VAR_9, VAR_7);
 VAR_6++;
 if (VAR_6 <= VAR_0)
  FUNC_5(&VAR_0);
 else if (VAR_5 < VAR_4)
  FUNC_4(VAR_8, &VAR_3);
 FUNC_3(&VAR_2);
}
