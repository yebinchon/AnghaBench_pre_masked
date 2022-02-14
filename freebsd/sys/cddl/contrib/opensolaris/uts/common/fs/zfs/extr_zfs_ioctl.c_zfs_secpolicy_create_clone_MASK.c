
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zc_name; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int parentname ;
typedef int nvlist_t ;
typedef int cred_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,char*,char**) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (char*,int ,int *) ;

__attribute__((used)) static int
FUNC_3(zfs_cmd_t *VAR_4, nvlist_t *VAR_5, cred_t *VAR_6)
{
 char VAR_7[VAR_3];
 int VAR_8;
 char *VAR_9;

 if ((VAR_8 = FUNC_1(VAR_4->zc_name, VAR_7,
     sizeof (VAR_7))) != 0)
  return (VAR_8);

 if (FUNC_0(VAR_5, "origin", &VAR_9) == 0 &&
     (VAR_8 = FUNC_2(VAR_9,
     VAR_0, VAR_6)) != 0)
  return (VAR_8);

 if ((VAR_8 = FUNC_2(VAR_7,
     VAR_1, VAR_6)) != 0)
  return (VAR_8);

 return (FUNC_2(VAR_7,
     VAR_2, VAR_6));
}
