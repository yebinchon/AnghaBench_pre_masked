
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zpool_config; } ;
typedef TYPE_1__ zpool_handle_t ;
typedef scalar_t__ uint64_t ;
typedef int nvlist_t ;
typedef int buf ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char* VAR_8 ;
 scalar_t__ FUNC_0 (int *,int ,char const*) ;
 scalar_t__ FUNC_1 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int **,int ,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int ,int **) ;
 int FUNC_5 (char*,int,char*,char*,char const*) ;
 scalar_t__ FUNC_6 (char const*,char**,int) ;
 int * FUNC_7 (int *,int *,int *,int *,int *) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (char const*) ;

nvlist_t *
FUNC_10(zpool_handle_t *VAR_9, const char *VAR_10, boolean_t *VAR_11,
    boolean_t *VAR_12, boolean_t *VAR_13)
{
 char VAR_14[VAR_2];
 char *VAR_15;
 nvlist_t *VAR_16, *VAR_17, *VAR_18;
 uint64_t VAR_19;

 FUNC_8(FUNC_2(&VAR_17, VAR_3, VAR_1) == 0);

 VAR_19 = FUNC_6(VAR_10, &VAR_15, 10);
 if (VAR_19 != 0 && *VAR_15 == '\0') {
  FUNC_8(FUNC_1(VAR_17, VAR_4, VAR_19) == 0);
 } else if (FUNC_9(VAR_10)) {
  FUNC_8(FUNC_0(VAR_17, VAR_6, VAR_10) == 0);
 } else if (VAR_10[0] != '/') {
  (void) FUNC_5(VAR_14, sizeof (VAR_14), "%s%s", VAR_8, VAR_10);
  FUNC_8(FUNC_0(VAR_17, VAR_5, VAR_14) == 0);
 } else {
  FUNC_8(FUNC_0(VAR_17, VAR_5, VAR_10) == 0);
 }

 FUNC_8(FUNC_4(VAR_9->zpool_config, VAR_7,
     &VAR_16) == 0);

 *VAR_11 = VAR_0;
 *VAR_12 = VAR_0;
 if (VAR_13 != ((void*)0))
  *VAR_13 = VAR_0;
 VAR_18 = FUNC_7(VAR_16, VAR_17, VAR_11, VAR_12, VAR_13);
 FUNC_3(VAR_17);

 return (VAR_18);
}
