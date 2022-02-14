
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysinfo {int freeram; int bufferram; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct sysinfo*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(void)
{
 struct sysinfo VAR_11;
 static int VAR_12 = 0;
 int VAR_13;
 int VAR_14;
 int VAR_15 = -1;


 FUNC_4(&VAR_11);
 VAR_13 = VAR_11.freeram + VAR_11.bufferram;





 VAR_14 = (VAR_13 < VAR_7);

 FUNC_2();


 FUNC_5(&VAR_0);
 switch (VAR_8) {
 case 0:
  FUNC_0(&VAR_5, 0);
  break;
 case 1:
  if (VAR_14) {
   FUNC_0(&VAR_5, 1);
   VAR_8 = 2;
  } else {
   FUNC_0(&VAR_5, 0);
  }
  break;
 case 2:
  if (VAR_14) {
   FUNC_0(&VAR_5, 1);
  } else {
   FUNC_0(&VAR_5, 0);
   VAR_8 = 1;
  };
  break;
 case 3:
  FUNC_0(&VAR_5, 1);
  break;
 }
 FUNC_6(&VAR_0);


 FUNC_5(&VAR_1);
 switch (VAR_9) {
 case 0:
  VAR_4 = 0;
  break;
 case 1:
  if (VAR_14) {
   VAR_4 = VAR_3
    = VAR_7 /
    (VAR_7-VAR_13);
   VAR_9 = 2;
  } else {
   VAR_4 = 0;
  }
  break;
 case 2:
  if (VAR_14) {
   VAR_4 = VAR_3
    = VAR_7 /
    (VAR_7-VAR_13);
  } else {
   VAR_4 = 0;
   VAR_9 = 1;
  }
  break;
 case 3:
  VAR_4 = VAR_6;
  break;
 }
 FUNC_6(&VAR_1);


 FUNC_7(&VAR_2);
 switch (VAR_10) {
 case 0:
  if (VAR_12 >= 2)
   VAR_15 = 0;
  break;
 case 1:
  if (VAR_14) {
   if (VAR_12 < 2)
    VAR_15 = 1;
   VAR_10 = 2;
  } else {
   if (VAR_12 >= 2)
    VAR_15 = 0;
  }
  break;
 case 2:
  if (VAR_14) {
   if (VAR_12 < 2)
    VAR_15 = 1;
  } else {
   if (VAR_12 >= 2)
    VAR_15 = 0;
   VAR_10 = 1;
  }
  break;
 case 3:
  if (VAR_12 < 2)
   VAR_15 = 1;
  break;
 }
 VAR_12 = VAR_10;
 if (VAR_15 >= 0)
  FUNC_1(VAR_10>1);
 FUNC_8(&VAR_2);

 FUNC_3();
}
