
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ccb {int dummy; } ccb ;
struct cam_device {int dummy; } ;
typedef int str ;
typedef int cam_error_string_flags ;
typedef int cam_error_proto_flags ;
typedef int FILE ;


 char* FUNC_0 (struct cam_device*,union ccb*,char*,int,int ,int ) ;
 int FUNC_1 (int *,char*,char*) ;

void
FUNC_2(struct cam_device *VAR_0, union ccb *VAR_1,
  cam_error_string_flags VAR_2, cam_error_proto_flags VAR_3,
  FILE *VAR_4)
{
 char VAR_5[512];

 if ((VAR_0 == ((void*)0)) || (VAR_1 == ((void*)0)) || (VAR_4 == ((void*)0)))
  return;

 FUNC_1(VAR_4, "%s", FUNC_0(VAR_0, VAR_1, VAR_5, sizeof(VAR_5),
  VAR_2, VAR_3));
}
