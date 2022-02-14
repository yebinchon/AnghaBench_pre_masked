
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static void
FUNC_1(UINT32 VAR_5)
{
 bool VAR_6 = 0;

 if (VAR_5 & VAR_2) {
  FUNC_0("NV");
  VAR_6 = 1;
 }
 if (VAR_5 & VAR_0) {
  if (VAR_6 == 1)
   FUNC_0(",");
  FUNC_0("BS");
  VAR_6 = 1;
 }
 if (VAR_5 & VAR_3) {
  if (VAR_6 == 1)
   FUNC_0(",");
  FUNC_0("RS");
  VAR_6 = 1;
 }
 if (VAR_5 & VAR_1) {
  if (VAR_6 == 1)
   FUNC_0(",");
  FUNC_0("HR");
  VAR_6 = 1;
 }
 if (VAR_5 & VAR_4) {
  if (VAR_6 == 1)
   FUNC_0(",");
  FUNC_0("AT");
  VAR_6 = 1;
 }
}
