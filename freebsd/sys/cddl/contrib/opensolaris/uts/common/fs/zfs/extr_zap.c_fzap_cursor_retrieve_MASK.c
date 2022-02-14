
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_11__ ;


typedef int zap_t ;
struct TYPE_20__ {int l_rwlock; } ;
typedef TYPE_2__ zap_leaf_t ;
struct TYPE_21__ {unsigned long long zeh_hash; scalar_t__ zeh_num_integers; int zeh_integer_size; int zeh_cd; } ;
typedef TYPE_3__ zap_entry_handle_t ;
struct TYPE_22__ {scalar_t__ zc_hash; TYPE_2__* zc_leaf; int zc_cd; int zc_zapobj; int zc_objset; scalar_t__ zc_prefetch; } ;
typedef TYPE_4__ zap_cursor_t ;
struct TYPE_23__ {scalar_t__ za_num_integers; int za_name; int za_normalization_conflict; int za_first_integer; int za_integer_length; } ;
typedef TYPE_5__ zap_attribute_t ;
typedef int uint64_t ;
struct TYPE_19__ {int lh_prefix_len; scalar_t__ lh_prefix; } ;
struct TYPE_24__ {TYPE_1__ l_hdr; } ;
struct TYPE_18__ {int zap_freeblk; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,int ,int ,int,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,scalar_t__,int *,int ,TYPE_2__**) ;
 int FUNC_7 (TYPE_3__*,int *,int ,int *) ;
 int FUNC_8 (TYPE_3__*,int,int,int *) ;
 int FUNC_9 (int *,TYPE_3__*,int,int ) ;
 TYPE_11__* FUNC_10 (int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_11 (TYPE_2__*,scalar_t__,int ,TYPE_3__*) ;
 TYPE_7__* FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*) ;

int
FUNC_14(zap_t *VAR_5, zap_cursor_t *VAR_6, zap_attribute_t *VAR_7)
{
 int VAR_8 = VAR_0;
 zap_entry_handle_t VAR_9;
 zap_leaf_t *VAR_10;
 if (VAR_6->zc_hash == 0 && VAR_4 &&
     VAR_6->zc_prefetch && FUNC_10(VAR_5)->zap_freeblk > 2) {
  FUNC_3(VAR_6->zc_objset, VAR_6->zc_zapobj, 0, 0,
      FUNC_10(VAR_5)->zap_freeblk << FUNC_1(VAR_5),
      VAR_3);
 }

 if (VAR_6->zc_leaf &&
     (FUNC_2(VAR_6->zc_hash,
     FUNC_12(VAR_6->zc_leaf)->l_hdr.lh_prefix_len) !=
     FUNC_12(VAR_6->zc_leaf)->l_hdr.lh_prefix)) {
  FUNC_4(&VAR_6->zc_leaf->l_rwlock, VAR_2);
  FUNC_13(VAR_6->zc_leaf);
  VAR_6->zc_leaf = ((void*)0);
 }

again:
 if (VAR_6->zc_leaf == ((void*)0)) {
  VAR_8 = FUNC_6(VAR_5, VAR_6->zc_hash, ((void*)0), VAR_2,
      &VAR_6->zc_leaf);
  if (VAR_8 != 0)
   return (VAR_8);
 } else {
  FUNC_4(&VAR_6->zc_leaf->l_rwlock, VAR_2);
 }
 VAR_10 = VAR_6->zc_leaf;

 VAR_8 = FUNC_11(VAR_10, VAR_6->zc_hash, VAR_6->zc_cd, &VAR_9);

 if (VAR_8 == VAR_0) {
  uint64_t VAR_11 =
      (1ULL << (64 - FUNC_12(VAR_10)->l_hdr.lh_prefix_len)) - 1;
  VAR_6->zc_hash = (VAR_6->zc_hash & ~VAR_11) + VAR_11 + 1;
  VAR_6->zc_cd = 0;
  if (FUNC_12(VAR_10)->l_hdr.lh_prefix_len == 0 ||
      VAR_6->zc_hash == 0) {
   VAR_6->zc_hash = -1ULL;
  } else {
   FUNC_13(VAR_6->zc_leaf);
   VAR_6->zc_leaf = ((void*)0);
   goto again;
  }
 }

 if (VAR_8 == 0) {
  VAR_6->zc_hash = VAR_9.zeh_hash;
  VAR_6->zc_cd = VAR_9.zeh_cd;
  VAR_7->za_integer_length = VAR_9.zeh_integer_size;
  VAR_7->za_num_integers = VAR_9.zeh_num_integers;
  if (VAR_9.zeh_num_integers == 0) {
   VAR_7->za_first_integer = 0;
  } else {
   VAR_8 = FUNC_8(&VAR_9, 8, 1, &VAR_7->za_first_integer);
   FUNC_0(VAR_8 == 0 || VAR_8 == VAR_1);
  }
  VAR_8 = FUNC_9(VAR_5, &VAR_9,
      sizeof (VAR_7->za_name), VAR_7->za_name);
  FUNC_0(VAR_8 == 0);

  VAR_7->za_normalization_conflict =
      FUNC_7(&VAR_9,
      ((void*)0), VAR_7->za_name, VAR_5);
 }
 FUNC_5(&VAR_6->zc_leaf->l_rwlock);
 return (VAR_8);
}
