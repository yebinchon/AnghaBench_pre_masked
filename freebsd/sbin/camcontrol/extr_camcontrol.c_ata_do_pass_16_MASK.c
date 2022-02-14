
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ccb {int csio; } ;
typedef int u_int8_t ;
typedef int u_int64_t ;
typedef int u_int32_t ;
typedef int u_int16_t ;
struct cam_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int FUNC_1 (int *,int,int *,int,int ,int ,int ,int ,int ,int ,int ,int ,int *,int ,int ,int) ;
 int FUNC_2 (struct cam_device*,union ccb*) ;

__attribute__((used)) static int
FUNC_3(struct cam_device *VAR_5, union ccb *VAR_6, int VAR_7,
        u_int32_t VAR_8, u_int8_t VAR_9, u_int8_t VAR_10,
        u_int8_t VAR_11, u_int8_t VAR_12, u_int16_t VAR_13,
        u_int64_t VAR_14, u_int16_t VAR_15, u_int8_t *VAR_16,
        u_int16_t VAR_17, int VAR_18)
{
 if (VAR_16 != ((void*)0)) {
  if (VAR_8 & VAR_3)
   VAR_10 |= VAR_1;
  else
   VAR_10 |= VAR_0;
 } else {
  VAR_10 |= VAR_2;
 }

 FUNC_0(&VAR_6->csio);

 FUNC_1(&VAR_6->csio,
    VAR_7,
    ((void*)0),
    VAR_8,
    VAR_11,
    VAR_9,
    VAR_10,
    VAR_13,
    VAR_15,
    VAR_14,
    VAR_12,
               0,
    VAR_16,
    VAR_17,
                 VAR_4,
    VAR_18);

 return FUNC_2(VAR_5, VAR_6);
}
