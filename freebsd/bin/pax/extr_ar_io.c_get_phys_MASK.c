
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtop {int mt_count; void* mt_op; } ;
typedef int scbuf ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,int ,struct mtop*) ;
 int VAR_6 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int,int ,char*,...) ;

__attribute__((used)) static int
FUNC_4(void)
{
 int VAR_7 = 0;
 int VAR_8;
 int VAR_9;
 struct mtop VAR_10;
 char VAR_11[VAR_0];





 if (VAR_6 == 1) {




  while ((VAR_8 = FUNC_2(VAR_4, VAR_11, sizeof(VAR_11))) > 0)
   VAR_7 += VAR_8;
  if (VAR_8 < 0) {
   FUNC_3(1, VAR_5, "Unable to locate tape filemark.");
   return(-1);
  }
 }





 VAR_10.mt_op = VAR_1;
 VAR_10.mt_count = 1;
 if (FUNC_0(VAR_4, VAR_3, &VAR_10) < 0) {
  FUNC_3(1, VAR_5, "Unable to backspace over tape filemark.");
  return(-1);
 }





 VAR_10.mt_op = VAR_2;
 VAR_10.mt_count = 1;
 if (FUNC_0(VAR_4, VAR_3, &VAR_10) < 0) {
  FUNC_3(1, VAR_5, "Unable to backspace over last tape block.");
  return(-1);
 }
 if ((VAR_9 = FUNC_2(VAR_4, VAR_11, sizeof(VAR_11))) <= 0) {
  FUNC_3(1, VAR_5, "Cannot determine archive tape blocksize.");
  return(-1);
 }





 while ((VAR_8 = FUNC_2(VAR_4, VAR_11, sizeof(VAR_11))) > 0)
  ;
 if (VAR_8 < 0) {
  FUNC_3(1, VAR_5, "Unable to locate tape filemark.");
  return(-1);
 }
 VAR_10.mt_op = VAR_1;
 VAR_10.mt_count = 1;
 if (FUNC_0(VAR_4, VAR_3, &VAR_10) < 0) {
  FUNC_3(1, VAR_5, "Unable to backspace over tape filemark.");
  return(-1);
 }




 VAR_6 = 1;




 if (VAR_7 == 0)
  return(VAR_9);





 if (VAR_7 % VAR_9) {
  FUNC_1(1, "Tape drive unable to backspace requested amount");
  return(-1);
 }





 VAR_10.mt_op = VAR_2;
 VAR_10.mt_count = VAR_7/VAR_9;
 if (FUNC_0(VAR_4, VAR_3, &VAR_10) < 0) {
  FUNC_3(1,VAR_5,"Unable to backspace tape over %d pad blocks",
      VAR_10.mt_count);
  return(-1);
 }
 return(VAR_9);
}
