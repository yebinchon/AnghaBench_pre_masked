
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ prio; scalar_t__ hash; } ;
struct t4_filter {TYPE_1__ fs; } ;
struct TYPE_4__ {int * ftid_tab; int * hpftid_tab; int * hftid_hash_4t; } ;
struct adapter {int flags; TYPE_2__ tids; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct adapter*,struct t4_filter*) ;
 int FUNC_1 (struct adapter*,struct t4_filter*) ;
 scalar_t__ FUNC_2 (struct adapter*) ;

int
FUNC_3(struct adapter *VAR_2, struct t4_filter *VAR_3)
{


 if (!(VAR_2->flags & VAR_1))
  return (VAR_0);





 if (VAR_3->fs.hash) {
  if (VAR_2->tids.hftid_hash_4t != ((void*)0))
   return (FUNC_0(VAR_2, VAR_3));
 } else if (FUNC_2(VAR_2) && VAR_3->fs.prio) {
  if (VAR_2->tids.hpftid_tab != ((void*)0))
   return (FUNC_1(VAR_2, VAR_3));
 } else {
  if (VAR_2->tids.ftid_tab != ((void*)0))
   return (FUNC_1(VAR_2, VAR_3));
 }

 return (VAR_0);
}
