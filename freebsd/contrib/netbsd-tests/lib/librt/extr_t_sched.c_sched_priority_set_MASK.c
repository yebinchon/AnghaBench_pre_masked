
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_param {int sched_priority; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,struct sched_param*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int,struct sched_param*) ;

__attribute__((used)) static void
FUNC_5(int VAR_0, int VAR_1)
{
 struct sched_param VAR_2;

 VAR_2.sched_priority = VAR_0;

 FUNC_1(VAR_0 >= 0);
 FUNC_1(FUNC_4(0, VAR_1, &VAR_2) == 0);




 FUNC_0(FUNC_3(0), VAR_1);




 VAR_2.sched_priority = -1;

 FUNC_1(FUNC_2(0, &VAR_2) == 0);
 FUNC_0(VAR_2.sched_priority, VAR_0);
}
