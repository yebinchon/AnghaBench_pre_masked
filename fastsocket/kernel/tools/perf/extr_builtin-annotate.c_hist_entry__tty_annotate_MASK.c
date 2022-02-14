
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_annotate {int full_paths; int print_line; } ;
struct TYPE_2__ {int map; int sym; } ;
struct hist_entry {TYPE_1__ ms; } ;


 int FUNC_0 (int ,int ,int,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct hist_entry *VAR_0, int VAR_1,
        struct perf_annotate *VAR_2)
{
 return FUNC_0(VAR_0->ms.sym, VAR_0->ms.map, VAR_1,
        VAR_2->print_line, VAR_2->full_paths, 0, 0);
}
