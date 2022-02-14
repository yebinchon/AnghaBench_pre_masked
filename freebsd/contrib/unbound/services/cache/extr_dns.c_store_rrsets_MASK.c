
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_5__ {int lock; } ;
struct TYPE_4__ {int type; } ;
struct ub_packed_rrset_key {TYPE_2__ entry; int id; TYPE_1__ rk; } ;
struct reply_info {size_t rrset_count; TYPE_3__* ref; struct ub_packed_rrset_key** rrsets; } ;
struct regional {int dummy; } ;
struct module_env {int alloc; int rrset_cache; } ;
struct TYPE_6__ {struct ub_packed_rrset_key* key; int id; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 struct ub_packed_rrset_key* FUNC_3 (struct ub_packed_rrset_key*,struct regional*,scalar_t__) ;
 int FUNC_4 (int ,TYPE_3__*,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_5(struct module_env* VAR_1, struct reply_info* VAR_2, time_t VAR_3,
 time_t VAR_4, int VAR_5, struct reply_info* VAR_6,
 struct regional* VAR_7)
{
        size_t VAR_8;

        for(VAR_8=0; VAR_8<VAR_2->rrset_count; VAR_8++) {
                VAR_2->ref[VAR_8].key = VAR_2->rrsets[VAR_8];
                VAR_2->ref[VAR_8].id = VAR_2->rrsets[VAR_8]->id;

  switch(FUNC_4(VAR_1->rrset_cache, &VAR_2->ref[VAR_8],
                        VAR_1->alloc, VAR_3 + ((FUNC_2(VAR_2->ref[VAR_8].key->rk.type)==
   VAR_0 && !VAR_5)?0:VAR_4))) {
  case 0:
   break;
  case 2:
   if(VAR_7) {
    struct ub_packed_rrset_key* VAR_9;
    FUNC_0(&VAR_2->ref[VAR_8].key->entry.lock);

    if(VAR_2->ref[VAR_8].key->id == 0)
     VAR_9 = ((void*)0);
    else VAR_9 = FUNC_3(
     VAR_2->ref[VAR_8].key, VAR_7, VAR_3);
    FUNC_1(&VAR_2->ref[VAR_8].key->entry.lock);
    if(VAR_9) {

     VAR_6->rrsets[VAR_8] = VAR_9;
    }
   }




  case 1:
                        VAR_2->rrsets[VAR_8] = VAR_2->ref[VAR_8].key;
  }
        }
}
