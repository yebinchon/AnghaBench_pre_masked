
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hists {int * dso_filter; } ;
struct TYPE_4__ {TYPE_1__* map; } ;
struct hist_entry {int filtered; TYPE_2__ ms; } ;
struct TYPE_3__ {int * dso; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct hists *VAR_1,
           struct hist_entry *VAR_2)
{
 if (VAR_1->dso_filter != ((void*)0) &&
     (VAR_2->ms.map == ((void*)0) || VAR_2->ms.map->dso != VAR_1->dso_filter)) {
  VAR_2->filtered |= (1 << VAR_0);
  return 1;
 }

 return 0;
}
