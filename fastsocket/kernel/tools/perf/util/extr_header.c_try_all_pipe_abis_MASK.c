
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef scalar_t__ u64 ;
struct perf_header {int needs_swap; } ;


 scalar_t__* VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int FUNC_2(uint64_t VAR_1, struct perf_header *VAR_2)
{
 u64 VAR_3;
 int VAR_4;

 for (VAR_4 = 0 ; VAR_0[VAR_4]; VAR_4++) {
  if (VAR_1 != VAR_0[VAR_4]) {
   VAR_3 = FUNC_0(VAR_1);
   if (VAR_3 != VAR_1)
    continue;

   VAR_2->needs_swap = 1;
  }
  FUNC_1("Pipe ABI%d perf.data file detected\n", VAR_4);
  return 0;
 }
 return -1;
}
