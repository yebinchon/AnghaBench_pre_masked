
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_attr {int dummy; } ;
typedef int pid_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct perf_event_attr*,int ,int,int,int,unsigned long) ;

void FUNC_2(struct perf_event_attr *VAR_1, pid_t VAR_2, int VAR_3,
       int VAR_4, int VAR_5, unsigned long VAR_6)
{
 int VAR_7 = VAR_0;

 if (FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6))
  FUNC_0("test attr FAILED");

 VAR_0 = VAR_7;
}
