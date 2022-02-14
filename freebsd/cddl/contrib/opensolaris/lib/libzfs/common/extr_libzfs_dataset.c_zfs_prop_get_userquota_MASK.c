
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ zfs_userquota_prop_t ;
typedef int zfs_handle_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int,char*,scalar_t__) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (scalar_t__,char*,int) ;
 int FUNC_3 (int *,char const*,scalar_t__*,scalar_t__*) ;

int
FUNC_4(zfs_handle_t *VAR_2, const char *VAR_3,
    char *VAR_4, int VAR_5, boolean_t VAR_6)
{
 int VAR_7;
 uint64_t VAR_8;
 zfs_userquota_prop_t VAR_9;

 VAR_7 = FUNC_3(VAR_2, VAR_3, &VAR_8,
     &VAR_9);

 if (VAR_7)
  return (VAR_7);

 if (VAR_6) {
  (void) FUNC_0(VAR_4, VAR_5, "%llu", VAR_8);
 } else if (VAR_8 == 0 &&
     (VAR_9 == VAR_1 || VAR_9 == VAR_0)) {
  (void) FUNC_1(VAR_4, "none", VAR_5);
 } else {
  FUNC_2(VAR_8, VAR_4, VAR_5);
 }
 return (0);
}
