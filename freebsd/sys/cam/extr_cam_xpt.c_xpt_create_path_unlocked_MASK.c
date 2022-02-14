
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int target_id_t ;
struct cam_periph {int dummy; } ;
struct cam_path {int dummy; } ;
typedef int path_id_t ;
typedef int lun_id_t ;
typedef int cam_status ;


 int FUNC_0 (struct cam_path**,struct cam_periph*,int ,int ,int ) ;

cam_status
FUNC_1(struct cam_path **VAR_0,
    struct cam_periph *VAR_1, path_id_t VAR_2,
    target_id_t VAR_3, lun_id_t VAR_4)
{

 return (FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3,
     VAR_4));
}
