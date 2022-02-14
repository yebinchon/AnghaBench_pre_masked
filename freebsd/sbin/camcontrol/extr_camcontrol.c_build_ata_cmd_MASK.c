
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; } ;
struct TYPE_6__ {TYPE_1__ cmd; scalar_t__ aux; int ata_flags; } ;
union ccb {int csio; TYPE_2__ ataio; } ;
typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
typedef scalar_t__ camcontrol_devtype ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (TYPE_2__*,int,int ,scalar_t__,int ) ;
 int FUNC_1 (TYPE_2__*,int,int ,scalar_t__,int ) ;
 int FUNC_2 (TYPE_2__*,scalar_t__,int *,scalar_t__,int,int*,scalar_t__,scalar_t__) ;
 int FUNC_3 (int *,scalar_t__,int *,scalar_t__,int,int,int,int ,int ,scalar_t__,int,int ,int ,scalar_t__,int ,int*,scalar_t__,int*,size_t,int ,int,scalar_t__) ;

int
FUNC_4(union ccb *VAR_11, uint32_t VAR_12, uint32_t VAR_13,
    uint8_t VAR_14, uint8_t VAR_15, uint8_t VAR_16, uint16_t VAR_17,
    uint16_t VAR_18, uint64_t VAR_19, uint8_t VAR_20, uint32_t VAR_21,
    uint8_t *VAR_22, uint32_t VAR_23, uint8_t *VAR_24,
    size_t VAR_25, uint8_t VAR_26, uint32_t VAR_27,
    int VAR_28, camcontrol_devtype VAR_29)
{
 int VAR_30 = 0;

 if (VAR_29 == VAR_10) {
  FUNC_2(&VAR_11->ataio,
                  VAR_12,
                 ((void*)0),
                VAR_13,
                     VAR_14,
                   VAR_22,
                    VAR_23,
                  VAR_27);
  if (VAR_28 || VAR_19 > VAR_6)
   FUNC_1(&VAR_11->ataio, VAR_20, VAR_17, VAR_19,
       VAR_18);
  else
   FUNC_0(&VAR_11->ataio, VAR_20, VAR_17, VAR_19,
       VAR_18);

  if (VAR_21 != 0) {
   VAR_11->ataio.ata_flags |= VAR_5;
   VAR_11->ataio.aux = VAR_21;
  }

  if (VAR_16 & VAR_1)
   VAR_11->ataio.cmd.flags |= VAR_9;

  if ((VAR_15 & VAR_4) == VAR_2)
   VAR_11->ataio.cmd.flags |= VAR_7;
  else if ((VAR_15 & VAR_4) == VAR_3)
   VAR_11->ataio.cmd.flags |= VAR_8;
 } else {
  if (VAR_28 || VAR_19 > VAR_6)
   VAR_15 |= VAR_0;

  VAR_30 = FUNC_3(&VAR_11->csio,
                  VAR_12,
                 ((void*)0),
                VAR_13,
                     VAR_14,
                   VAR_15,
                    VAR_16,
                   VAR_17,
                       VAR_18,
              VAR_19,
                  VAR_20,
                 0,
              0,
                    VAR_21,
                  0,
                   VAR_22,
                    VAR_23,
                      VAR_24,
                          VAR_25,
                           0,
                    VAR_26,
                  VAR_27);
 }

 return (VAR_30);
}
