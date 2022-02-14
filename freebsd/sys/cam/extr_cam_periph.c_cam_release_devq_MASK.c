
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
typedef void* u_int32_t ;
struct TYPE_2__ {int flags; int func_code; } ;
struct ccb_relsim {void* qfrozen_cnt; void* release_timeout; void* openings; void* release_flags; TYPE_1__ ccb_h; } ;
struct cam_path {int dummy; } ;


 int FUNC_0 (struct cam_path*,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (union ccb*) ;
 int FUNC_2 (TYPE_1__*,struct cam_path*,int ) ;

u_int32_t
FUNC_3(struct cam_path *VAR_4, u_int32_t VAR_5,
   u_int32_t VAR_6, u_int32_t VAR_7,
   int VAR_8)
{
 struct ccb_relsim VAR_9;

 FUNC_0(VAR_4, VAR_0, ("cam_release_devq(%u, %u, %u, %d)\n",
     VAR_5, VAR_6, VAR_7, VAR_8));
 FUNC_2(&VAR_9.ccb_h, VAR_4, VAR_2);
 VAR_9.ccb_h.func_code = VAR_3;
 VAR_9.ccb_h.flags = VAR_8 ? VAR_1 : 0;
 VAR_9.release_flags = VAR_5;
 VAR_9.openings = VAR_6;
 VAR_9.release_timeout = VAR_7;
 FUNC_1((union ccb *)&VAR_9);
 return (VAR_9.qfrozen_cnt);
}
