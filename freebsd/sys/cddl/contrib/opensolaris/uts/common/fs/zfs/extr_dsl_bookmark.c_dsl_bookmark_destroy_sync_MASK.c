
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int objset_t ;
typedef int nvpair_t ;
struct TYPE_10__ {int dp_spa; int * dp_meta_objset; } ;
typedef TYPE_1__ dsl_pool_t ;
struct TYPE_11__ {int ds_object; scalar_t__ ds_bookmarks; int ds_dbuf; } ;
typedef TYPE_2__ dsl_dataset_t ;
struct TYPE_12__ {int dbda_success; } ;
typedef TYPE_3__ dsl_bookmark_destroy_arg_t ;
typedef int dmu_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int ,TYPE_2__**,int ,char**) ;
 int FUNC_4 (TYPE_2__*,char*,int *) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int * FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ,int *) ;
 int FUNC_9 (TYPE_2__*,char*,int *,char*,char*) ;
 int FUNC_10 (int *,scalar_t__,scalar_t__*) ;
 int FUNC_11 (int *,scalar_t__,int *) ;
 int FUNC_12 (int *,int ,int ,int *) ;

__attribute__((used)) static void
FUNC_13(void *VAR_3, dmu_tx_t *VAR_4)
{
 dsl_bookmark_destroy_arg_t *VAR_5 = VAR_3;
 dsl_pool_t *VAR_6 = FUNC_2(VAR_4);
 objset_t *VAR_7 = VAR_6->dp_meta_objset;

 for (nvpair_t *VAR_8 = FUNC_6(VAR_5->dbda_success, ((void*)0));
     VAR_8 != ((void*)0); VAR_8 = FUNC_6(VAR_5->dbda_success, VAR_8)) {
  dsl_dataset_t *VAR_9;
  char *VAR_10;
  uint64_t VAR_11;

  FUNC_0(FUNC_3(VAR_6, FUNC_7(VAR_8),
      &VAR_9, VAR_1, &VAR_10));
  FUNC_0(FUNC_4(VAR_9, VAR_10, VAR_4));





  FUNC_0(FUNC_10(VAR_7, VAR_9->ds_bookmarks,
      &VAR_11));
  if (VAR_11 == 0) {
   FUNC_1(VAR_9->ds_dbuf, VAR_4);
   FUNC_0(FUNC_11(VAR_7, VAR_9->ds_bookmarks, VAR_4));
   VAR_9->ds_bookmarks = 0;
   FUNC_8(VAR_6->dp_spa, VAR_2, VAR_4);
   FUNC_0(FUNC_12(VAR_7, VAR_9->ds_object,
       VAR_0, VAR_4));
  }

  FUNC_9(VAR_9, "remove bookmark", VAR_4,
      "name=%s", VAR_10);

  FUNC_5(VAR_9, VAR_1);
 }
}
