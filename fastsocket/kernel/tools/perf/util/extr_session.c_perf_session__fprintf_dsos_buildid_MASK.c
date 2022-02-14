
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_session {int machines; int host_machine; } ;
typedef int FILE ;


 size_t FUNC_0 (int *,int *,int) ;
 size_t FUNC_1 (int *,int *,int) ;

size_t FUNC_2(struct perf_session *VAR_0, FILE *VAR_1,
       bool VAR_2)
{
 size_t VAR_3 = FUNC_0(&VAR_0->host_machine, VAR_1, VAR_2);
 return VAR_3 + FUNC_1(&VAR_0->machines, VAR_1, VAR_2);
}
