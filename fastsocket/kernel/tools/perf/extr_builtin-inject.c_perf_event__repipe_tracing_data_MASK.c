
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union perf_event {int dummy; } perf_event ;
struct perf_tool {int dummy; } ;
struct perf_session {int dummy; } ;


 int FUNC_0 (struct perf_tool*,union perf_event*,struct perf_session*) ;
 int FUNC_1 (struct perf_tool*,union perf_event*) ;

__attribute__((used)) static int FUNC_2(struct perf_tool *VAR_0,
        union perf_event *VAR_1,
        struct perf_session *VAR_2)
{
 int VAR_3;

 FUNC_1(VAR_0, VAR_1);
 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);

 return VAR_3;
}
