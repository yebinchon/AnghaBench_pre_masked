
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ddloc_mem {long loc_loc; long loc_seek; } ;
struct TYPE_5__ {long dd_seek; long dd_loc; TYPE_1__* dd_td; } ;
struct TYPE_4__ {int td_locq; } ;
typedef TYPE_2__ DIR ;


 struct ddloc_mem* FUNC_0 (int *) ;

void
FUNC_1(DIR *VAR_0, long VAR_1, long VAR_2)
{
 struct ddloc_mem *VAR_3;

 VAR_3 = FUNC_0(&VAR_0->dd_td->td_locq);
 if (VAR_3 != ((void*)0)) {
  if (VAR_3->loc_loc == VAR_2 &&
      VAR_3->loc_seek == VAR_1) {
   VAR_3->loc_seek = VAR_0->dd_seek;
   VAR_3->loc_loc = VAR_0->dd_loc;
  }
 }
}
