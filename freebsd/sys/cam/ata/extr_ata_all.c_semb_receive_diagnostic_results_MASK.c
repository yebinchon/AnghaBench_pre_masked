
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int u_int32_t ;
struct ccb_ataio {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ccb_ataio*,int ,int ,int,int) ;
 int FUNC_1 (struct ccb_ataio*,int ,void (*) (struct cam_periph*,union ccb*),int ,int ,int *,int,int ) ;
 int FUNC_2 (int,int) ;

void
FUNC_3(struct ccb_ataio *VAR_2,
    u_int32_t VAR_3, void (*VAR_4)(struct cam_periph *, union ccb*),
    uint8_t VAR_5, int VAR_6, uint8_t VAR_7,
    uint8_t *VAR_8, uint16_t VAR_9, uint32_t VAR_10)
{

 VAR_9 = FUNC_2(VAR_9, 1020);
 VAR_9 = (VAR_9 + 3) & ~3;
 FUNC_1(VAR_2,
        VAR_3,
        VAR_4,
                 VAR_1,
        VAR_5,
        VAR_8,
        VAR_9,
        VAR_10);
 FUNC_0(VAR_2, VAR_0,
     VAR_6 ? VAR_7 : 0, 0x02, VAR_9 / 4);
}
