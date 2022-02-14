
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_attr {int config; int type; } ;
typedef int attr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct perf_event_attr*,int ,int) ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct perf_event_attr*,int ,int,int,int ) ;

__attribute__((used)) static int FUNC_4(void)
{
 struct perf_event_attr VAR_3;
 int VAR_4;

 FUNC_0(&VAR_3, 0, sizeof(VAR_3));

 VAR_3.type = VAR_1;
 VAR_3.config = VAR_0;

 VAR_4 = FUNC_3(&VAR_3, 0, -1, -1, 0);

 if (VAR_4 < 0)
  FUNC_1("Error: sys_perf_event_open() syscall returned "
         "with %d (%s)\n", VAR_4, FUNC_2(VAR_2));
 return VAR_4;
}
