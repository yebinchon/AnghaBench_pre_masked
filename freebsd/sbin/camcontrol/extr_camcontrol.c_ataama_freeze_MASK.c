
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ccb {int dummy; } ccb ;
typedef int u_int32_t ;
struct cam_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct cam_device*,union ccb*,int,int ,int,int ,int ,int ,int ,int ,int ,int *,int ,int,int) ;

__attribute__((used)) static int
FUNC_1(struct cam_device *VAR_6, int VAR_7,
     u_int32_t VAR_8, union ccb *VAR_9)
{

 return (FUNC_0(VAR_6,
      VAR_9,
      VAR_7,
               VAR_4,
                  VAR_1 | VAR_0,
                   0,
                    VAR_5,
                 VAR_2,
                  VAR_3,
             0,
                      0,
                  ((void*)0),
                   0,
      VAR_8 ? VAR_8 : 30 * 1000,
                    1));
}
