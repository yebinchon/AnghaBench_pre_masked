
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
 int FUNC_0 (int ,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;

__attribute__((used)) static int FUNC_3(void *VAR_29, int VAR_30, char *VAR_31)
{
 switch (VAR_30) {
 case 'x':
  VAR_4 = 1;
  break;
 case 'X':
  VAR_28 = 1;
  break;
 case 'S':
  VAR_11 = 1;
  break;
 case 'D':
  VAR_27 = 1;
  break;
 case 'E':
  VAR_10 = 1;
  break;
 case 'T':
  VAR_5 = 1;
  break;
 case 'c':
  VAR_17 = 1;
  break;
 case 1:
  VAR_8 = 1;
  break;
 case 2:
  VAR_6 = 1;
  break;
 case 3:
  VAR_21 = 1;
  break;
 case 4:
  VAR_20 = 1;
  break;
 case 5:
  VAR_23 = 1;
  break;
 case 6:
  VAR_22 = 1;
  break;
 case 7:
  VAR_19 = 1;
  break;
 case 8:
  VAR_12 = 1;
  break;
 case 9:
  VAR_16 = 1;
  break;
 case 10:
  VAR_15 = 1;
  break;
 case 11:
  VAR_26 = 1;
  break;
 case 12:
  VAR_24 = 1;
  break;
 case 'a':
  VAR_2++;
  VAR_9 = VAR_1;
  break;
 case 'l':
  VAR_7++;
  break;
 case 'r':
  VAR_13++;
  break;
 case 'R':
  VAR_14++;
  break;
 case 25:
  if (!FUNC_2(VAR_0, VAR_31, &VAR_3)) {
   FUNC_0(VAR_18, "dgid format is wrong!\n");
   FUNC_1();
   return 1;
  }
  VAR_25 = 1;
  break;
 default:
  return -1;
 }
 return 0;
}
