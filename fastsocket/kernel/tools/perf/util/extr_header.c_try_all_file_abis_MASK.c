
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct perf_header {int needs_swap; } ;
struct perf_file_section {int dummy; } ;


 scalar_t__* VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,int,int) ;

__attribute__((used)) static int FUNC_2(uint64_t VAR_1, struct perf_header *VAR_2)
{
 uint64_t VAR_3, VAR_4;
 int VAR_5;

 for (VAR_5 = 0 ; VAR_0[VAR_5]; VAR_5++) {
  VAR_3 = VAR_0[VAR_5]
    + sizeof(struct perf_file_section);
  if (VAR_1 != VAR_3) {
   VAR_4 = FUNC_0(VAR_1);
   if (VAR_4 != VAR_3)
    continue;

   VAR_2->needs_swap = 1;
  }
  FUNC_1("ABI%d perf.data file detected, need_swap=%d\n",
    VAR_5,
    VAR_2->needs_swap);
  return 0;
 }

 return -1;
}
