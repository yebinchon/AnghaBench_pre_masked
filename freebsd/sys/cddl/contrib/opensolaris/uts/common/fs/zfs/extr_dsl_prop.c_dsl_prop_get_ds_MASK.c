
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ zfs_prop_t ;
typedef scalar_t__ uint64_t ;
typedef int objset_t ;
struct TYPE_8__ {int ds_is_snapshot; TYPE_3__* ds_dir; } ;
typedef TYPE_1__ dsl_dataset_t ;
typedef int boolean_t ;
struct TYPE_11__ {scalar_t__ ds_props_obj; } ;
struct TYPE_10__ {int * dp_meta_objset; } ;
struct TYPE_9__ {TYPE_4__* dd_pool; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*,char*) ;
 TYPE_5__* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_3__*,char const*,int,int,void*,char*,int ) ;
 char* FUNC_5 (char*,char const*,int ) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *,scalar_t__,char*) ;
 int FUNC_9 (int *,scalar_t__,char const*,int,int,void*) ;
 scalar_t__ FUNC_10 (char const*) ;
 scalar_t__ FUNC_11 (scalar_t__) ;

int
FUNC_12(dsl_dataset_t *VAR_5, const char *VAR_6,
    int VAR_7, int VAR_8, void *VAR_9, char *VAR_10)
{
 zfs_prop_t VAR_11 = FUNC_10(VAR_6);
 boolean_t VAR_12;
 uint64_t VAR_13;

 FUNC_0(FUNC_3(VAR_5->ds_dir->dd_pool));
 VAR_12 = (VAR_11 == VAR_2 || FUNC_11(VAR_11));
 VAR_13 = FUNC_2(VAR_5)->ds_props_obj;

 if (VAR_13 != 0) {
  objset_t *VAR_14 = VAR_5->ds_dir->dd_pool->dp_meta_objset;
  int VAR_15;

  FUNC_0(VAR_5->ds_is_snapshot);


  VAR_15 = FUNC_9(VAR_14, VAR_13, VAR_6, VAR_7, VAR_8, VAR_9);
  if (VAR_15 != VAR_0) {
   if (VAR_10 != ((void*)0) && VAR_15 == 0)
    FUNC_1(VAR_5, VAR_10);
   return (VAR_15);
  }





  if (VAR_12) {
   char *VAR_16 = FUNC_5("%s%s", VAR_6,
       VAR_1);
   VAR_15 = FUNC_8(VAR_14, VAR_13, VAR_16);
   FUNC_7(VAR_16);
   if (VAR_15 != 0 && VAR_15 != VAR_0)
    return (VAR_15);
  }

  if (VAR_15 == VAR_0) {

   char *VAR_17 = FUNC_5("%s%s", VAR_6,
       VAR_3);
   VAR_15 = FUNC_9(VAR_14, VAR_13, VAR_17,
       VAR_7, VAR_8, VAR_9);
   FUNC_7(VAR_17);
   if (VAR_15 != VAR_0) {
    if (VAR_10 != ((void*)0) && VAR_15 == 0)
     (void) FUNC_6(VAR_10,
         VAR_4);
    return (VAR_15);
   }
  }
 }

 return (FUNC_4(VAR_5->ds_dir, VAR_6,
     VAR_7, VAR_8, VAR_9, VAR_10, VAR_5->ds_is_snapshot));
}
