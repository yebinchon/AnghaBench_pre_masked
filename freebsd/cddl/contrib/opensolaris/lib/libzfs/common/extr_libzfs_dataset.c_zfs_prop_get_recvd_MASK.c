
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ zfs_prop_t ;
struct TYPE_7__ {int * zfs_recvd_props; } ;
typedef TYPE_1__ zfs_handle_t ;
typedef int uint64_t ;
typedef int nvlist_t ;
typedef int boolean_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,char const*) ;
 scalar_t__ FUNC_2 (int *,char const*,int **) ;
 scalar_t__ FUNC_3 (int *,int ,char**) ;
 int FUNC_4 (char*,char*,size_t) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (char const*) ;
 int FUNC_7 (TYPE_1__*,scalar_t__,char*,size_t,int *,int *,int ,int ) ;
 int FUNC_8 (TYPE_1__*,int *) ;
 int FUNC_9 (TYPE_1__*,int *) ;

int
FUNC_10(zfs_handle_t *VAR_2, const char *VAR_3, char *VAR_4,
    size_t VAR_5, boolean_t VAR_6)
{
 zfs_prop_t VAR_7;
 int VAR_8 = 0;

 if (VAR_2->zfs_recvd_props == ((void*)0))
  if (FUNC_0(VAR_2) != 0)
   return (-1);

 VAR_7 = FUNC_6(VAR_3);

 if (VAR_7 != VAR_0) {
  uint64_t VAR_9;
  if (!FUNC_1(VAR_2->zfs_recvd_props, VAR_3))
   return (-1);
  FUNC_8(VAR_2, &VAR_9);
  VAR_8 = FUNC_7(VAR_2, VAR_7, VAR_4, VAR_5,
      ((void*)0), ((void*)0), 0, VAR_6);
  FUNC_9(VAR_2, &VAR_9);
 } else {
  nvlist_t *VAR_10;
  char *VAR_11;
  if (FUNC_2(VAR_2->zfs_recvd_props,
      VAR_3, &VAR_10) != 0)
   return (-1);
  FUNC_5(FUNC_3(VAR_10, VAR_1,
      &VAR_11) == 0);
  (void) FUNC_4(VAR_4, VAR_11, VAR_5);
 }

 return (VAR_8 == 0 ? 0 : -1);
}
