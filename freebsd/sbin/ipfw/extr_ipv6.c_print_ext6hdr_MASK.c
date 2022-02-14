
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct buf_pr {int dummy; } ;
struct TYPE_3__ {int arg1; } ;
typedef TYPE_1__ ipfw_insn ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct buf_pr*,char*,...) ;

void
FUNC_1(struct buf_pr *VAR_8, ipfw_insn *VAR_9 )
{
 char VAR_10 = ' ';

 FUNC_0(VAR_8, " extension header:");
 if (VAR_9->arg1 & VAR_3) {
  FUNC_0(VAR_8, "%cfragmentation", VAR_10);
  VAR_10 = ',';
 }
 if (VAR_9->arg1 & VAR_4) {
  FUNC_0(VAR_8, "%chop options", VAR_10);
  VAR_10 = ',';
 }
 if (VAR_9->arg1 & VAR_5) {
  FUNC_0(VAR_8, "%crouting options", VAR_10);
  VAR_10 = ',';
 }
 if (VAR_9->arg1 & VAR_6) {
  FUNC_0(VAR_8, "%crthdr0", VAR_10);
  VAR_10 = ',';
 }
 if (VAR_9->arg1 & VAR_7) {
  FUNC_0(VAR_8, "%crthdr2", VAR_10);
  VAR_10 = ',';
 }
 if (VAR_9->arg1 & VAR_1) {
  FUNC_0(VAR_8, "%cdestination options", VAR_10);
  VAR_10 = ',';
 }
 if (VAR_9->arg1 & VAR_0) {
  FUNC_0(VAR_8, "%cauthentication header", VAR_10);
  VAR_10 = ',';
 }
 if (VAR_9->arg1 & VAR_2) {
  FUNC_0(VAR_8, "%cencapsulated security payload", VAR_10);
 }
}
