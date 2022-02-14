
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct ccb_ataio {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ccb_ataio*,int ,int ,int,int ) ;
 int FUNC_1 (struct ccb_ataio*,int,void (*) (struct cam_periph*,union ccb*),int ,int ,int *,int,int) ;

void
FUNC_2(struct ccb_ataio *VAR_4, uint32_t VAR_5,
      void (*VAR_6)(struct cam_periph *, union ccb *),
      uint32_t VAR_7, uint32_t VAR_8, uint16_t VAR_9,
      uint32_t VAR_10, uint8_t *VAR_11, uint32_t VAR_12,
      uint32_t VAR_13)
{
 uint64_t VAR_14;

 FUNC_1(VAR_4,
                 1,
                VAR_6,
               VAR_3,
                    0,
                  VAR_11,
                   VAR_12,
                 VAR_13);

 VAR_14 = (((uint64_t)VAR_8 & 0xff00) << 32) |
       ((VAR_8 & 0x00ff) << 8) |
       (VAR_7 & 0xff);

 FUNC_0(VAR_4,
             (VAR_10 & VAR_2) ? VAR_0 :
       VAR_1,
                  0,
             VAR_14,
                      VAR_9);
}
