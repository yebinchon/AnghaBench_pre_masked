
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtop {int mt_count; int mt_op; } ;
typedef int off_t ;
struct TYPE_2__ {long st_blksize; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 long VAR_2 ;





 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 TYPE_1__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (int ,int ,struct mtop*) ;
 int FUNC_1 (int ,int,int ) ;
 scalar_t__ VAR_13 ;
 int FUNC_2 (int,char*) ;

int
FUNC_3(void)
{
 long VAR_14;
 off_t VAR_15;
 off_t VAR_16;
 struct mtop VAR_17;






 if ((VAR_11 > 0) || (VAR_13 == 0))
  return(-1);

 if ((VAR_6 == VAR_0) || (VAR_6 == VAR_1)) {
  FUNC_2(1, "Cannot allow updates to an archive with flaws.");
  return(-1);
 }
 if (VAR_12)
  VAR_10 = 1;

 switch(VAR_9) {
 case 128:
  if (VAR_12) {
   VAR_12 = 0;
   VAR_13 = 1;
   break;
  }
  VAR_17.mt_op = VAR_3;
  VAR_17.mt_count = 1;
  if (FUNC_0(VAR_7, VAR_4, &VAR_17) < 0)
   break;
  VAR_13 = 1;
  break;
 case 129:
 case 131:
 case 132:



  VAR_12 = 0;
  if (((VAR_14 = VAR_8.st_blksize) <= 0) || (VAR_9 != 129))
   VAR_14 = VAR_2;
  if ((VAR_15 = FUNC_1(VAR_7, (off_t)0L, VAR_5)) < 0)
   break;
  VAR_16 = VAR_14 - (VAR_15 % (off_t)VAR_14);
  if (FUNC_1(VAR_7, VAR_16, VAR_5) < 0)
   break;
  VAR_13 = 1;
  break;
 case 130:
 default:



  VAR_12 = 0;
  break;
 }
 if (VAR_13 <= 0) {
  FUNC_2(1, "Unable to recover from an archive read failure.");
  return(-1);
 }
 FUNC_2(0, "Attempting to recover from an archive read failure.");
 return(0);
}
