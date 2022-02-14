
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
 int FUNC_0 (struct ccb_ataio*,int,int,int ,int) ;
 int FUNC_1 (struct ccb_ataio*,int,void (*) (struct cam_periph*,union ccb*),int ,int ,int*,int,int) ;

void
FUNC_2(struct ccb_ataio *VAR_7, uint32_t VAR_8,
  void (*VAR_9)(struct cam_periph *, union ccb *),
  int VAR_10, uint8_t VAR_11, uint64_t VAR_12,
  uint8_t VAR_13, uint8_t *VAR_14, uint32_t VAR_15,
  uint32_t VAR_16)
{
 uint8_t VAR_17, VAR_18;
 uint16_t VAR_19, VAR_20;
 uint32_t VAR_21;

 if (VAR_10 == 0) {
  VAR_17 = VAR_3;

  VAR_19 = (VAR_11 & 0xf) | (VAR_13 << 8);
  VAR_18 = VAR_4;
  VAR_20 = ((VAR_15 >> 9) & 0xffff);
  VAR_21 = 0;
 } else {
  VAR_17 = VAR_1;
  VAR_20 = VAR_2 << 8;
  VAR_21 = (VAR_11 & 0xf) | (VAR_13 << 8);
  VAR_18 = VAR_5;







  if (VAR_15 == (65536 * 512)) {
   VAR_19 = 0;
  } else {






   VAR_19 = ((VAR_15 >> 9) & 0xffff);
  }
 }

 FUNC_1(VAR_7,
                 VAR_8,
                VAR_9,
               VAR_6,
                    0,
                  VAR_14,
                   VAR_15,
                 VAR_16);

 FUNC_0(VAR_7,
             VAR_17,
                  VAR_19,
             VAR_12,
                      VAR_20);

 VAR_7->cmd.flags |= VAR_18;
 if (VAR_21 != 0) {
  VAR_7->ata_flags |= VAR_0;
  VAR_7->aux = VAR_21;
 }
}
