
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ccb {int dummy; } ccb ;
struct ccb_hdr {int flags; int func_code; } ;
struct cam_path {int dummy; } ;


 int FUNC_0 (struct cam_path*,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (union ccb*) ;
 int FUNC_2 (struct ccb_hdr*,struct cam_path*,int) ;

void
FUNC_3(struct cam_path *VAR_3)
{
 struct ccb_hdr VAR_4;

 FUNC_0(VAR_3, VAR_0, ("cam_freeze_devq\n"));
 FUNC_2(&VAR_4, VAR_3, 1);
 VAR_4.func_code = VAR_2;
 VAR_4.flags = VAR_1;
 FUNC_1((union ccb *)&VAR_4);
}
