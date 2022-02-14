
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t zfs_prop_t ;
struct TYPE_3__ {scalar_t__* zfs_props_table; int zfs_props; } ;
typedef TYPE_1__ zfs_handle_t ;
typedef int nvlist_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int **) ;
 int FUNC_2 (int *,int ,char**) ;
 int FUNC_3 (int) ;
 char* FUNC_4 (size_t) ;
 int FUNC_5 (size_t) ;

__attribute__((used)) static const char *
FUNC_6(zfs_handle_t *VAR_3, zfs_prop_t VAR_4, char **VAR_5)
{
 nvlist_t *VAR_6;
 const char *VAR_7;

 *VAR_5 = ((void*)0);
 if (FUNC_1(VAR_3->zfs_props,
     FUNC_5(VAR_4), &VAR_6) == 0) {
  VAR_7 = FUNC_0(VAR_6, VAR_2);
  (void) FUNC_2(VAR_6, VAR_1, VAR_5);
 } else {
  FUNC_3(!VAR_3->zfs_props_table ||
      VAR_3->zfs_props_table[VAR_4] == VAR_0);
  VAR_7 = FUNC_4(VAR_4);
  *VAR_5 = "";
 }

 return (VAR_7);
}
