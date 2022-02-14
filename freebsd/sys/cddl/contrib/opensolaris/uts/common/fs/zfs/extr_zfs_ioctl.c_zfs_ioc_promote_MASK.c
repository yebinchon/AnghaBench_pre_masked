
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {char* zc_name; int zc_string; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int dsl_pool_t ;
struct TYPE_10__ {int ds_dir; } ;
typedef TYPE_2__ dsl_dataset_t ;
struct TYPE_11__ {int dd_origin_obj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (char*,int *,int *) ;
 int FUNC_2 (char*,int ,int *,int ) ;
 int FUNC_3 (int *,char*,int ,TYPE_2__**) ;
 int FUNC_4 (int *,int ,int ,TYPE_2__**) ;
 int FUNC_5 (TYPE_2__*,char*) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (int ) ;
 TYPE_4__* FUNC_9 (int ) ;
 int FUNC_10 (char*,int ,int **) ;
 int FUNC_11 (int *,int ) ;
 char* FUNC_12 (char*,char) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_13(zfs_cmd_t *VAR_5)
{
 dsl_pool_t *VAR_6;
 dsl_dataset_t *VAR_7, *VAR_8;
 char VAR_9[VAR_3];
 char *VAR_10;
 int VAR_11;

 VAR_5->zc_name[sizeof (VAR_5->zc_name) - 1] = '\0';
 if (FUNC_1(VAR_5->zc_name, ((void*)0), ((void*)0)) != 0 ||
     FUNC_12(VAR_5->zc_name, '%'))
  return (FUNC_0(VAR_1));

 VAR_11 = FUNC_10(VAR_5->zc_name, VAR_2, &VAR_6);
 if (VAR_11 != 0)
  return (VAR_11);

 VAR_11 = FUNC_3(VAR_6, VAR_5->zc_name, VAR_2, &VAR_7);
 if (VAR_11 != 0) {
  FUNC_11(VAR_6, VAR_2);
  return (VAR_11);
 }

 if (!FUNC_8(VAR_7->ds_dir)) {
  FUNC_7(VAR_7, VAR_2);
  FUNC_11(VAR_6, VAR_2);
  return (FUNC_0(VAR_1));
 }

 VAR_11 = FUNC_4(VAR_6,
     FUNC_9(VAR_7->ds_dir)->dd_origin_obj, VAR_2, &VAR_8);
 if (VAR_11 != 0) {
  FUNC_7(VAR_7, VAR_2);
  FUNC_11(VAR_6, VAR_2);
  return (VAR_11);
 }

 FUNC_5(VAR_8, VAR_9);
 FUNC_7(VAR_8, VAR_2);
 FUNC_7(VAR_7, VAR_2);
 FUNC_11(VAR_6, VAR_2);





 VAR_10 = FUNC_12(VAR_9, '@');
 if (VAR_10)
  *VAR_10 = '\0';
 (void) FUNC_2(VAR_9,
     VAR_4, ((void*)0), VAR_0);
 return (FUNC_6(VAR_5->zc_name, VAR_5->zc_string));
}
