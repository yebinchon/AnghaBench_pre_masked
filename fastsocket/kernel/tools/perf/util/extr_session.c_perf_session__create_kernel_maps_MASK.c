
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_session {int machines; int host_machine; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct perf_session *VAR_0)
{
 int VAR_1 = FUNC_0(&VAR_0->host_machine);

 if (VAR_1 >= 0)
  VAR_1 = FUNC_1(&VAR_0->machines);
 return VAR_1;
}
