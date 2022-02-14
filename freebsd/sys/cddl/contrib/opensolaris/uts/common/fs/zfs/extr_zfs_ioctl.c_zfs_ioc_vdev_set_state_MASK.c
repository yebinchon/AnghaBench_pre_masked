
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* zc_obj; int zc_cookie; int zc_guid; int zc_name; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int vdev_state_t ;
typedef int spa_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 void* VAR_2 ;
 void* VAR_3 ;




 int VAR_4 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int **,int ) ;
 int FUNC_3 (int *,int ,void*) ;
 int FUNC_4 (int *,int ,void*) ;
 int FUNC_5 (int *,int ,void*) ;
 int FUNC_6 (int *,int ,void*,int *) ;

__attribute__((used)) static int
FUNC_7(zfs_cmd_t *VAR_5)
{
 spa_t *VAR_6;
 int VAR_7;
 vdev_state_t VAR_8 = VAR_4;

 if ((VAR_7 = FUNC_2(VAR_5->zc_name, &VAR_6, VAR_1)) != 0)
  return (VAR_7);
 switch (VAR_5->zc_cookie) {
 case 128:
  VAR_7 = FUNC_6(VAR_6, VAR_5->zc_guid, VAR_5->zc_obj, &VAR_8);
  break;

 case 129:
  VAR_7 = FUNC_5(VAR_6, VAR_5->zc_guid, VAR_5->zc_obj);
  break;

 case 130:
  if (VAR_5->zc_obj != VAR_2 &&
      VAR_5->zc_obj != VAR_3)
   VAR_5->zc_obj = VAR_2;

  VAR_7 = FUNC_4(VAR_6, VAR_5->zc_guid, VAR_5->zc_obj);
  break;

 case 131:
  if (VAR_5->zc_obj != VAR_2 &&
      VAR_5->zc_obj != VAR_3)
   VAR_5->zc_obj = VAR_2;

  VAR_7 = FUNC_3(VAR_6, VAR_5->zc_guid, VAR_5->zc_obj);
  break;

 default:
  VAR_7 = FUNC_0(VAR_0);
 }
 VAR_5->zc_cookie = VAR_8;
 FUNC_1(VAR_6, VAR_1);
 return (VAR_7);
}
