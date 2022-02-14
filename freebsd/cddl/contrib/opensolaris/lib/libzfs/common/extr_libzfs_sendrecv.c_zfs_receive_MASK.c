
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zfs_handle_t ;
typedef int uint64_t ;
struct TYPE_4__ {int nomount; } ;
typedef TYPE_1__ recvflags_t ;
typedef int prop_changelist_t ;
typedef int nvlist_t ;
typedef int libzfs_handle_t ;
typedef int avl_tree_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *,char*,char**) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *,char*,int ) ;
 int FUNC_10 (int *,char const*,char*,TYPE_1__*,int,int *,int *,int *,char**,int,int *,int *) ;

int
FUNC_11(libzfs_handle_t *VAR_7, const char *VAR_8, nvlist_t *VAR_9,
    recvflags_t *VAR_10, int VAR_11, avl_tree_t *VAR_12)
{
 char *VAR_13 = ((void*)0);
 int VAR_14;
 int VAR_15;
 uint64_t VAR_16 = 0;
 char *VAR_17 = ((void*)0);
 if (VAR_9) {
  VAR_14 = FUNC_6(VAR_9, "origin", &VAR_17);
  if (VAR_14 && VAR_14 != VAR_1)
   return (VAR_14);
 }

 VAR_15 = FUNC_7(VAR_4, VAR_3|VAR_2);
 FUNC_0(VAR_15 >= 0);

 VAR_14 = FUNC_10(VAR_7, VAR_8, VAR_17, VAR_10, VAR_11, ((void*)0), ((void*)0),
     VAR_12, &VAR_13, VAR_15, &VAR_16, ((void*)0));

 FUNC_0(0 == FUNC_4(VAR_15));

 if (VAR_14 == 0 && !VAR_10->nomount && VAR_13) {
  zfs_handle_t *VAR_18;
  prop_changelist_t *VAR_19;

  VAR_18 = FUNC_9(VAR_7, VAR_13, VAR_6);
  if (VAR_18 != ((void*)0)) {
   VAR_19 = FUNC_2(VAR_18, VAR_5,
       VAR_0, 0);
   FUNC_8(VAR_18);
   if (VAR_19 != ((void*)0)) {

    VAR_14 = FUNC_3(VAR_19);
    FUNC_1(VAR_19);
   }
  }
  if (VAR_18 == ((void*)0) || VAR_19 == ((void*)0) || VAR_14)
   VAR_14 = -1;
 }
 if (VAR_13)
  FUNC_5(VAR_13);

 return (VAR_14);
}
