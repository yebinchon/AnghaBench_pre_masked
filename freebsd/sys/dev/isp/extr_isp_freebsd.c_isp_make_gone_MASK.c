
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isp_fc {int sim; } ;
struct cam_path {int dummy; } ;
typedef int ispsoftc_t ;
typedef int fcportdb_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct isp_fc* FUNC_0 (int *,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct cam_path*,int *) ;
 scalar_t__ FUNC_3 (struct cam_path**,int *,int ,int,int ) ;
 int FUNC_4 (struct cam_path*) ;

__attribute__((used)) static void
FUNC_5(ispsoftc_t *VAR_3, fcportdb_t *VAR_4, int VAR_5, int VAR_6)
{
 struct cam_path *VAR_7;
 struct isp_fc *VAR_8 = FUNC_0(VAR_3, VAR_5);

 if (FUNC_3(&VAR_7, ((void*)0), FUNC_1(VAR_8->sim), VAR_6, VAR_1) == VAR_2) {
  FUNC_2(VAR_0, VAR_7, ((void*)0));
  FUNC_4(VAR_7);
 }
}
