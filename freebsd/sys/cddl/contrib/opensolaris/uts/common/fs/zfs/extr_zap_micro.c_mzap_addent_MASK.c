
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int zap_alloc_next; int zap_num_chunks; int zap_num_entries; } ;
struct TYPE_12__ {TYPE_1__ zap_m; int zap_rwlock; } ;
typedef TYPE_2__ zap_t ;
struct TYPE_13__ {int zn_hash; int zn_key_orig; TYPE_2__* zn_zap; } ;
typedef TYPE_3__ zap_name_t ;
typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_14__ {scalar_t__* mze_name; scalar_t__ mze_cd; int mze_value; } ;
typedef TYPE_4__ mzap_ent_phys_t ;
struct TYPE_15__ {TYPE_4__* mz_chunk; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int,int ) ;
 scalar_t__ FUNC_5 (int ,scalar_t__*) ;
 int FUNC_6 (scalar_t__*,int ) ;
 TYPE_6__* FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_9(zap_name_t *VAR_0, uint64_t VAR_1)
{
 zap_t *VAR_2 = VAR_0->zn_zap;
 int VAR_3 = VAR_2->zap_m.zap_alloc_next;

 FUNC_0(FUNC_1(&VAR_2->zap_rwlock));
 uint32_t VAR_4 = FUNC_3(VAR_2, VAR_0->zn_hash);

 FUNC_0(VAR_4 < FUNC_8(VAR_2));

again:
 for (int VAR_5 = VAR_3; VAR_5 < VAR_2->zap_m.zap_num_chunks; VAR_5++) {
  mzap_ent_phys_t *VAR_6 = &FUNC_7(VAR_2)->mz_chunk[VAR_5];
  if (VAR_6->mze_name[0] == 0) {
   VAR_6->mze_value = VAR_1;
   VAR_6->mze_cd = VAR_4;
   (void) FUNC_6(VAR_6->mze_name, VAR_0->zn_key_orig);
   VAR_2->zap_m.zap_num_entries++;
   VAR_2->zap_m.zap_alloc_next = VAR_5+1;
   if (VAR_2->zap_m.zap_alloc_next ==
       VAR_2->zap_m.zap_num_chunks)
    VAR_2->zap_m.zap_alloc_next = 0;
   FUNC_2(0 == FUNC_4(VAR_2, VAR_5, VAR_0->zn_hash));
   return;
  }
 }
 if (VAR_3 != 0) {
  VAR_3 = 0;
  goto again;
 }
 FUNC_0(!"out of entries!");
}
