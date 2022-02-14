
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int target_id_t ;
struct cam_periph {int dummy; } ;
struct cam_path {int dummy; } ;
typedef int path_id_t ;
typedef int lun_id_t ;
typedef scalar_t__ cam_status ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cam_path*,int ) ;
 scalar_t__ FUNC_1 (int,int ,int ) ;
 scalar_t__ FUNC_2 (struct cam_path*,struct cam_periph*,int ,int ,int ) ;

cam_status
FUNC_3(struct cam_path **VAR_4, struct cam_periph *VAR_5,
  path_id_t VAR_6, target_id_t VAR_7, lun_id_t VAR_8)
{
 struct cam_path *VAR_9;
 cam_status VAR_10;

 VAR_9 = (struct cam_path *)FUNC_1(sizeof(*VAR_9), VAR_2, VAR_3);

 if (VAR_9 == ((void*)0)) {
  VAR_10 = VAR_1;
  return(VAR_10);
 }
 VAR_10 = FUNC_2(VAR_9, VAR_5, VAR_6, VAR_7, VAR_8);
 if (VAR_10 != VAR_0) {
  FUNC_0(VAR_9, VAR_2);
  VAR_9 = ((void*)0);
 }
 *VAR_4 = VAR_9;
 return (VAR_10);
}
