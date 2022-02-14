
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ccb_scsiio {int sense_len; } ;
union ccb {struct ccb_scsiio csio; } ;
typedef int u_int8_t ;
typedef scalar_t__ u_int16_t ;
struct TYPE_8__ {TYPE_2__* pActiveDCB; } ;
struct TYPE_7__ {int IdentifyMsg; } ;
struct TYPE_6__ {int SRBFlag; int SRBState; scalar_t__ CmdBlock; scalar_t__ ScsiCmdLen; union ccb* pccb; } ;
typedef TYPE_1__* PSRB ;
typedef TYPE_2__* PDCB ;
typedef TYPE_3__* PACB ;


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
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void
FUNC_2(PACB VAR_10, PSRB VAR_11, u_int16_t *VAR_12)
{
 PDCB VAR_13;
 u_int8_t * VAR_14;
 u_int16_t VAR_15, VAR_16;
 union ccb *VAR_17;
 struct ccb_scsiio *VAR_18;

 VAR_17 = VAR_11->pccb;
 VAR_18 = &VAR_17->csio;

 FUNC_0(VAR_1 | VAR_2 , VAR_8);
 if (!(VAR_11->SRBFlag & VAR_0)) {
  VAR_16 = (u_int16_t) VAR_11->ScsiCmdLen;
  VAR_14 = (u_int8_t *) VAR_11->CmdBlock;
  for (VAR_15 = 0; VAR_15 < VAR_16; VAR_15++) {
   FUNC_1(*VAR_14, VAR_9);
   VAR_14++;
  }
 } else {
  FUNC_1(VAR_4, VAR_9);
  VAR_13 = VAR_10->pActiveDCB;

  FUNC_1((VAR_13->IdentifyMsg << 5), VAR_9);
  FUNC_1(0, VAR_9);
  FUNC_1(0, VAR_9);

  FUNC_1(VAR_18->sense_len, VAR_9);
  FUNC_1(0, VAR_9);
 }
 VAR_11->SRBState = VAR_6;
 FUNC_0(VAR_3, VAR_8);




 FUNC_1(VAR_5, VAR_7);
}
