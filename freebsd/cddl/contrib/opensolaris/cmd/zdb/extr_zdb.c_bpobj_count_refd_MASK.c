
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u_longlong_t ;
typedef int subobj ;
struct TYPE_7__ {scalar_t__ bpo_object; int bpo_os; TYPE_1__* bpo_phys; scalar_t__ bpo_havesubobj; } ;
typedef TYPE_2__ bpobj_t ;
struct TYPE_6__ {scalar_t__ bpo_subobjs; int bpo_num_subobjs; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int FUNC_3 (int ,scalar_t__,int,int,int*,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (char*,int,int ) ;

__attribute__((used)) static void
FUNC_6(bpobj_t *VAR_0)
{
 FUNC_4(VAR_0->bpo_object);

 if (VAR_0->bpo_havesubobj && VAR_0->bpo_phys->bpo_subobjs != 0) {
  FUNC_4(VAR_0->bpo_phys->bpo_subobjs);
  for (uint64_t VAR_1 = 0; VAR_1 < VAR_0->bpo_phys->bpo_num_subobjs; VAR_1++) {
   uint64_t VAR_2;
   bpobj_t VAR_3;
   int VAR_4;
   FUNC_0(FUNC_3(VAR_0->bpo_os,
       VAR_0->bpo_phys->bpo_subobjs,
       VAR_1 * sizeof (VAR_2), sizeof (VAR_2), &VAR_2, 0));
   VAR_4 = FUNC_2(&VAR_3, VAR_0->bpo_os, VAR_2);
   if (VAR_4 != 0) {
    (void) FUNC_5("ERROR %u while trying to open "
        "subobj id %llu\n",
        VAR_4, (u_longlong_t)VAR_2);
    continue;
   }
   FUNC_6(&VAR_3);
   FUNC_1(&VAR_3);
  }
 }
}
