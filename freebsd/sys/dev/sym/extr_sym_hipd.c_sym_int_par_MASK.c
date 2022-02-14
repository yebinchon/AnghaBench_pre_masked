
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u_short ;
typedef int u_char ;
typedef int u32 ;
typedef TYPE_1__* hcb_p ;
typedef TYPE_2__* ccb_p ;
struct TYPE_13__ {int xerr_status; } ;
struct TYPE_12__ {int * msgout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_7 (char*,char*,int,int,int) ;
 TYPE_2__* FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (TYPE_1__*) ;
 char* FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,int ) ;
 int FUNC_12 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_13 (hcb_p VAR_18, u_short VAR_19)
{
 u_char VAR_20 = FUNC_0 (VAR_2);
 u32 VAR_21 = FUNC_1 (VAR_13);
 u32 VAR_22 = FUNC_1 (VAR_11);
 u32 VAR_23 = FUNC_1 (VAR_12);
 u_char VAR_24 = FUNC_0 (VAR_14);
 u_char VAR_25 = VAR_22 >> 24;
 int VAR_26 = VAR_25 & 7;
 ccb_p VAR_27 = FUNC_8(VAR_18, VAR_23);

 FUNC_7("%s: SCSI parity error detected: SCR1=%d DBC=%x SBCL=%x\n",
  FUNC_10(VAR_18), VAR_20, VAR_22, VAR_24);




 if (!(FUNC_0 (VAR_15) & VAR_4)) {
  FUNC_11(VAR_18, VAR_3);
  return;
 }





 if (!VAR_27)
  goto reset_all;





 if ((VAR_25 & 0xc0) || !(VAR_26 & 1) || !(VAR_24 & 0x8))
  goto reset_all;




 FUNC_4 (VAR_1, VAR_0);
 VAR_27->xerr_status |= VAR_8;




 VAR_18->msgout[0] = (VAR_26 == 7) ? VAR_7 : VAR_6;
 if (VAR_26 == 1 || VAR_26 == 5) {

  if (VAR_21 == FUNC_6 (VAR_18, VAR_17))
   FUNC_3 (VAR_21);

  else if (VAR_19 & VAR_5)
   FUNC_9 (VAR_18);

  else {
   FUNC_2 (VAR_16, VAR_21);
   FUNC_3 (FUNC_5 (VAR_18, VAR_10));
  }
 }
 else
  FUNC_3 (FUNC_5 (VAR_18, VAR_9));
 return;

reset_all:
 FUNC_12(VAR_18);
}
