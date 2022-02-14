
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int32_t ;
struct ccb_scsiio {int dummy; } ;


 int FUNC_0 (struct ccb_scsiio*,int ,void (*) (struct cam_periph*,union ccb*),int ,int,int,int *,int ,int ,int ,int ) ;

void
FUNC_1(struct ccb_scsiio *VAR_0, u_int32_t VAR_1,
   void (*VAR_2)(struct cam_periph *, union ccb *),
   u_int8_t VAR_3, int VAR_4, int VAR_5,
   u_int8_t *VAR_6, u_int32_t VAR_7, u_int8_t VAR_8,
   u_int32_t VAR_9)
{
 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3,
        VAR_4, VAR_5, VAR_6,
        VAR_7, 0, VAR_8, VAR_9);
}
