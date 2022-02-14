
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int mname ;
struct TYPE_14__ {unsigned int* param; unsigned int ibits; unsigned int obits; unsigned int ibitm; unsigned int obitm; int logval; } ;
typedef TYPE_1__ mbreg_t ;
struct TYPE_15__ {int* isp_mboxtmp; unsigned int isp_lastmbxcmd; unsigned int isp_obits; int isp_mboxbsy; } ;
typedef TYPE_2__ ispsoftc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int FUNC_2 (TYPE_2__*) ;
 unsigned int FUNC_3 (unsigned int) ;
 unsigned int FUNC_4 (unsigned int) ;
 int FUNC_5 (char*,int,char*,unsigned int) ;
 int FUNC_6 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 (TYPE_2__*) ;


 int VAR_9 ;
 int FUNC_11 (unsigned int) ;


 int FUNC_12 (TYPE_2__*) ;


 int FUNC_13 (TYPE_2__*,TYPE_1__*) ;
 char** VAR_10 ;
 int FUNC_14 (TYPE_2__*,int ,char*,...) ;
 char** VAR_11 ;

__attribute__((used)) static void
FUNC_15(ispsoftc_t *VAR_12, mbreg_t *VAR_13)
{
 const char *VAR_14, *VAR_15, *VAR_16;
 char VAR_17[16], VAR_18[16];
 unsigned int VAR_19, VAR_20, VAR_21, VAR_22;

 VAR_22 = VAR_13->param[0];
 if (FUNC_8(VAR_12)) {
  if (VAR_22 > VAR_7) {
   VAR_13->param[0] = 137;
   FUNC_14(VAR_12, VAR_6, "Unknown Command 0x%x", VAR_22);
   return;
  }
  VAR_14 = VAR_10[VAR_22];
  VAR_19 = FUNC_0(VAR_22);
  VAR_20 = FUNC_1(VAR_22);
 } else {
  if (VAR_22 > VAR_8) {
   VAR_13->param[0] = 137;
   FUNC_14(VAR_12, VAR_6, "Unknown Command 0x%x", VAR_22);
   return;
  }
  VAR_14 = VAR_11[VAR_22];
  VAR_19 = FUNC_3(VAR_22);
  VAR_20 = FUNC_4(VAR_22);
 }
 if (VAR_14 == ((void*)0)) {
  VAR_14 = VAR_17;
  FUNC_5(VAR_17, sizeof VAR_17, "opcode %x", VAR_22);
 }
 FUNC_14(VAR_12, VAR_5, "Mailbox Command '%s'", VAR_14);




 VAR_19 |= VAR_13->ibits;
 VAR_20 |= VAR_13->obits;




 VAR_19 &= VAR_13->ibitm;
 VAR_20 &= VAR_13->obitm;


 if (VAR_19 == 0 && VAR_20 == 0) {
  VAR_13->param[0] = 139;
  FUNC_14(VAR_12, VAR_6, "no parameters for 0x%x", VAR_22);
  return;
 }




 if (FUNC_10(VAR_12)) {
  VAR_13->param[0] = 130;
  goto out;
 }

 for (VAR_21 = 0; VAR_21 < FUNC_2(VAR_12); VAR_21++) {
  if (VAR_19 & (1 << VAR_21)) {
   FUNC_14(VAR_12, VAR_5, "IN mbox %d = 0x%04x", VAR_21,
       VAR_13->param[VAR_21]);
   FUNC_6(VAR_12, FUNC_11(VAR_21), VAR_13->param[VAR_21]);
  }
  VAR_12->isp_mboxtmp[VAR_21] = VAR_13->param[VAR_21] = 0;
 }

 VAR_12->isp_lastmbxcmd = VAR_22;




 VAR_12->isp_obits = VAR_20;
 VAR_12->isp_mboxbsy = 1;




 if (FUNC_7(VAR_12)) {
  FUNC_6(VAR_12, VAR_0, VAR_2);
 } else {
  FUNC_6(VAR_12, VAR_1, VAR_3);
 }




 FUNC_13(VAR_12, VAR_13);




 if (VAR_13->param[0] == 128) {
  VAR_12->isp_mboxbsy = 0;
  FUNC_12(VAR_12);
  goto out;
 }




 for (VAR_21 = 0; VAR_21 < FUNC_2(VAR_12); VAR_21++) {
  if (VAR_20 & (1 << VAR_21)) {
   VAR_13->param[VAR_21] = VAR_12->isp_mboxtmp[VAR_21];
   FUNC_14(VAR_12, VAR_5, "OUT mbox %d = 0x%04x", VAR_21,
       VAR_13->param[VAR_21]);
  }
 }

 VAR_12->isp_mboxbsy = 0;
 FUNC_12(VAR_12);
out:
 if (VAR_13->logval == 0 || VAR_13->param[0] == VAR_9)
  return;

 if ((VAR_13->param[0] & 0xbfe0) == 0 &&
     (VAR_13->logval & FUNC_9(VAR_13->param[0])) == 0)
  return;

 VAR_15 = ((void*)0);
 VAR_16 = "";
 switch (VAR_13->param[0]) {
 case 137:
  VAR_15 = "INVALID COMMAND";
  break;
 case 138:
  VAR_15 = "HOST INTERFACE ERROR";
  break;
 case 129:
  VAR_15 = "TEST FAILED";
  break;
 case 140:
  VAR_15 = "COMMAND ERROR";
  FUNC_5(VAR_18, sizeof(VAR_18), " subcode 0x%x",
      VAR_13->param[1]);
  VAR_16 = VAR_18;
  break;
 case 139:
  VAR_15 = "COMMAND PARAMETER ERROR";
  break;
 case 131:
  VAR_15 = "PORT ID ALREADY IN USE";
  break;
 case 133:
  VAR_15 = "LOOP ID ALREADY IN USE";
  break;
 case 142:
  VAR_15 = "ALL LOOP IDS IN USE";
  break;
 case 132:
  VAR_15 = "NOT LOGGED IN";
  break;
 case 135:
  VAR_15 = "LINK DOWN ERROR";
  break;
 case 134:
  VAR_15 = "LOOPBACK ERROR";
  break;
 case 141:
  VAR_15 = "CHECKSUM ERROR";
  break;
 case 136:
  VAR_15 = "INVALID PRODUCT KEY";
  break;
 case 130:
  VAR_15 = "REGISTERS BUSY";
  break;
 case 128:
  VAR_15 = "TIMEOUT";
  break;
 default:
  FUNC_5(VAR_18, sizeof VAR_18, "error 0x%x", VAR_13->param[0]);
  VAR_15 = VAR_18;
  break;
 }
 if (VAR_15) {
  FUNC_14(VAR_12, VAR_4, "Mailbox Command '%s' failed (%s%s)",
      VAR_14, VAR_15, VAR_16);
 }
}
