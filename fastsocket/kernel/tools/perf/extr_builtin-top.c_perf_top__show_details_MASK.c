
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct symbol {char* name; } ;
struct perf_top {int sym_pcnt_filter; TYPE_2__* sym_evsel; scalar_t__ zero; int print_entries; struct hist_entry* sym_filter_entry; } ;
struct TYPE_3__ {int map; struct symbol* sym; } ;
struct hist_entry {TYPE_1__ ms; } ;
struct annotation {int lock; int * src; } ;
struct TYPE_4__ {int idx; } ;


 char* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct symbol*,int ) ;
 int FUNC_5 (struct symbol*,int ,int ,int ,int,int ,int) ;
 int FUNC_6 (struct symbol*,int ) ;
 struct annotation* FUNC_7 (struct symbol*) ;

__attribute__((used)) static void FUNC_8(struct perf_top *VAR_0)
{
 struct hist_entry *VAR_1 = VAR_0->sym_filter_entry;
 struct annotation *VAR_2;
 struct symbol *VAR_3;
 int VAR_4;

 if (!VAR_1)
  return;

 VAR_3 = VAR_1->ms.sym;
 VAR_2 = FUNC_7(VAR_3);

 FUNC_2(&VAR_2->lock);

 if (VAR_2->src == ((void*)0))
  goto out_unlock;

 FUNC_1("Showing %s for %s\n", FUNC_0(VAR_0->sym_evsel), VAR_3->name);
 FUNC_1("  Events  Pcnt (>=%d%%)\n", VAR_0->sym_pcnt_filter);

 VAR_4 = FUNC_5(VAR_3, VAR_1->ms.map, VAR_0->sym_evsel->idx,
           0, VAR_0->sym_pcnt_filter, VAR_0->print_entries, 4);
 if (VAR_0->zero)
  FUNC_6(VAR_3, VAR_0->sym_evsel->idx);
 else
  FUNC_4(VAR_3, VAR_0->sym_evsel->idx);
 if (VAR_4 != 0)
  FUNC_1("%d lines not displayed, maybe increase display entries [e]\n", VAR_4);
out_unlock:
 FUNC_3(&VAR_2->lock);
}
