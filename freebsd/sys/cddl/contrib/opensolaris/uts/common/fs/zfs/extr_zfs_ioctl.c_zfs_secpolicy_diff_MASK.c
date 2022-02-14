
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zc_name; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int nvlist_t ;
typedef int cred_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int ,int *) ;

__attribute__((used)) static int
FUNC_2(zfs_cmd_t *VAR_2, nvlist_t *VAR_3, cred_t *VAR_4)
{
 int VAR_5;

 if ((VAR_5 = FUNC_0(VAR_4, VAR_0)) == 0)
  return (0);

 VAR_5 = FUNC_1(VAR_2->zc_name, VAR_1, VAR_4);
 return (VAR_5);
}
