
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_tool {int ordered_samples; int comm; int sample; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int,struct perf_tool*) ;
 int FUNC_1 (int ,struct perf_tool*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (char*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_4(void)
{
 struct perf_tool VAR_6 = {
  .sample = VAR_4,
  .comm = VAR_3,
  .ordered_samples = 1,
 };
 VAR_5 = FUNC_0(VAR_1, VAR_0, 0, 0, &VAR_6);
 if (!VAR_5) {
  FUNC_3("Initializing perf session failed\n");
  return -1;
 }

 if (FUNC_2(VAR_5, VAR_2)) {
  FUNC_3("Initializing perf session tracepoint handlers failed\n");
  return -1;
 }

 return FUNC_1(VAR_5, &VAR_6);
}
