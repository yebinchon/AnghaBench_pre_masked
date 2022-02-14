
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nr_entries; } ;
struct hist_browser {TYPE_1__ b; TYPE_2__* hists; } ;
struct TYPE_4__ {int nr_entries; } ;


 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(struct hist_browser *VAR_0, bool VAR_1)
{
 FUNC_0(VAR_0->hists, VAR_1);
 VAR_0->b.nr_entries = VAR_0->hists->nr_entries;

 FUNC_1(&VAR_0->b);
}
