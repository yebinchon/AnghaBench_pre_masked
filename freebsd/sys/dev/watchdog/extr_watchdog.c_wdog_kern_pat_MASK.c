
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct timespec {int tv_sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int*) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,int,int ,char*) ;
 int FUNC_3 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ,int ,struct timespec*) ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_7 (int ,int) ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int FUNC_8 () ;

int
FUNC_9(u_int VAR_18)
{
 int VAR_19;
 static int VAR_20 = 1;

 if ((VAR_18 & VAR_4) != 0 && (VAR_18 & VAR_3) > 0)
  return (VAR_1);

 if ((VAR_18 & VAR_4) != 0) {




  FUNC_1((VAR_9 & ~VAR_3) == 0);
  VAR_18 &= ~VAR_4;
  VAR_18 |= VAR_9;
 } else {




  VAR_9 = (VAR_18 & VAR_3);
  VAR_10 = VAR_9;
  VAR_11 = FUNC_5(VAR_9) / VAR_7;
 }
 if ((VAR_18 & VAR_3) == VAR_5) {
  VAR_18 = 0;


  VAR_19 = 0;
 } else {

  VAR_19 = VAR_2;
 }
 if (VAR_16) {
  if (VAR_18 == 0) {
   FUNC_3(&VAR_15);
  } else {
   (void) FUNC_2(&VAR_15,
       FUNC_5(VAR_18), VAR_17, "soft");
  }
  VAR_19 = 0;
 } else {
  FUNC_0(VAR_8, VAR_18, &VAR_19);
 }





 if (VAR_19 == VAR_2 && VAR_20 && *FUNC_8 != ((void*)0)) {
  FUNC_8)();
  FUNC_0(VAR_8, VAR_18, &VAR_19);
 }
 VAR_20 = 0;

 FUNC_7(VAR_14, 1);




 if (!VAR_19) {
  struct timespec VAR_21;

  VAR_19 = FUNC_4(VAR_6 ,
      VAR_0, &VAR_21);
  if (!VAR_19) {
   VAR_12 = VAR_21.tv_sec;
   VAR_13 = 1;
  }
 }
 return (VAR_19);
}
