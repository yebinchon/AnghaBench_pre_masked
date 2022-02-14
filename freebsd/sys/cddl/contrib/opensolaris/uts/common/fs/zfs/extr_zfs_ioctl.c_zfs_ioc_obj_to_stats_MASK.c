
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zc_value; int zc_stat; int zc_obj; int zc_name; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int objset_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int **) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int *,int ,int) ;

__attribute__((used)) static int
FUNC_5(zfs_cmd_t *VAR_3)
{
 objset_t *VAR_4;
 int VAR_5;


 if ((VAR_5 = FUNC_1(VAR_3->zc_name, VAR_2, &VAR_4)) != 0)
  return (VAR_5);
 if (FUNC_3(VAR_4) != VAR_0) {
  FUNC_2(VAR_4, VAR_2);
  return (FUNC_0(VAR_1));
 }
 VAR_5 = FUNC_4(VAR_4, VAR_3->zc_obj, &VAR_3->zc_stat, VAR_3->zc_value,
     sizeof (VAR_3->zc_value));
 FUNC_2(VAR_4, VAR_2);

 return (VAR_5);
}
