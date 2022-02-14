
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int* now; TYPE_2__* key_cache; int * msg_cache; TYPE_1__* rrset_cache; } ;
struct worker {TYPE_3__ env; } ;
struct del_info {size_t len; int labs; int expired; scalar_t__ num_keys; scalar_t__ num_msgs; scalar_t__ num_rrsets; int * name; struct worker* worker; } ;
struct TYPE_5__ {int * slab; } ;
struct TYPE_4__ {int table; } ;
typedef int RES ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int **,size_t*,int*) ;
 int FUNC_2 (int *,int,int *,struct del_info*) ;
 int FUNC_3 (int *,char*,unsigned long,unsigned long,unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_4(RES* VAR_3, struct worker* VAR_4, char* VAR_5)
{
 uint8_t* VAR_6;
 int VAR_7;
 size_t VAR_8;
 struct del_info VAR_9;
 if(!FUNC_1(VAR_3, VAR_5, &VAR_6, &VAR_8, &VAR_7))
  return;


 VAR_9.worker = VAR_4;
 VAR_9.name = VAR_6;
 VAR_9.len = VAR_8;
 VAR_9.labs = VAR_7;
 VAR_9.expired = *VAR_4->env.now;
 VAR_9.expired -= 3;
 VAR_9.num_rrsets = 0;
 VAR_9.num_msgs = 0;
 VAR_9.num_keys = 0;
 FUNC_2(&VAR_4->env.rrset_cache->table, 1,
  &VAR_2, &VAR_9);

 FUNC_2(VAR_4->env.msg_cache, 1, &VAR_1, &VAR_9);


 if(VAR_4->env.key_cache) {
  FUNC_2(VAR_4->env.key_cache->slab, 1,
   &VAR_0, &VAR_9);
 }

 FUNC_0(VAR_6);

 (void)FUNC_3(VAR_3, "ok removed %lu rrsets, %lu messages "
  "and %lu key entries\n", (unsigned long)VAR_9.num_rrsets,
  (unsigned long)VAR_9.num_msgs, (unsigned long)VAR_9.num_keys);
}
