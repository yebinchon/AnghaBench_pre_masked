
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {void* ul_prev_enc; void* ul_next_enc; } ;
struct TYPE_6__ {size_t ulp_nodeoffset; size_t ulp_objsize; int ulp_debug; struct TYPE_6__* ulp_next; struct TYPE_6__* ulp_prev; TYPE_5__ ulp_null_list; int ulp_lock; scalar_t__ ulp_last_index; int * ulp_cmp; int ulp_name; } ;
typedef TYPE_1__ uu_list_pool_t ;
typedef int uu_list_node_t ;
typedef int uu_compare_fn_t ;
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
 int FUNC_5 (char const*,int ) ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_6 (int ) ;
 TYPE_1__* FUNC_7 (int) ;

uu_list_pool_t *
FUNC_8(const char *VAR_7, size_t VAR_8,
    size_t VAR_9, uu_compare_fn_t *VAR_10, uint32_t VAR_11)
{
 uu_list_pool_t *VAR_12, *VAR_13, *VAR_14;

 if (VAR_7 == ((void*)0) ||
     FUNC_5(VAR_7, VAR_4) == -1 ||
     VAR_9 + sizeof (uu_list_node_t) > VAR_8) {
  FUNC_6(VAR_0);
  return (((void*)0));
 }

 if (VAR_11 & ~VAR_3) {
  FUNC_6(VAR_2);
  return (((void*)0));
 }

 VAR_12 = FUNC_7(sizeof (uu_list_pool_t));
 if (VAR_12 == ((void*)0)) {
  FUNC_6(VAR_1);
  return (((void*)0));
 }

 (void) FUNC_4(VAR_12->ulp_name, VAR_7, sizeof (VAR_12->ulp_name));
 VAR_12->ulp_nodeoffset = VAR_9;
 VAR_12->ulp_objsize = VAR_8;
 VAR_12->ulp_cmp = VAR_10;
 if (VAR_11 & VAR_3)
  VAR_12->ulp_debug = 1;
 VAR_12->ulp_last_index = 0;

 (void) FUNC_1(&VAR_12->ulp_lock, ((void*)0));

 VAR_12->ulp_null_list.ul_next_enc = FUNC_0(&VAR_12->ulp_null_list);
 VAR_12->ulp_null_list.ul_prev_enc = FUNC_0(&VAR_12->ulp_null_list);

 (void) FUNC_2(&VAR_5);
 VAR_12->ulp_next = VAR_13 = &VAR_6;
 VAR_12->ulp_prev = VAR_14 = VAR_13->ulp_prev;
 VAR_13->ulp_prev = VAR_12;
 VAR_14->ulp_next = VAR_12;
 (void) FUNC_3(&VAR_5);

 return (VAR_12);
}
