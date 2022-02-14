
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int flags; } ;
struct TYPE_7__ {TYPE_1__ cmd; } ;
union ccb {TYPE_2__ ataio; } ;
typedef int u_int8_t ;
typedef scalar_t__ u_int64_t ;
typedef int u_int32_t ;
typedef int u_int16_t ;
struct cam_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int,int ,scalar_t__,int ) ;
 int FUNC_2 (TYPE_2__*,int,int ,scalar_t__,int ) ;
 int FUNC_3 (struct cam_device*,union ccb*) ;
 int FUNC_4 (struct cam_device*,union ccb*,int,int ,int,int,int,int,int ,scalar_t__,int ,int*,int ,int) ;
 int FUNC_5 (struct cam_device*) ;
 int FUNC_6 (TYPE_2__*,int,int *,int ,int,int*,int ,int) ;

__attribute__((used)) static int
FUNC_7(struct cam_device *VAR_3, union ccb *VAR_4, int VAR_5,
    u_int32_t VAR_6, u_int8_t VAR_7, u_int8_t VAR_8,
    u_int8_t VAR_9, u_int8_t VAR_10, u_int16_t VAR_11,
    u_int64_t VAR_12, u_int16_t VAR_13, u_int8_t *VAR_14,
    u_int16_t VAR_15, int VAR_16, int VAR_17)
{
 int VAR_18;

 VAR_18 = FUNC_5(VAR_3);
 if (VAR_18 == -1)
  return (1);

 if (VAR_18 == 1) {
  return (FUNC_4(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
          VAR_8, VAR_9, VAR_10, VAR_11,
          VAR_12, VAR_13, VAR_14, VAR_15,
          VAR_16));
 }

 FUNC_0(&VAR_4->ataio);
 FUNC_6(&VAR_4->ataio,
         VAR_5,
         ((void*)0),
         VAR_6,
         VAR_9,
         VAR_14,
         VAR_15,
         VAR_16);

 if (VAR_17 || VAR_12 > VAR_1)
  FUNC_2(&VAR_4->ataio, VAR_10, VAR_11, VAR_12, VAR_13);
 else
  FUNC_1(&VAR_4->ataio, VAR_10, VAR_11, VAR_12, VAR_13);

 if (VAR_8 & VAR_0)
  VAR_4->ataio.cmd.flags |= VAR_2;

 return FUNC_3(VAR_3, VAR_4);
}
