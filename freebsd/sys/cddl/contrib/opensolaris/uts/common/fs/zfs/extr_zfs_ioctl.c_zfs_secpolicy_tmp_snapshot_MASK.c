
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int zc_name; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int nvlist_t ;
typedef int cred_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *,int *) ;
 int FUNC_1 (TYPE_1__*,int *,int *) ;
 int FUNC_2 (TYPE_1__*,int *,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int ,int *) ;

__attribute__((used)) static int
FUNC_5(zfs_cmd_t *VAR_1, nvlist_t *VAR_2, cred_t *VAR_3)
{





 int VAR_4;

 if ((VAR_4 = FUNC_4(VAR_1->zc_name,
     VAR_0, VAR_3)) == 0)
  return (0);

 VAR_4 = FUNC_3(VAR_1->zc_name, VAR_3);
 if (VAR_4 == 0)
  VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);
 if (VAR_4 == 0)
  VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3);
 if (VAR_4 == 0)
  VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
 return (VAR_4);
}
