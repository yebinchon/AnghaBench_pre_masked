
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_8 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int,int ,char*,int ) ;

int
FUNC_3(char *VAR_9, int VAR_10)
{
 int VAR_11 = 0;




 if (VAR_7 <= 0)
  return(VAR_7);




 switch (VAR_2) {
 case 128:
  if ((VAR_11 = FUNC_1(VAR_1, VAR_9, VAR_10)) > 0) {







   VAR_6 = 1;
   if (VAR_11 != VAR_8) {
    VAR_8 = VAR_11;
    if (VAR_8 % VAR_0)
     VAR_5 = 1;
   }
   return(VAR_11);
  }
  break;
 case 129:
 case 132:
 case 131:
 case 130:
 default:







  if ((VAR_11 = FUNC_1(VAR_1, VAR_9, VAR_10)) > 0) {
   VAR_6 = 1;
   return(VAR_11);
  }
  break;
 }




 VAR_7 = VAR_11;
 if (VAR_11 < 0)
  FUNC_2(1, VAR_4, "Failed read on archive volume %d", VAR_3);
 else
  FUNC_0(0, "End of archive volume %d reached", VAR_3);
 return(VAR_11);
}
