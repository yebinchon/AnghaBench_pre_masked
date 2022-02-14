
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int zfs_bookmark_phys_t ;
typedef scalar_t__ uint64_t ;
typedef int objset_t ;
typedef int matchtype_t ;
struct TYPE_9__ {scalar_t__ ds_bookmarks; TYPE_2__* ds_dir; } ;
typedef TYPE_3__ dsl_dataset_t ;
struct TYPE_10__ {int ds_flags; } ;
struct TYPE_8__ {TYPE_1__* dd_pool; } ;
struct TYPE_7__ {int * dp_meta_objset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 TYPE_4__* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *,scalar_t__,char const*,int,int,int *,int ,int *,int ,int *) ;

__attribute__((used)) static int
FUNC_3(dsl_dataset_t *VAR_4, const char *VAR_5,
    zfs_bookmark_phys_t *VAR_6)
{
 objset_t *VAR_7 = VAR_4->ds_dir->dd_pool->dp_meta_objset;
 uint64_t VAR_8 = VAR_4->ds_bookmarks;
 matchtype_t VAR_9 = 0;
 int VAR_10;

 if (VAR_8 == 0)
  return (FUNC_0(VAR_2));

 if (FUNC_1(VAR_4)->ds_flags & VAR_0)
  VAR_9 = VAR_3;

 VAR_10 = FUNC_2(VAR_7, VAR_8, VAR_5, sizeof (uint64_t),
     sizeof (*VAR_6) / sizeof (uint64_t), VAR_6, VAR_9,
     ((void*)0), 0, ((void*)0));

 return (VAR_10 == VAR_1 ? VAR_2 : VAR_10);
}
