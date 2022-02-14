
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccb_setasync {int callback_arg; int (* callback ) (int ,int ,struct cam_path*,struct ccb_pathinq*) ;} ;
struct ccb_pathinq {int dummy; } ;
struct cam_path {int dummy; } ;
struct cam_eb {int path_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,struct cam_path*,struct ccb_pathinq*) ;
 int FUNC_1 (struct cam_path*,int *,int ,int ,int ) ;
 int FUNC_2 (struct ccb_pathinq*,struct cam_path*) ;
 int FUNC_3 (struct cam_path*) ;
 int FUNC_4 (struct cam_path*) ;
 int FUNC_5 (struct cam_path*) ;

__attribute__((used)) static int
FUNC_6(struct cam_eb *VAR_3, void *VAR_4)
{
 struct cam_path VAR_5;
 struct ccb_pathinq VAR_6;
 struct ccb_setasync *VAR_7 = (struct ccb_setasync *)VAR_4;

 FUNC_1(&VAR_5, ((void*)0),
    VAR_3->path_id,
    VAR_2,
    VAR_1);
 FUNC_3(&VAR_5);
 FUNC_2(&VAR_6, &VAR_5);
 VAR_7->callback(VAR_7->callback_arg,
       VAR_0,
       &VAR_5, &VAR_6);
 FUNC_4(&VAR_5);
 FUNC_5(&VAR_5);

 return(1);
}
