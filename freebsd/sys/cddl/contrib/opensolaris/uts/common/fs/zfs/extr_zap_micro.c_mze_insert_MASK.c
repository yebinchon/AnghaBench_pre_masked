
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int zap_avl; } ;
struct TYPE_13__ {int zap_ismicro; TYPE_1__ zap_m; int zap_rwlock; } ;
typedef TYPE_2__ zap_t ;
typedef int uint64_t ;
struct TYPE_14__ {int mze_chunkid; int mze_cd; int mze_hash; } ;
typedef TYPE_3__ mzap_ent_t ;
typedef int avl_index_t ;
struct TYPE_15__ {scalar_t__* mze_name; int mze_cd; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_9__* FUNC_1 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,TYPE_3__*,int *) ;
 int FUNC_4 (int *,TYPE_3__*,int ) ;
 TYPE_3__* FUNC_5 (int,int ) ;
 int FUNC_6 (TYPE_3__*,int) ;

__attribute__((used)) static int
FUNC_7(zap_t *VAR_2, int VAR_3, uint64_t VAR_4)
{
 avl_index_t VAR_5;

 FUNC_0(VAR_2->zap_ismicro);
 FUNC_0(FUNC_2(&VAR_2->zap_rwlock));

 mzap_ent_t *VAR_6 = FUNC_5(sizeof (mzap_ent_t), VAR_1);
 VAR_6->mze_chunkid = VAR_3;
 VAR_6->mze_hash = VAR_4;
 VAR_6->mze_cd = FUNC_1(VAR_2, VAR_6)->mze_cd;
 FUNC_0(FUNC_1(VAR_2, VAR_6)->mze_name[0] != 0);
 if (FUNC_3(&VAR_2->zap_m.zap_avl, VAR_6, &VAR_5) != ((void*)0)) {
  FUNC_6(VAR_6, sizeof (mzap_ent_t));
  return (VAR_0);
 }
 FUNC_4(&VAR_2->zap_m.zap_avl, VAR_6, VAR_5);
 return (0);
}
