
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
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct ccb_scsiio*,int,void (*) (struct cam_periph*,union ccb*),int ,int,int,int,int,int,int ,int,int ,int ,int,int ,int*,int,int*,size_t,int ,int ,int) ;

int
FUNC_1(struct ccb_scsiio *VAR_12, uint32_t VAR_13,
       void (*VAR_14)(struct cam_periph *, union ccb *),
       uint8_t VAR_15, int VAR_16,
       uint8_t VAR_17, uint64_t VAR_18, uint8_t VAR_19,
       uint8_t *VAR_20, uint32_t VAR_21,
       uint8_t *VAR_22, size_t VAR_23,
       uint8_t VAR_24, uint32_t VAR_25)
{
 uint8_t VAR_26, VAR_27;
 uint16_t VAR_28, VAR_29;
 uint32_t VAR_30;
 int VAR_31;
 int VAR_32;

 VAR_32 = 0;
 VAR_31 = VAR_2 | VAR_1;

 if (VAR_16 == 0) {
  VAR_26 = VAR_9;

  VAR_28 = (VAR_17 & 0xf) | (VAR_19 << 8);
  VAR_29 = VAR_21 >> 9;
  VAR_27 = VAR_5;
  VAR_31 |= VAR_4;
  VAR_30 = 0;
 } else {
  VAR_31 |= VAR_3;

  VAR_26 = VAR_7;
  VAR_29 = VAR_8 << 8;
  if (VAR_21 == (65536 * 512)) {
   VAR_28 = 0;
  } else if (VAR_21 <= (65535 * 512)) {
   VAR_28 = ((VAR_21 >> 9) & 0xffff);
  } else {

   VAR_32 = 1;
   goto bailout;
  }
  VAR_30 = (VAR_17 & 0xf) | (VAR_19 << 8),
  VAR_27 = VAR_6;
 }

 VAR_27 |= VAR_0;

 VAR_32 = FUNC_0(VAR_12,
     VAR_13,
     VAR_14,
               VAR_10,
     VAR_15,
                  VAR_27,
                   VAR_31,
                  VAR_28,
                      VAR_29,
             VAR_18,
                 VAR_26,
                0,
             0,
                   VAR_30,
                 0,
                  VAR_20,
                   (VAR_21 >> 9) * 512,
                     VAR_22,
                         VAR_23,
                          0,
                   VAR_11,
                 VAR_25);

bailout:
 return (VAR_32);
}
