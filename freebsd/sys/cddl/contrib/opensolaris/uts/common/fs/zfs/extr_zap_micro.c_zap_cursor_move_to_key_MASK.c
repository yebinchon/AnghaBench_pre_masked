
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int zap_name_t ;
struct TYPE_8__ {TYPE_3__* zc_zap; int zc_cd; int zc_hash; int zc_zapobj; int zc_objset; } ;
typedef TYPE_1__ zap_cursor_t ;
struct TYPE_9__ {int mze_cd; int mze_hash; } ;
typedef TYPE_2__ mzap_ent_t ;
typedef int matchtype_t ;
struct TYPE_10__ {int zap_rwlock; int zap_ismicro; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__*,int *) ;
 TYPE_2__* FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int *,int ,int ,int ,int ,TYPE_3__**) ;
 int * FUNC_6 (TYPE_3__*,char const*,int ) ;
 int FUNC_7 (int *) ;

int
FUNC_8(zap_cursor_t *VAR_6, const char *VAR_7, matchtype_t VAR_8)
{
 int VAR_9 = 0;
 mzap_ent_t *VAR_10;
 zap_name_t *VAR_11;

 if (VAR_6->zc_zap == ((void*)0)) {
  VAR_9 = FUNC_5(VAR_6->zc_objset, VAR_6->zc_zapobj, ((void*)0),
      VAR_4, VAR_5, VAR_2, VAR_3, &VAR_6->zc_zap);
  if (VAR_9)
   return (VAR_9);
 } else {
  FUNC_3(&VAR_6->zc_zap->zap_rwlock, VAR_4);
 }

 VAR_11 = FUNC_6(VAR_6->zc_zap, VAR_7, VAR_8);
 if (VAR_11 == ((void*)0)) {
  FUNC_4(&VAR_6->zc_zap->zap_rwlock);
  return (FUNC_0(VAR_1));
 }

 if (!VAR_6->zc_zap->zap_ismicro) {
  VAR_9 = FUNC_1(VAR_6, VAR_11);
 } else {
  VAR_10 = FUNC_2(VAR_11);
  if (VAR_10 == ((void*)0)) {
   VAR_9 = FUNC_0(VAR_0);
   goto out;
  }
  VAR_6->zc_hash = VAR_10->mze_hash;
  VAR_6->zc_cd = VAR_10->mze_cd;
 }

out:
 FUNC_7(VAR_11);
 FUNC_4(&VAR_6->zc_zap->zap_rwlock);
 return (VAR_9);
}
