
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int zpool_name; int * zpool_hdl; } ;
typedef TYPE_1__ zpool_handle_t ;
typedef int uint64_t ;
typedef int pool_initialize_func_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;
typedef int msg ;
typedef int libzfs_handle_t ;
typedef int int64_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,char*,char*) ;
 int FUNC_2 (int *,char*,int ) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,int ) ;
 char* FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ,int *,int **) ;
 int * FUNC_10 (int *,int *) ;
 char* FUNC_11 (int *) ;
 int FUNC_12 (char*,int,char*,...) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *,int,char*) ;
 int FUNC_15 (int *,int ,char*,char*) ;
 int * FUNC_16 (TYPE_1__*,char*,int *,int *,int *) ;
 int FUNC_17 (int *,int,char*) ;

int
FUNC_18(zpool_handle_t *VAR_6, pool_initialize_func_t VAR_7,
    nvlist_t *VAR_8)
{
 char VAR_9[1024];
 libzfs_handle_t *VAR_10 = VAR_6->zpool_hdl;

 nvlist_t *VAR_11;


 nvlist_t *VAR_12 = FUNC_3();
 nvlist_t *VAR_13 = FUNC_3();
 boolean_t VAR_14, VAR_15;
 nvlist_t *VAR_16;
 nvpair_t *VAR_17;

 for (VAR_17 = FUNC_10(VAR_8, ((void*)0)); VAR_17 != ((void*)0);
     VAR_17 = FUNC_10(VAR_8, VAR_17)) {
  char *VAR_18 = FUNC_11(VAR_17);
  VAR_16 = FUNC_16(VAR_6, VAR_18, &VAR_14, &VAR_15, ((void*)0));

  if ((VAR_16 == ((void*)0)) || VAR_15 || VAR_14) {
   (void) FUNC_12(VAR_9, sizeof (VAR_9),
       FUNC_0(VAR_3, "cannot initialize '%s'"),
       VAR_18);
   int VAR_19 = (VAR_16 == ((void*)0)) ? VAR_2 :
       (VAR_14 ? VAR_1 : VAR_0);
   FUNC_4(VAR_12);
   FUNC_4(VAR_13);
   return (FUNC_14(VAR_10, VAR_19, VAR_9));
  }

  uint64_t VAR_20 = FUNC_7(VAR_16, VAR_4);
  FUNC_2(VAR_12, VAR_18, VAR_20);

  (void) FUNC_12(VAR_9, sizeof (VAR_9), "%llu", VAR_20);
  FUNC_1(VAR_13, VAR_9, VAR_18);
 }

 int VAR_21 = FUNC_9(VAR_6->zpool_name, VAR_7, VAR_12,
     &VAR_11);
 FUNC_4(VAR_12);

 if (VAR_21 == 0) {
  FUNC_4(VAR_13);
  return (0);
 }

 nvlist_t *VAR_22 = ((void*)0);
 if (VAR_11 != ((void*)0)) {
  VAR_22 = FUNC_5(VAR_11,
      VAR_5);
 }

 (void) FUNC_12(VAR_9, sizeof (VAR_9),
     FUNC_0(VAR_3, "operation failed"));

 for (VAR_17 = FUNC_10(VAR_22, ((void*)0)); VAR_17 != ((void*)0);
     VAR_17 = FUNC_10(VAR_22, VAR_17)) {
  int64_t VAR_23 = FUNC_13(FUNC_8(VAR_17));
  char *VAR_24 = FUNC_6(VAR_13,
      FUNC_11(VAR_17));
  (void) FUNC_15(VAR_10, VAR_23, "cannot initialize '%s'",
      VAR_24);
 }

 FUNC_4(VAR_13);
 if (VAR_22 != ((void*)0))
  return (-1);

 return (FUNC_17(VAR_10, VAR_21, VAR_9));
}
