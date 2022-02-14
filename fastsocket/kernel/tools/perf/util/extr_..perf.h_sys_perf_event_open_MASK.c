
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_attr {int dummy; } ;
typedef int pid_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct perf_event_attr*,int ,int,int,unsigned long) ;
 int VAR_1 ;
 int FUNC_1 (struct perf_event_attr*,int ,int,int,int,unsigned long) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static inline int
FUNC_3(struct perf_event_attr *VAR_2,
        pid_t VAR_3, int VAR_4, int VAR_5,
        unsigned long VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_0(VAR_0, VAR_2, VAR_3, VAR_4,
       VAR_5, VAR_6);



 if (FUNC_2(VAR_1))
  FUNC_1(VAR_2, VAR_3, VAR_4, VAR_7, VAR_5, VAR_6);


 return VAR_7;
}
