
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int off_t ;
struct TYPE_2__ {int blkalgn; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 TYPE_1__* VAR_12 ;
 int FUNC_0 (int ,int ) ;
 int VAR_13 ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_14 ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (int,int ,char*,int ) ;
 int VAR_15 ;
 int FUNC_4 (int ,char*,int) ;

int
FUNC_5(char *VAR_16, int VAR_17)
{
 int VAR_18;
 off_t VAR_19;





 if (VAR_14 <= 0)
  return(VAR_14);

 if ((VAR_18 = FUNC_4(VAR_8, VAR_16, VAR_17)) == VAR_17) {
  VAR_15 = 1;
  VAR_13 = 1;
  return(VAR_17);
 }




 if (VAR_18 < 0)
  VAR_14 = VAR_18;
 else
  VAR_14 = 0;

 switch (VAR_9) {
 case 129:
  if ((VAR_18 > 0) && (VAR_18 % VAR_0)) {





   if ((VAR_19 = FUNC_1(VAR_8, (off_t)0L, VAR_7)) < 0)
    break;
   VAR_19 -= (off_t)VAR_18;
   if (FUNC_0(VAR_8, VAR_19) < 0)
    break;
   VAR_18 = VAR_14 = 0;
   break;
  }
  if (VAR_18 >= 0)
   break;



  if ((VAR_11 == VAR_5) || (VAR_11 == VAR_3) || (VAR_11 == VAR_2))
   VAR_18 = VAR_14 = 0;
  break;
 case 128:
 case 131:
 case 132:
  if (VAR_18 >= 0)
   break;
  if (VAR_11 == VAR_1) {
   FUNC_2(0, "Write failed, archive is write protected.");
   VAR_18 = VAR_14 = 0;
   return(0);
  }




  if ((VAR_11 == VAR_5) || (VAR_11 == VAR_4) || (VAR_11 == VAR_6))
   VAR_18 = VAR_14 = 0;
  break;
 case 130:
 default:



  break;
 }
 if (VAR_18 >= 0) {
  if (VAR_18 > 0)
   VAR_15 = 1;
  VAR_13 = 1;
 }





 if (!VAR_15 && (VAR_18 <= 0)) {
  FUNC_2(1,"Unable to append, trailer re-write failed. Quitting.");
  return(VAR_18);
 }

 if (VAR_18 == 0)
  FUNC_2(0, "End of archive volume %d reached", VAR_10);
 else if (VAR_18 < 0)
  FUNC_3(1, VAR_11, "Failed write to archive volume: %d", VAR_10);
 else if (!VAR_12->blkalgn || ((VAR_18 % VAR_12->blkalgn) == 0))
  FUNC_2(0,"WARNING: partial archive write. Archive MAY BE FLAWED");
 else
  FUNC_2(1,"WARNING: partial archive write. Archive IS FLAWED");
 return(VAR_18);
}
