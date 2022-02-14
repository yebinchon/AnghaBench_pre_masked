
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int zfs_deleg_who_type_t ;
struct TYPE_8__ {char const* who_name; TYPE_3__* who_fsperm; int who_type; int * who_deleg_perm_avl; } ;
typedef TYPE_2__ who_perm_t ;
typedef int uu_avl_pool_t ;
struct TYPE_9__ {TYPE_1__* fsp_set; } ;
typedef TYPE_3__ fs_perm_t ;
struct TYPE_7__ {int * fsps_deleg_perm_avl_pool; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 () ;
 int * FUNC_2 (int *,int *,int ) ;

__attribute__((used)) static inline void
FUNC_3(who_perm_t *VAR_1, fs_perm_t *VAR_2,
    zfs_deleg_who_type_t VAR_3, const char *VAR_4)
{
 uu_avl_pool_t *VAR_5;
 VAR_5 = VAR_2->fsp_set->fsps_deleg_perm_avl_pool;

 FUNC_0(VAR_1, sizeof (who_perm_t));

 if ((VAR_1->who_deleg_perm_avl = FUNC_2(VAR_5, ((void*)0),
     VAR_0)) == ((void*)0))
  FUNC_1();

 VAR_1->who_type = VAR_3;
 VAR_1->who_name = VAR_4;
 VAR_1->who_fsperm = VAR_2;
}
