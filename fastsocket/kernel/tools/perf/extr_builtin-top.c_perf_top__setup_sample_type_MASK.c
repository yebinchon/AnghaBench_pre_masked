
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct perf_top {int dont_use_callchains; int sort_has_symbols; } ;
struct TYPE_5__ {scalar_t__ mode; } ;
struct TYPE_4__ {scalar_t__ use_callchain; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct perf_top *VAR_4)
{
 if (!VAR_4->sort_has_symbols) {
  if (VAR_3.use_callchain) {
   FUNC_1("Selected -g but \"sym\" not present in --sort/-s.");
   return -VAR_1;
  }
 } else if (!VAR_4->dont_use_callchains && VAR_2.mode != VAR_0) {
  if (FUNC_0(&VAR_2) < 0) {
   FUNC_1("Can't register callchain params.\n");
   return -VAR_1;
  }
 }

 return 0;
}
