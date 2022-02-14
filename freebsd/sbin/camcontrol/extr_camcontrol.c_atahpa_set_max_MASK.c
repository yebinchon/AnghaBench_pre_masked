
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ccb {int dummy; } ccb ;
typedef int u_int8_t ;
typedef scalar_t__ u_int64_t ;
typedef int u_int32_t ;
typedef int u_int ;
struct cam_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct cam_device*,union ccb*,int,int ,int ,int ,int ,int ,int ,scalar_t__,int,int *,int ,int,int) ;
 int FUNC_1 (struct cam_device*,union ccb*,int *) ;

__attribute__((used)) static int
FUNC_2(struct cam_device *VAR_8, int VAR_9,
       u_int32_t VAR_10, union ccb *VAR_11,
       int VAR_12, u_int64_t VAR_13, int VAR_14)
{
 int VAR_15;
 u_int VAR_16;
 u_int8_t VAR_17;

 VAR_17 = VAR_2;

 if (VAR_12) {
  VAR_16 = VAR_5;
  VAR_17 |= VAR_0;
 } else {
  VAR_16 = VAR_4;
 }


 if (VAR_13)
  VAR_13--;

 VAR_15 = FUNC_0(VAR_8,
      VAR_11,
      VAR_9,
               VAR_6,
                  VAR_17,
                   VAR_1,
                    VAR_7,
                 VAR_16,
                  VAR_3,
             VAR_13,
                      VAR_14,
                  ((void*)0),
                   0,
      VAR_10 ? VAR_10 : 1000,
      VAR_12);

 if (VAR_15)
  return (VAR_15);

 return FUNC_1(VAR_8, VAR_11, ((void*)0));
}
