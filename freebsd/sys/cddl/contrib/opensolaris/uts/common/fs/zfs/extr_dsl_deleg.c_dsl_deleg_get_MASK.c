
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int zap_cursor_t ;
struct TYPE_13__ {int za_integer_length; int za_num_integers; scalar_t__ za_first_integer; char* za_name; } ;
typedef TYPE_1__ zap_attribute_t ;
typedef scalar_t__ uint64_t ;
typedef int objset_t ;
typedef int nvlist_t ;
struct TYPE_14__ {int * dp_meta_objset; } ;
typedef TYPE_2__ dsl_pool_t ;
struct TYPE_15__ {struct TYPE_15__* dd_parent; TYPE_2__* dd_pool; } ;
typedef TYPE_3__ dsl_dir_t ;
struct TYPE_16__ {scalar_t__ dd_deleg_zapobj; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_2__*,char const*,int ,TYPE_3__**,int *) ;
 int FUNC_3 (TYPE_3__*,char*) ;
 TYPE_8__* FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,int ) ;
 int FUNC_6 (char const*,int ,TYPE_2__**) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *,char*,int *) ;
 int * FUNC_10 () ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int **,int ,int ) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *,scalar_t__,scalar_t__*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,int *,scalar_t__) ;
 scalar_t__ FUNC_18 (int *,TYPE_1__*) ;

int
FUNC_19(const char *VAR_4, nvlist_t **VAR_5)
{
 dsl_dir_t *VAR_6, *VAR_7;
 dsl_pool_t *VAR_8;
 int VAR_9;
 objset_t *VAR_10;

 VAR_9 = FUNC_6(VAR_4, VAR_0, &VAR_8);
 if (VAR_9 != 0)
  return (VAR_9);

 VAR_9 = FUNC_2(VAR_8, VAR_4, VAR_0, &VAR_7, ((void*)0));
 if (VAR_9 != 0) {
  FUNC_7(VAR_8, VAR_0);
  return (VAR_9);
 }

 VAR_8 = VAR_7->dd_pool;
 VAR_10 = VAR_8->dp_meta_objset;

 FUNC_1(FUNC_12(VAR_5, VAR_2, VAR_1) == 0);

 for (VAR_6 = VAR_7; VAR_6 != ((void*)0); VAR_6 = VAR_6->dd_parent) {
  zap_cursor_t VAR_11;
  zap_attribute_t VAR_12;
  nvlist_t *VAR_13;
  uint64_t VAR_14;
  char VAR_15[VAR_3];

  if (FUNC_4(VAR_6)->dd_deleg_zapobj == 0 ||
      FUNC_14(VAR_10,
      FUNC_4(VAR_6)->dd_deleg_zapobj, &VAR_14) != 0 || VAR_14 == 0)
   continue;

  VAR_13 = FUNC_10();
  for (FUNC_17(&VAR_11, VAR_10,
      FUNC_4(VAR_6)->dd_deleg_zapobj);
      FUNC_18(&VAR_11, &VAR_12) == 0;
      FUNC_15(&VAR_11)) {
   zap_cursor_t VAR_16;
   zap_attribute_t VAR_17;
   nvlist_t *VAR_18;

   FUNC_0(VAR_12.za_integer_length == 8);
   FUNC_0(VAR_12.za_num_integers == 1);

   VAR_18 = FUNC_10();
   for (FUNC_17(&VAR_16, VAR_10, VAR_12.za_first_integer);
       FUNC_18(&VAR_16, &VAR_17) == 0;
       FUNC_15(&VAR_16)) {
    FUNC_8(VAR_18, VAR_17.za_name);
   }
   FUNC_16(&VAR_16);
   FUNC_9(VAR_13, VAR_12.za_name, VAR_18);
   FUNC_11(VAR_18);
  }

  FUNC_16(&VAR_11);

  FUNC_3(VAR_6, VAR_15);
  FUNC_9(*VAR_5, VAR_15, VAR_13);
  FUNC_13(VAR_13);
 }

 FUNC_5(VAR_7, VAR_0);
 FUNC_7(VAR_8, VAR_0);
 return (0);
}
