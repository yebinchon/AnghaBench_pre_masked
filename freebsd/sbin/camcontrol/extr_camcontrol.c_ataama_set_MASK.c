
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ccb {int dummy; } ccb ;
typedef scalar_t__ u_int64_t ;
typedef int u_int32_t ;
struct cam_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct cam_device*,union ccb*,int,int ,int,int ,int ,int ,int ,scalar_t__,int ,int *,int ,int,int) ;
 int FUNC_1 (struct cam_device*,union ccb*,int *) ;

__attribute__((used)) static int
FUNC_2(struct cam_device *VAR_7, int VAR_8,
       u_int32_t VAR_9, union ccb *VAR_10, u_int64_t VAR_11)
{
 int VAR_12;


 if (VAR_11)
  VAR_11--;

 VAR_12 = FUNC_0(VAR_7,
      VAR_10,
      VAR_8,
               VAR_5,
                  VAR_2 | VAR_0,
                   VAR_1,
                    VAR_6,
                 VAR_3,
                  VAR_4,
             VAR_11,
                      0,
                  ((void*)0),
                   0,
      VAR_9 ? VAR_9 : 30 * 1000,
                    1);

 if (VAR_12)
  return (VAR_12);

 return FUNC_1(VAR_7, VAR_10, ((void*)0));
}
