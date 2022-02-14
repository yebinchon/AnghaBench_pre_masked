
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ zc_flags; int zc_cookie; int zc_name; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int spa_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int **,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,scalar_t__) ;

__attribute__((used)) static int
FUNC_6(zfs_cmd_t *VAR_5)
{
 spa_t *VAR_6;
 int VAR_7;

 if ((VAR_7 = FUNC_2(VAR_5->zc_name, &VAR_6, VAR_1)) != 0)
  return (VAR_7);

 if (VAR_5->zc_flags >= VAR_3)
  return (FUNC_0(VAR_0));

 if (VAR_5->zc_flags == VAR_4)
  VAR_7 = FUNC_5(VAR_6, VAR_4);
 else if (VAR_5->zc_cookie == VAR_2)
  VAR_7 = FUNC_4(VAR_6);
 else
  VAR_7 = FUNC_3(VAR_6, VAR_5->zc_cookie);

 FUNC_1(VAR_6, VAR_1);

 return (VAR_7);
}
