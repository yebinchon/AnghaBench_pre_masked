
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pl_prop; int pl_fixed; int pl_width; int * pl_user_prop; } ;
typedef TYPE_1__ zprop_list_t ;
typedef int zfs_type_t ;
typedef int libzfs_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*) ;
 TYPE_1__* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,int ,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int * FUNC_9 (int *,char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*,int ) ;
 int FUNC_13 (int,int ) ;
 int FUNC_14 (int,int *,int ) ;

__attribute__((used)) static int
FUNC_15(libzfs_handle_t *VAR_5, char *VAR_6, zprop_list_t **VAR_7,
    zfs_type_t VAR_8)
{
 int VAR_9;
 zprop_list_t *VAR_10;

 VAR_9 = FUNC_12(VAR_6, VAR_8);

 if (VAR_9 != VAR_4 && !FUNC_13(VAR_9, VAR_8))
  VAR_9 = VAR_4;






 if (VAR_9 == VAR_4 && ((VAR_8 == VAR_3 &&
     !FUNC_10(VAR_6) &&
     !FUNC_11(VAR_6)) ||
     (VAR_8 == VAR_2 && !FUNC_6(VAR_6) &&
     !FUNC_7(VAR_6) && !FUNC_8(VAR_6)))) {
  FUNC_5(VAR_5, FUNC_0(VAR_1,
      "invalid property '%s'"), VAR_6);
  return (FUNC_4(VAR_5, VAR_0,
      FUNC_0(VAR_1, "bad property list")));
 }

 if ((VAR_10 = FUNC_3(VAR_5, sizeof (zprop_list_t))) == ((void*)0))
  return (-1);

 VAR_10->pl_prop = VAR_9;
 if (VAR_9 == VAR_4) {
  if ((VAR_10->pl_user_prop = FUNC_9(VAR_5, VAR_6)) ==
      ((void*)0)) {
   FUNC_1(VAR_10);
   return (-1);
  }
  VAR_10->pl_width = FUNC_2(VAR_6);
 } else {
  VAR_10->pl_width = FUNC_14(VAR_9, &VAR_10->pl_fixed,
      VAR_8);
 }

 *VAR_7 = VAR_10;

 return (0);
}
