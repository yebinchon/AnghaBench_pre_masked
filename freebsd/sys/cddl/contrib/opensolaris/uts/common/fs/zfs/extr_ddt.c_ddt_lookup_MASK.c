
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef enum ddt_type { ____Placeholder_ddt_type } ddt_type ;
typedef enum ddt_class { ____Placeholder_ddt_class } ddt_class ;
struct TYPE_15__ {int ddt_lock; int ddt_tree; } ;
typedef TYPE_1__ ddt_t ;
struct TYPE_16__ {scalar_t__ dde_loading; scalar_t__ dde_loaded; int dde_type; int dde_class; int dde_cv; int dde_key; } ;
typedef TYPE_2__ ddt_entry_t ;
typedef int boolean_t ;
typedef int blkptr_t ;
typedef int avl_index_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (int *,TYPE_2__*,int *) ;
 int FUNC_4 (int *,TYPE_2__*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 TYPE_2__* FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int *,int const*) ;
 int FUNC_11 (TYPE_1__*,int,int,TYPE_2__*) ;
 int FUNC_12 (TYPE_1__*,TYPE_2__*,unsigned long long) ;

ddt_entry_t *
FUNC_13(ddt_t *VAR_5, const blkptr_t *VAR_6, boolean_t VAR_7)
{
 ddt_entry_t *VAR_8, VAR_9;
 enum ddt_type VAR_10;
 enum ddt_class VAR_11;
 avl_index_t VAR_12;
 int VAR_13;

 FUNC_0(FUNC_2(&VAR_5->ddt_lock));

 FUNC_10(&VAR_9.dde_key, VAR_6);

 VAR_8 = FUNC_3(&VAR_5->ddt_tree, &VAR_9, &VAR_12);
 if (VAR_8 == ((void*)0)) {
  if (!VAR_7)
   return (((void*)0));
  VAR_8 = FUNC_7(&VAR_9.dde_key);
  FUNC_4(&VAR_5->ddt_tree, VAR_8, VAR_12);
 }

 while (VAR_8->dde_loading)
  FUNC_6(&VAR_8->dde_cv, &VAR_5->ddt_lock);

 if (VAR_8->dde_loaded)
  return (VAR_8);

 VAR_8->dde_loading = VAR_1;

 FUNC_9(VAR_5);

 VAR_13 = VAR_4;

 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
  for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
   VAR_13 = FUNC_11(VAR_5, VAR_10, VAR_11, VAR_8);
   if (VAR_13 != VAR_4) {
    FUNC_1(VAR_13);
    break;
   }
  }
  if (VAR_13 != VAR_4)
   break;
 }

 FUNC_8(VAR_5);

 FUNC_0(VAR_8->dde_loaded == VAR_0);
 FUNC_0(VAR_8->dde_loading == VAR_1);

 VAR_8->dde_type = VAR_10;
 VAR_8->dde_class = VAR_11;
 VAR_8->dde_loaded = VAR_1;
 VAR_8->dde_loading = VAR_0;

 if (VAR_13 == 0)
  FUNC_12(VAR_5, VAR_8, -1ULL);

 FUNC_5(&VAR_8->dde_cv);

 return (VAR_8);
}
