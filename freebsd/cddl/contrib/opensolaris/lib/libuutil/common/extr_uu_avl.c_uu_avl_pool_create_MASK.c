
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uu_compare_fn_t ;
struct TYPE_7__ {void* ua_prev_enc; void* ua_next_enc; } ;
struct TYPE_6__ {size_t uap_nodeoffset; size_t uap_objsize; int uap_debug; struct TYPE_6__* uap_next; struct TYPE_6__* uap_prev; TYPE_5__ uap_null_avl; int uap_lock; scalar_t__ uap_last_index; int * uap_cmp; int uap_name; } ;
typedef TYPE_1__ uu_avl_pool_t ;
typedef int uu_avl_node_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char const*,int) ;
 int VAR_5 ;
 int FUNC_5 (char const*,int ) ;
 TYPE_1__ VAR_6 ;
 int FUNC_6 (int ) ;
 TYPE_1__* FUNC_7 (int) ;

uu_avl_pool_t *
FUNC_8(const char *VAR_7, size_t VAR_8, size_t VAR_9,
    uu_compare_fn_t *VAR_10, uint32_t VAR_11)
{
 uu_avl_pool_t *VAR_12, *VAR_13, *VAR_14;

 if (VAR_7 == ((void*)0) ||
     FUNC_5(VAR_7, VAR_4) == -1 ||
     VAR_9 + sizeof (uu_avl_node_t) > VAR_8 ||
     VAR_10 == ((void*)0)) {
  FUNC_6(VAR_1);
  return (((void*)0));
 }

 if (VAR_11 & ~VAR_0) {
  FUNC_6(VAR_3);
  return (((void*)0));
 }

 VAR_12 = FUNC_7(sizeof (uu_avl_pool_t));
 if (VAR_12 == ((void*)0)) {
  FUNC_6(VAR_2);
  return (((void*)0));
 }

 (void) FUNC_4(VAR_12->uap_name, VAR_7, sizeof (VAR_12->uap_name));
 VAR_12->uap_nodeoffset = VAR_9;
 VAR_12->uap_objsize = VAR_8;
 VAR_12->uap_cmp = VAR_10;
 if (VAR_11 & VAR_0)
  VAR_12->uap_debug = 1;
 VAR_12->uap_last_index = 0;

 (void) FUNC_1(&VAR_12->uap_lock, ((void*)0));

 VAR_12->uap_null_avl.ua_next_enc = FUNC_0(&VAR_12->uap_null_avl);
 VAR_12->uap_null_avl.ua_prev_enc = FUNC_0(&VAR_12->uap_null_avl);

 (void) FUNC_2(&VAR_5);
 VAR_12->uap_next = VAR_13 = &VAR_6;
 VAR_12->uap_prev = VAR_14 = VAR_13->uap_prev;
 VAR_13->uap_prev = VAR_12;
 VAR_14->uap_next = VAR_12;
 (void) FUNC_3(&VAR_5);

 return (VAR_12);
}
