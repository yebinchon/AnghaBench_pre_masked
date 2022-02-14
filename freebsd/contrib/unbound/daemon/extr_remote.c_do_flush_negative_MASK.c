
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int* now; TYPE_2__* key_cache; int * msg_cache; TYPE_1__* rrset_cache; } ;
struct worker {TYPE_3__ env; } ;
struct del_info {int expired; scalar_t__ num_keys; scalar_t__ num_msgs; scalar_t__ num_rrsets; struct worker* worker; } ;
struct TYPE_5__ {int * slab; } ;
struct TYPE_4__ {int table; } ;
typedef int RES ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int *,struct del_info*) ;
 int FUNC_1 (int *,char*,unsigned long,unsigned long,unsigned long) ;

__attribute__((used)) static void
FUNC_2(RES* VAR_3, struct worker* VAR_4)
{
 struct del_info VAR_5;

 VAR_5.worker = VAR_4;
 VAR_5.expired = *VAR_4->env.now;
 VAR_5.expired -= 3;
 VAR_5.num_rrsets = 0;
 VAR_5.num_msgs = 0;
 VAR_5.num_keys = 0;
 FUNC_0(&VAR_4->env.rrset_cache->table, 1,
  &VAR_2, &VAR_5);

 FUNC_0(VAR_4->env.msg_cache, 1, &VAR_1, &VAR_5);


 if(VAR_4->env.key_cache) {
  FUNC_0(VAR_4->env.key_cache->slab, 1,
   &VAR_0, &VAR_5);
 }

 (void)FUNC_1(VAR_3, "ok removed %lu rrsets, %lu messages "
  "and %lu key entries\n", (unsigned long)VAR_5.num_rrsets,
  (unsigned long)VAR_5.num_msgs, (unsigned long)VAR_5.num_keys);
}
