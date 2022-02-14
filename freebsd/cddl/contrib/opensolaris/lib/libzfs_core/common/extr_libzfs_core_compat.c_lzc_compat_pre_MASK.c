
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zfs_ioc_t ;
struct TYPE_3__ {int zc_cleanup_fd; int zc_string; int zc_value; int zc_name; int zc_objset_type; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;







 int FUNC_0 (int *,char*) ;
 int * FUNC_1 (int *,char*) ;
 char* FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,int*) ;
 int FUNC_5 (int *,char*,int **) ;
 int * FUNC_6 (int *,int *) ;
 char* FUNC_7 (int *) ;
 int FUNC_8 (int *,int **) ;
 int FUNC_9 (int *,char**) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (int ,char*,int) ;
 scalar_t__ VAR_5 ;

int
FUNC_12(zfs_cmd_t *VAR_6, zfs_ioc_t *VAR_7, nvlist_t **VAR_8)
{
 nvlist_t *VAR_9 = ((void*)0);
 nvpair_t *VAR_10, *VAR_11;
 char *VAR_12, *VAR_13;
 zfs_ioc_t VAR_14;
 uint32_t VAR_15;
 int32_t VAR_16;
 int VAR_17 = 0;
 int VAR_18;

 if (VAR_5 >= VAR_4)
  return (0);

 VAR_14 = *VAR_7;

 switch (VAR_14) {
 case 133:
  VAR_15 = FUNC_0(*VAR_8, "type");
  VAR_6->zc_objset_type = (uint64_t)VAR_15;
  FUNC_5(*VAR_8, "props", &VAR_9);
  *VAR_8 = VAR_9;
 break;
 case 134:
  VAR_12 = FUNC_2(*VAR_8, "origin");
  FUNC_11(VAR_6->zc_value, VAR_12, VAR_3);
  FUNC_5(*VAR_8, "props", &VAR_9);
  *VAR_7 = 133;
  *VAR_8 = VAR_9;
 break;
 case 129:
  VAR_9 = FUNC_1(*VAR_8, "snaps");
  VAR_10 = FUNC_6(VAR_9, ((void*)0));
  if (VAR_10 != ((void*)0)) {
   VAR_12 = FUNC_7(VAR_10);
   VAR_18 = FUNC_10(VAR_12, "@");
   FUNC_11(VAR_6->zc_name, VAR_12, VAR_18 + 1);
   FUNC_11(VAR_6->zc_value, VAR_12 + VAR_18 + 1, VAR_3);
  } else
   VAR_17 = VAR_0;

  if (!VAR_17 && FUNC_6(VAR_9, VAR_10) != ((void*)0))
   VAR_17 = VAR_1;
  FUNC_3(VAR_9);
  VAR_9 = ((void*)0);
  FUNC_5(*VAR_8, "props", &VAR_9);
  *VAR_8 = VAR_9;
 break;
 case 128:
  VAR_12 = FUNC_2(*VAR_8, "firstsnap");
  FUNC_11(VAR_6->zc_value, VAR_12, VAR_3);
 break;
 case 132:
  VAR_9 = FUNC_1(*VAR_8, "snaps");
  VAR_10 = FUNC_6(VAR_9, ((void*)0));
  if (VAR_10 != ((void*)0)) {
   VAR_12 = FUNC_7(VAR_10);
   VAR_18 = FUNC_10(VAR_12, "@");
   FUNC_11(VAR_6->zc_name, VAR_12, VAR_18 + 1);
  } else
   VAR_17 = VAR_0;

  if (!VAR_17 && FUNC_6(VAR_9, VAR_10) != ((void*)0))
   VAR_17 = VAR_1;
  *VAR_8 = VAR_9;
 break;
 case 131:
  VAR_9 = FUNC_1(*VAR_8, "holds");
  VAR_10 = FUNC_6(VAR_9, ((void*)0));
  if (VAR_10 != ((void*)0)) {
   VAR_12 = FUNC_7(VAR_10);
   VAR_18 = FUNC_10(VAR_12, "@");
   FUNC_11(VAR_6->zc_name, VAR_12, VAR_18 + 1);
   FUNC_11(VAR_6->zc_value, VAR_12 + VAR_18 + 1, VAR_3);
   if (FUNC_9(VAR_10, &VAR_13) == 0)
    FUNC_11(VAR_6->zc_string, VAR_13, VAR_2);
   else
    VAR_17 = VAR_0;
  } else
   VAR_17 = VAR_0;

  if (!VAR_17 && FUNC_6(VAR_9, VAR_10) != ((void*)0))
   VAR_17 = VAR_1;
  FUNC_3(VAR_9);
  if (FUNC_4(*VAR_8, "cleanup_fd",
      &VAR_16) == 0)
   VAR_6->zc_cleanup_fd = VAR_16;
  else
   VAR_6->zc_cleanup_fd = -1;
 break;
 case 130:
  VAR_10 = FUNC_6(*VAR_8, ((void*)0));
  if (VAR_10 != ((void*)0)) {
   VAR_12 = FUNC_7(VAR_10);
   VAR_18 = FUNC_10(VAR_12, "@");
   FUNC_11(VAR_6->zc_name, VAR_12, VAR_18 + 1);
   FUNC_11(VAR_6->zc_value, VAR_12 + VAR_18 + 1, VAR_3);
   if (FUNC_8(VAR_10, &VAR_9) == 0) {
    VAR_11 = FUNC_6(VAR_9, ((void*)0));
    if (VAR_11 != ((void*)0))
     FUNC_11(VAR_6->zc_string,
         FUNC_7(VAR_11), VAR_2);
    else
     VAR_17 = VAR_0;
    if (!VAR_17 && FUNC_6(VAR_9,
        VAR_11) != ((void*)0))
     VAR_17 = VAR_1;
   } else
    VAR_17 = VAR_0;
  } else
   VAR_17 = VAR_0;

  if (!VAR_17 && FUNC_6(VAR_9, VAR_10) != ((void*)0))
   VAR_17 = VAR_1;
 break;
 }

 return (VAR_17);
}
