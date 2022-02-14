
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32 ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,char*,...) ;

__attribute__((used)) static void
FUNC_1(
 FILE * VAR_9,
 u_int32 VAR_10
 )
{
 static const char VAR_11[] = "";
 static const char VAR_12[] = ",";
 const char *VAR_13;

 if (0 == VAR_10) {
  FUNC_0(VAR_9, " none\n");
  return;
 }
 VAR_13 = VAR_11;
 if (VAR_10 & VAR_8) {
  FUNC_0(VAR_9, " system_peer");
  VAR_13 = VAR_12;
 }
 if (VAR_10 & VAR_2) {
  FUNC_0(VAR_9, "%s config", VAR_13);
  VAR_13 = VAR_12;
 }
 if (VAR_10 & VAR_5) {
  FUNC_0(VAR_9, "%s refclock", VAR_13);
  VAR_13 = VAR_12;
 }
 if (VAR_10 & VAR_0) {
  FUNC_0(VAR_9, "%s auth", VAR_13);
  VAR_13 = VAR_12;
 }
 if (VAR_10 & VAR_4) {
  FUNC_0(VAR_9, "%s prefer", VAR_13);
  VAR_13 = VAR_12;
 }
 if (VAR_10 & VAR_3) {
  FUNC_0(VAR_9, "%s iburst", VAR_13);
  VAR_13 = VAR_12;
 }
 if (VAR_10 & VAR_1) {
  FUNC_0(VAR_9, "%s burst", VAR_13);
  VAR_13 = VAR_12;
 }
 if (VAR_10 & VAR_6) {
  FUNC_0(VAR_9, "%s candidate", VAR_13);
  VAR_13 = VAR_12;
 }
 if (VAR_10 & VAR_7) {
  FUNC_0(VAR_9, "%s shortlist", VAR_13);
  VAR_13 = VAR_12;
 }
 FUNC_0(VAR_9, "\n");
}
