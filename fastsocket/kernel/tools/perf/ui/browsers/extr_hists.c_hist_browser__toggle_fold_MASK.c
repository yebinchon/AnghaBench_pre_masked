
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ unfolded; } ;
struct hist_entry {scalar_t__ nr_rows; int sorted_chain; TYPE_1__ ms; } ;
struct TYPE_5__ {int nr_entries; } ;
struct hist_browser {TYPE_3__* hists; TYPE_2__ b; struct hist_entry* he_selection; int selection; } ;
struct TYPE_6__ {int nr_entries; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct hist_entry*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(struct hist_browser *VAR_0)
{
 if (FUNC_2(VAR_0->selection)) {
  struct hist_entry *VAR_1 = VAR_0->he_selection;

  FUNC_1(VAR_1);
  VAR_0->hists->nr_entries -= VAR_1->nr_rows;

  if (VAR_1->ms.unfolded)
   VAR_1->nr_rows = FUNC_0(&VAR_1->sorted_chain);
  else
   VAR_1->nr_rows = 0;
  VAR_0->hists->nr_entries += VAR_1->nr_rows;
  VAR_0->b.nr_entries = VAR_0->hists->nr_entries;

  return 1;
 }


 return 0;
}
