
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* zc_name; scalar_t__ zc_nvlist_conf_size; scalar_t__ zc_nvlist_src_size; int zc_iflags; int zc_nvlist_src; int zc_nvlist_conf; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int uint64_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,scalar_t__,int ,int **) ;
 scalar_t__ FUNC_4 (int **,int ,int ) ;
 int FUNC_5 (int *,int **,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int **) ;
 scalar_t__ FUNC_8 (int *,int ,char**) ;
 int FUNC_9 (int *,int ,int *) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (char*,int *,int *,int *) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int ,int *,int *,int *) ;
 int FUNC_14 (char*,int ,int *,int *) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static int
FUNC_16(zfs_cmd_t *VAR_8)
{
 int VAR_9;
 nvlist_t *VAR_10, *VAR_11 = ((void*)0);
 nvlist_t *VAR_12 = ((void*)0);
 nvlist_t *VAR_13 = ((void*)0);
 char *VAR_14 = VAR_8->zc_name;

 if ((VAR_9 = FUNC_3(VAR_8->zc_nvlist_conf, VAR_8->zc_nvlist_conf_size,
     VAR_8->zc_iflags, &VAR_10)))
  return (VAR_9);

 if (VAR_8->zc_nvlist_src_size != 0 && (VAR_9 =
     FUNC_3(VAR_8->zc_nvlist_src, VAR_8->zc_nvlist_src_size,
     VAR_8->zc_iflags, &VAR_11))) {
  FUNC_6(VAR_10);
  return (VAR_9);
 }

 if (VAR_11) {
  nvlist_t *VAR_15 = ((void*)0);
  uint64_t VAR_16 = VAR_3;
  char *VAR_17;

  (void) FUNC_9(VAR_11,
      FUNC_15(VAR_5), &VAR_16);
  if (!FUNC_1(VAR_16)) {
   VAR_9 = FUNC_0(VAR_0);
   goto pool_props_bad;
  }
  (void) FUNC_7(VAR_11, VAR_6, &VAR_15);
  if (VAR_15) {
   VAR_9 = FUNC_5(VAR_15, &VAR_12, VAR_1);
   if (VAR_9 != 0) {
    FUNC_6(VAR_10);
    FUNC_6(VAR_11);
    return (VAR_9);
   }
   (void) FUNC_10(VAR_11, VAR_6);
  }
  FUNC_2(FUNC_4(&VAR_13, VAR_2, VAR_1) == 0);
  VAR_9 = FUNC_13(VAR_16, VAR_12,
      VAR_13, ((void*)0));
  if (VAR_9 != 0)
   goto pool_props_bad;

  if (FUNC_8(VAR_11,
      FUNC_15(VAR_4), &VAR_17) == 0)
   VAR_14 = VAR_17;
 }

 VAR_9 = FUNC_11(VAR_8->zc_name, VAR_10, VAR_11, VAR_13);




 if (!VAR_9 && (VAR_9 = FUNC_14(VAR_14,
     VAR_7, VAR_12, ((void*)0))) != 0)
  (void) FUNC_12(VAR_14);

pool_props_bad:
 FUNC_6(VAR_12);
 FUNC_6(VAR_13);
 FUNC_6(VAR_10);
 FUNC_6(VAR_11);

 return (VAR_9);
}
