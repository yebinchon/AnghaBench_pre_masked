
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zfs_handle_t ;
typedef int uint64_t ;
struct TYPE_3__ {char const* fsname; char const* fromsnap; char const* tosnap; int * fss; void* replicate; void* verbose; void* recursive; int member_0; } ;
typedef TYPE_1__ send_data_t ;
typedef int nvlist_t ;
typedef int libzfs_handle_t ;
typedef void* boolean_t ;
typedef int avl_tree_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int **,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int * FUNC_5 (int *,char const*,int) ;

__attribute__((used)) static int
FUNC_6(libzfs_handle_t *VAR_5, const char *VAR_6, const char *VAR_7,
    const char *VAR_8, boolean_t VAR_9, boolean_t VAR_10,
    boolean_t VAR_11, nvlist_t **VAR_12, avl_tree_t **VAR_13)
{
 zfs_handle_t *VAR_14;
 int VAR_15;
 uint64_t VAR_16 = 0, VAR_17 = 0;
 send_data_t VAR_18 = { 0 };

 VAR_14 = FUNC_5(VAR_5, VAR_6, VAR_3 | VAR_4);
 if (VAR_14 == ((void*)0))
  return (VAR_0);

 FUNC_0(0 == FUNC_2(&VAR_18.fss, VAR_2, 0));
 VAR_18.fsname = VAR_6;
 VAR_18.fromsnap = VAR_7;
 VAR_18.tosnap = VAR_8;
 VAR_18.recursive = VAR_9;
 VAR_18.verbose = VAR_10;
 VAR_18.replicate = VAR_11;

 if ((VAR_15 = FUNC_4(VAR_14, &VAR_18)) != 0) {
  FUNC_3(VAR_18.fss);
  if (VAR_13 != ((void*)0))
   *VAR_13 = ((void*)0);
  *VAR_12 = ((void*)0);
  return (VAR_15);
 }

 if (VAR_13 != ((void*)0) && (*VAR_13 = FUNC_1(VAR_18.fss)) == ((void*)0)) {
  FUNC_3(VAR_18.fss);
  *VAR_12 = ((void*)0);
  return (VAR_1);
 }

 *VAR_12 = VAR_18.fss;
 return (0);
}
