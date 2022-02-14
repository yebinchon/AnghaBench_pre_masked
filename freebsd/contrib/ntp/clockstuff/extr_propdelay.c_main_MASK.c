
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 double FUNC_0 (char*) ;
 char* VAR_6 ;
 char* VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (double,double,double,double,double,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,...) ;
 char* VAR_9 ;
 char* VAR_10 ;
 char* VAR_11 ;
 char* VAR_12 ;
 char* VAR_13 ;
 char* VAR_14 ;
 double VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_4 () ;
 double FUNC_5 (char*,int) ;
 int FUNC_6 (int,char**,char*) ;
 char* VAR_17 ;
 int VAR_18 ;
 char* VAR_19 ;
 int FUNC_7 (double,double,double,double,double,double,char*) ;
 int VAR_20 ;
 char* VAR_21 ;
 char* VAR_22 ;
 char* VAR_23 ;
 char* VAR_24 ;

int
FUNC_8(
 int VAR_25,
 char *VAR_26[]
 )
{
 int VAR_27;
 int VAR_28 = 0;
 double VAR_29, VAR_30;
 double VAR_31, VAR_32;
 double VAR_33, VAR_34;

 FUNC_4();

 VAR_19 = VAR_26[0];
 while ((VAR_27 = FUNC_6(VAR_25, VAR_26, "dh:CWG")) != VAR_1)
     switch (VAR_27) {
  case 'd':
      ++VAR_8;
      break;
  case 'h':
      VAR_16++;
      VAR_15 = FUNC_0(VAR_17);
      if (VAR_15 <= 0.0) {
       (void) FUNC_3(VAR_20, "height %s unlikely\n",
        VAR_17);
       VAR_28++;
      }
      break;
  case 'C':
      VAR_0++;
      break;
  case 'W':
      VAR_5++;
      break;
  case 'G':
      VAR_2++;
      break;
  default:
      VAR_28++;
      break;
     }
 if (VAR_28 || (!(VAR_0 || VAR_5 || VAR_2) && VAR_18+4 != VAR_25) ||
     ((VAR_0 || VAR_5 || VAR_2) && VAR_18+2 != VAR_25)) {
  (void) FUNC_3(VAR_20,
          "usage: %s [-d] [-h height] lat1 long1 lat2 long2\n",
          VAR_19);
  (void) FUNC_3(VAR_20," - or -\n");
  (void) FUNC_3(VAR_20,
          "usage: %s -CWG [-d] lat long\n",
          VAR_19);
  FUNC_2(2);
 }


 if (!(VAR_0 || VAR_5 || VAR_2)) {
  VAR_29 = FUNC_5(VAR_26[VAR_18], 1);
  VAR_30 = FUNC_5(VAR_26[VAR_18 + 1], 0);
  VAR_31 = FUNC_5(VAR_26[VAR_18 + 2], 1);
  VAR_32 = FUNC_5(VAR_26[VAR_18 + 3], 0);
  if (VAR_16) {
   FUNC_1(VAR_29, VAR_30, VAR_31, VAR_32, VAR_15, "");
  } else {
   FUNC_1(VAR_29, VAR_30, VAR_31, VAR_32, (double)VAR_3,
        "summer propagation, ");
   FUNC_1(VAR_29, VAR_30, VAR_31, VAR_32, (double)VAR_4,
        "winter propagation, ");
  }
 } else if (VAR_5) {



  VAR_29 = FUNC_5(VAR_26[VAR_18], 1);
  VAR_30 = FUNC_5(VAR_26[VAR_18 + 1], 0);
  VAR_31 = FUNC_5(VAR_23, 1);
  VAR_32 = FUNC_5(VAR_24, 0);
  if (VAR_16) {
   FUNC_1(VAR_29, VAR_30, VAR_31, VAR_32, VAR_15, "WWV  ");
  } else {
   FUNC_1(VAR_29, VAR_30, VAR_31, VAR_32, (double)VAR_3,
        "WWV  summer propagation, ");
   FUNC_1(VAR_29, VAR_30, VAR_31, VAR_32, (double)VAR_4,
        "WWV  winter propagation, ");
  }




  VAR_31 = FUNC_5(VAR_21, 1);
  VAR_32 = FUNC_5(VAR_22, 0);
  if (VAR_16) {
   FUNC_1(VAR_29, VAR_30, VAR_31, VAR_32, VAR_15, "WWVH ");
  } else {
   FUNC_1(VAR_29, VAR_30, VAR_31, VAR_32, (double)VAR_3,
        "WWVH summer propagation, ");
   FUNC_1(VAR_29, VAR_30, VAR_31, VAR_32, (double)VAR_4,
        "WWVH winter propagation, ");
  }
 } else if (VAR_0) {
  VAR_29 = FUNC_5(VAR_26[VAR_18], 1);
  VAR_30 = FUNC_5(VAR_26[VAR_18 + 1], 0);
  VAR_31 = FUNC_5(VAR_6, 1);
  VAR_32 = FUNC_5(VAR_7, 0);
  if (VAR_16) {
   FUNC_1(VAR_29, VAR_30, VAR_31, VAR_32, VAR_15, "CHU ");
  } else {
   FUNC_1(VAR_29, VAR_30, VAR_31, VAR_32, (double)VAR_3,
        "CHU summer propagation, ");
   FUNC_1(VAR_29, VAR_30, VAR_31, VAR_32, (double)VAR_4,
        "CHU winter propagation, ");
  }
 } else if (VAR_2) {
  VAR_29 = FUNC_5(VAR_12, 1);
  VAR_30 = FUNC_5(VAR_13, 0);
  VAR_33 = FUNC_5(VAR_26[VAR_18], 1);
  VAR_34 = FUNC_5(VAR_26[VAR_18 + 1], 0);

  VAR_31 = FUNC_5(VAR_10, 1);

  VAR_32 = FUNC_5(VAR_14, 0);
  FUNC_7(VAR_29, VAR_30, VAR_31, VAR_32, VAR_33, VAR_34,
   "GOES Delay via WEST");

  VAR_32 = FUNC_5(VAR_11, 0);
  FUNC_7(VAR_29, VAR_30, VAR_31, VAR_32, VAR_33, VAR_34,
   "GOES Delay via STBY");

  VAR_32 = FUNC_5(VAR_9, 0);
  FUNC_7(VAR_29, VAR_30, VAR_31, VAR_32, VAR_33, VAR_34,
   "GOES Delay via EAST");

 }
 FUNC_2(0);
}
