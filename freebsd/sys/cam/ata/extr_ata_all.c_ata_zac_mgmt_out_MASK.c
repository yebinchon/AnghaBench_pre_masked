
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_2__ {int flags; } ;
struct ccb_ataio {int aux; int ata_flags; TYPE_1__ cmd; } ;


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
 int FUNC_0 (struct ccb_ataio*,int,int,int ,int) ;
 int FUNC_1 (struct ccb_ataio*,int,void (*) (struct cam_periph*,union ccb*),int ,int ,int*,int,int) ;

void
FUNC_2(struct ccb_ataio *VAR_10, uint32_t VAR_11,
   void (*VAR_12)(struct cam_periph *, union ccb *),
   int VAR_13, uint8_t VAR_14, uint64_t VAR_15,
   uint8_t VAR_16, uint16_t VAR_17, uint8_t *VAR_18,
   uint32_t VAR_19, uint32_t VAR_20)
{
 uint8_t VAR_21, VAR_22;
 uint16_t VAR_23, VAR_24;
 uint32_t VAR_25;

 if (VAR_13 == 0) {
  VAR_21 = VAR_5;
  VAR_23 = (VAR_14 & 0xf) | (VAR_16 << 8);
  if (VAR_19 == 0) {
   VAR_22 = 0;
   VAR_24 = 0;
  } else {
   VAR_22 = VAR_6;

   VAR_24 = ((VAR_19 >> 9) & 0xffff);
  }
  VAR_25 = 0;
 } else {
  if (VAR_19 == 0) {
   VAR_21 = VAR_1;
   VAR_23 = VAR_2;
   VAR_24 = 0;
  } else {
   VAR_21 = VAR_3;


   VAR_24 = VAR_4 << 8;
   if (VAR_19 == (65536 * 512)) {
    VAR_23 = 0;
   } else {






    VAR_23 = ((VAR_19 >> 9) & 0xffff);
   }
  }
  VAR_25 = (VAR_14 & 0xf) | (VAR_16 << 8);

  VAR_22 = VAR_7;
 }

 FUNC_1(VAR_10,
                 VAR_11,
                VAR_12,
               (VAR_19 > 0) ? VAR_9 : VAR_8,
                    0,
                  VAR_18,
                   VAR_19,
                 VAR_20);

 FUNC_0(VAR_10,
             VAR_21,
                  VAR_23,
             VAR_15,
                      VAR_24);

 VAR_10->cmd.flags |= VAR_22;
 if (VAR_25 != 0) {
  VAR_10->ata_flags |= VAR_0;
  VAR_10->aux = VAR_25;
 }
}
