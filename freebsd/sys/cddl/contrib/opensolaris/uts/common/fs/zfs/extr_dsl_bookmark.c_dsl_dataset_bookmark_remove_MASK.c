
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
typedef int objset_t ;
typedef int matchtype_t ;
struct TYPE_9__ {int ds_bookmarks; TYPE_2__* ds_dir; } ;
typedef TYPE_3__ dsl_dataset_t ;
typedef int dmu_tx_t ;
struct TYPE_10__ {int ds_flags; } ;
struct TYPE_8__ {TYPE_1__* dd_pool; } ;
struct TYPE_7__ {int * dp_meta_objset; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *,int ,char const*,int ,int *) ;

__attribute__((used)) static int
FUNC_2(dsl_dataset_t *VAR_2, const char *VAR_3, dmu_tx_t *VAR_4)
{
 objset_t *VAR_5 = VAR_2->ds_dir->dd_pool->dp_meta_objset;
 uint64_t VAR_6 = VAR_2->ds_bookmarks;
 matchtype_t VAR_7 = 0;

 if (FUNC_0(VAR_2)->ds_flags & VAR_0)
  VAR_7 = VAR_1;

 return (FUNC_1(VAR_5, VAR_6, VAR_3, VAR_7, VAR_4));
}
