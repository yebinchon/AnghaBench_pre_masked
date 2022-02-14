
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct ccb_scsiio {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ccb_scsiio*,int,void (*) (struct cam_periph*,union ccb*),int ,int,int,int,int ,int ,int,int,int ,int ,int ,int ,int*,int,int *,int ,int ,int,int) ;

int
FUNC_1(struct ccb_scsiio *VAR_7, uint32_t VAR_8,
    void (*VAR_9)(struct cam_periph *, union ccb *),
    uint8_t VAR_10, uint32_t VAR_11,
    uint32_t VAR_12, uint16_t VAR_13,
    uint8_t VAR_14, uint8_t *VAR_15, uint32_t VAR_16,
    uint8_t VAR_17, uint32_t VAR_18)
{
 uint8_t VAR_19, VAR_20;
 uint16_t VAR_21;
 uint64_t VAR_22;
 int VAR_23;

 VAR_23 = 0;

 switch (VAR_14) {
 case 129:
  VAR_21 = VAR_13;
  VAR_19 = VAR_4;
  VAR_20 = 129;
  break;
 case 128:
 default:
  VAR_21 = VAR_13;
  VAR_19 = VAR_5;
  VAR_20 = 128;
  break;
 }

 VAR_22 = (((uint64_t)VAR_12 & 0xff00) << 32) |
       ((VAR_12 & 0x00ff) << 8) |
       (VAR_11 & 0xff);

 VAR_20 |= VAR_0;

 VAR_23 = FUNC_0(VAR_7,
          VAR_8,
          VAR_9,
                   VAR_6,
          VAR_10,
                       VAR_20,
                       VAR_3 |
         VAR_1 |
         VAR_2,
                      0,
                           VAR_21,
                  VAR_22,
                      VAR_19,
                     0,
                  0,
                        0,
                     0,
          VAR_15,
          VAR_16,
                          ((void*)0),
                              0,
                               0,
          VAR_17,
          VAR_18);

 return (VAR_23);
}
