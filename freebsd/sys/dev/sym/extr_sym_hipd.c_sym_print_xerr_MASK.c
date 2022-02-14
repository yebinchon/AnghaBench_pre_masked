
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ccb_p ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(ccb_p VAR_5, int VAR_6)
{
 if (VAR_6 & VAR_2) {
  FUNC_0(VAR_5);
  FUNC_1 ("unrecovered SCSI parity error.\n");
 }
 if (VAR_6 & VAR_1) {
  FUNC_0(VAR_5);
  FUNC_1 ("extraneous data discarded.\n");
 }
 if (VAR_6 & VAR_0) {
  FUNC_0(VAR_5);
  FUNC_1 ("illegal scsi phase (4/5).\n");
 }
 if (VAR_6 & VAR_3) {
  FUNC_0(VAR_5);
  FUNC_1 ("ODD transfer in DATA OUT phase.\n");
 }
 if (VAR_6 & VAR_4) {
  FUNC_0(VAR_5);
  FUNC_1 ("ODD transfer in DATA IN phase.\n");
 }
}
