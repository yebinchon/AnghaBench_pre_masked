
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int zn_key_orig_numints; int zn_key_intlen; int zn_hash; } ;
typedef TYPE_1__ zap_name_t ;
typedef int zap_leaf_t ;
struct TYPE_9__ {int zeh_cd; int zeh_hash; } ;
typedef TYPE_2__ zap_entry_handle_t ;
struct TYPE_10__ {int zc_cd; int zc_hash; int * zc_leaf; int zc_zap; } ;
typedef TYPE_3__ zap_cursor_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int *,int ,int **) ;
 int FUNC_2 (int *,TYPE_1__*,TYPE_2__*) ;

int
FUNC_3(zap_cursor_t *VAR_3, zap_name_t *VAR_4)
{
 int VAR_5;
 zap_leaf_t *VAR_6;
 zap_entry_handle_t VAR_7;

 if (VAR_4->zn_key_orig_numints * VAR_4->zn_key_intlen > VAR_2)
  return (FUNC_0(VAR_0));

 VAR_5 = FUNC_1(VAR_3->zc_zap, VAR_4->zn_hash, ((void*)0), VAR_1, &VAR_6);
 if (VAR_5 != 0)
  return (VAR_5);

 VAR_5 = FUNC_2(VAR_6, VAR_4, &VAR_7);
 if (VAR_5 != 0)
  return (VAR_5);

 VAR_3->zc_leaf = VAR_6;
 VAR_3->zc_hash = VAR_7.zeh_hash;
 VAR_3->zc_cd = VAR_7.zeh_cd;

 return (VAR_5);
}
