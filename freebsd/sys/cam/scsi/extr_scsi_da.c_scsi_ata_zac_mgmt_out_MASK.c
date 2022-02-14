
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct ccb_scsiio*,int,void (*) (struct cam_periph*,union ccb*),int ,int,int,int,int,int,int ,int,int ,int ,int,int ,int*,int,int*,size_t,int ,int ,int) ;

int
FUNC_1(struct ccb_scsiio *VAR_17, uint32_t VAR_18,
        void (*VAR_19)(struct cam_periph *, union ccb *),
        uint8_t VAR_20, int VAR_21,
        uint8_t VAR_22, uint64_t VAR_23, uint8_t VAR_24,
        uint8_t *VAR_25, uint32_t VAR_26,
        uint8_t *VAR_27, size_t VAR_28,
        uint8_t VAR_29, uint32_t VAR_30)
{
 uint8_t VAR_31, VAR_32, VAR_33;
 uint16_t VAR_34;
 uint32_t VAR_35, VAR_36;
 int VAR_37;

 VAR_37 = 0;

 if (VAR_21 == 0) {
  VAR_31 = VAR_13;
  VAR_34 = (VAR_22 & 0xf) | (VAR_24 << 8);
  VAR_33 = VAR_1;
  if (VAR_26 == 0) {
   VAR_32 = VAR_8;
   VAR_33 |= VAR_4;
   VAR_35 = 0;
  } else {
   VAR_32 = VAR_6;
   VAR_33 |= VAR_5 |
         VAR_2;
   VAR_35 = ((VAR_26 >> 9) & 0xffff);
  }
  VAR_36 = 0;
 } else {
  VAR_33 = VAR_1;
  if (VAR_26 == 0) {
   VAR_31 = VAR_9;
   VAR_34 = VAR_10;





   VAR_35 = 0;
   VAR_33 |= VAR_4;
  } else {
   VAR_31 = VAR_11;







   VAR_35 = VAR_12 << 8;

   VAR_33 |= VAR_3 |
         VAR_2;
   if (VAR_26 == (65536 * 512)) {
    VAR_34 = 0;
   } else if (VAR_26 <= (65535 * 512)) {
    VAR_34 = ((VAR_26 >> 9) & 0xffff);
   } else {

    VAR_37 = 1;
    goto bailout;
   }

  }

  VAR_36 = (VAR_22 & 0xf) | (VAR_24 << 8);
  VAR_32 = VAR_7;
 }

 VAR_32 |= VAR_0;

 VAR_37 = FUNC_0(VAR_17,
     VAR_18,
     VAR_19,
               (VAR_26 > 0) ? VAR_15 : VAR_14,
     VAR_20,
                  VAR_32,
                   VAR_33,
                  VAR_34,
                      VAR_35,
             VAR_23,
                 VAR_31,
                0,
             0,
                   VAR_36,
                 0,
                  VAR_25,
                   VAR_26,
                     VAR_27,
                         VAR_28,
                          0,
                   VAR_16,
                 VAR_30);

bailout:

 return (VAR_37);
}
