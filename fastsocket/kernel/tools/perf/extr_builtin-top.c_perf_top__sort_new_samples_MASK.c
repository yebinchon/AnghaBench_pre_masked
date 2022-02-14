
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct perf_top {int hide_kernel_symbols; int hide_user_symbols; TYPE_2__* sym_evsel; TYPE_1__* evlist; } ;
struct TYPE_4__ {int hists; } ;
struct TYPE_3__ {TYPE_2__* selected; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct perf_top*) ;

__attribute__((used)) static void FUNC_4(void *VAR_0)
{
 struct perf_top *VAR_1 = VAR_0;
 FUNC_3(VAR_1);

 if (VAR_1->evlist->selected != ((void*)0))
  VAR_1->sym_evsel = VAR_1->evlist->selected;

 FUNC_0(&VAR_1->sym_evsel->hists);
 FUNC_2(&VAR_1->sym_evsel->hists);
 FUNC_1(&VAR_1->sym_evsel->hists,
          VAR_1->hide_user_symbols,
          VAR_1->hide_kernel_symbols);
}
