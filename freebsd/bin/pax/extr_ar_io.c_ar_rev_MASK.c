
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtop {int mt_count; int mt_op; } ;
typedef int off_t ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,struct mtop*) ;
 int FUNC_2 (int ,int,int ) ;
 int VAR_8 ;
 int FUNC_3 (int,char*) ;
 int VAR_9 ;
 int FUNC_4 (int,int ,char*,...) ;

int
FUNC_5(off_t VAR_10)
{
 off_t VAR_11;
 struct mtop VAR_12;
 int VAR_13;




 if (VAR_8 < 0)
  return(VAR_8);

 switch(VAR_5) {
 case 130:
  if (VAR_10 <= 0)
   break;



  FUNC_3(1, "Reverse positioning on pipes is not supported.");
  VAR_8 = -1;
  return(-1);
 case 129:
 case 132:
 case 131:
 default:
  if (VAR_10 <= 0)
   break;
  if ((VAR_11 = FUNC_2(VAR_4, (off_t)0L, VAR_2)) < 0) {
   FUNC_4(1, VAR_7,
      "Unable to obtain current archive byte offset");
   VAR_8 = -1;
   return(-1);
  }
  if ((VAR_11 -= VAR_10) < (off_t)0L) {
   if (VAR_6 > 1) {



    FUNC_3(1,"Reverse position on previous volume.");
    VAR_8 = -1;
    return(-1);
   }
   VAR_11 = (off_t)0L;
  }
  if (FUNC_2(VAR_4, VAR_11, VAR_3) < 0) {
   FUNC_4(1, VAR_7, "Unable to seek archive backwards");
   VAR_8 = -1;
   return(-1);
  }
  break;
 case 128:







  if ((VAR_13 = FUNC_0()) <= 0) {
   VAR_8 = -1;
   return(-1);
  }





  VAR_9 = VAR_13;





  if (VAR_10 <= 0)
   break;




  if (VAR_10 % VAR_13) {
   FUNC_3(1,
       "Tape drive unable to backspace requested amount");
   VAR_8 = -1;
   return(-1);
  }




  VAR_12.mt_op = VAR_0;
  VAR_12.mt_count = VAR_10/VAR_13;
  if (FUNC_1(VAR_4, VAR_1, &VAR_12) < 0) {
   FUNC_4(1,VAR_7, "Unable to backspace tape %d blocks.",
       VAR_12.mt_count);
   VAR_8 = -1;
   return(-1);
  }
  break;
 }
 VAR_8 = 1;
 return(0);
}
