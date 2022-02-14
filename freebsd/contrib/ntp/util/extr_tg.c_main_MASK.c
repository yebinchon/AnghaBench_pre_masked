
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct tm {int tm_min; int tm_hour; int tm_yday; int tm_year; int tm_sec; } ;
struct timeval {int tv_usec; int tv_sec; } ;
typedef int device ;
typedef int code ;
struct TYPE_7__ {int port; int gain; int sample_rate; int channels; int precision; int encoding; } ;
struct TYPE_8__ {TYPE_1__ play; } ;
typedef TYPE_2__ audio_info_t ;
struct TYPE_11__ {int sw; int arg; } ;
struct TYPE_10__ {int sw; int arg; } ;
struct TYPE_9__ {int sw; int arg; } ;


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

 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_19 ;
 int FUNC_3 (int,char**,char*) ;
 int FUNC_4 (struct timeval*,int *) ;
 struct tm* FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__,int ,TYPE_2__*) ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int FUNC_7 (char*,int ,int) ;
 scalar_t__ FUNC_8 (char*,int ) ;
 int VAR_22 ;
 int FUNC_9 (int,int,int ) ;
 int VAR_23 ;
 int FUNC_10 (char*,...) ;
 TYPE_5__* VAR_24 ;
 TYPE_4__* VAR_25 ;
 TYPE_3__* VAR_26 ;
 int FUNC_11 (int) ;
 int VAR_27 ;
 int FUNC_12 (char*,int,char*,int,int,int,int,int,...) ;
 int FUNC_13 (int ,char*,int*,...) ;
 char* FUNC_14 (int ) ;
 int FUNC_15 (char*,int ,int) ;
 int VAR_28 ;
 int VAR_29 ;

int
FUNC_16(
 int VAR_30,
 char **VAR_31
 )
{
 struct timeval VAR_32;
 audio_info_t VAR_33;
 struct tm *VAR_34 = ((void*)0);
 char VAR_35[50];
 char VAR_36[100];
 int VAR_37, VAR_38, VAR_39, VAR_40, VAR_41;
 int VAR_42, VAR_43, VAR_44, VAR_45;
 int VAR_46;




 FUNC_15(VAR_35, VAR_6, sizeof(VAR_35));
 VAR_45 = 0;
 while ((VAR_38 = FUNC_3(VAR_30, VAR_31, "a:dhilsu:v:y:")) != -1) {
  switch (VAR_38) {

  case 'a':
   FUNC_15(VAR_35, VAR_22, sizeof(VAR_35));
   break;

  case 'd':
   VAR_15++;
   break;

  case 'h':
   VAR_28 = 1200;
   break;

  case 'i':
   VAR_17 = 131;
   break;

  case 'l':
   VAR_20++;
   break;

  case 's':
   VAR_23 |= VAR_3;
   break;

  case 'u':
   FUNC_13(VAR_22, "%d", &VAR_16);
   if (VAR_16 < 0)
    VAR_16 = FUNC_0(VAR_16);
   else
    VAR_16 |= 0x8;
   break;

  case 'v':
   FUNC_13(VAR_22, "%d", &VAR_21);
   break;

  case 'y':
   FUNC_13(VAR_22, "%2d%3d%2d%2d", &VAR_45, &VAR_44,
       &VAR_43, &VAR_42);
   VAR_29++;
   break;

  defult:
   FUNC_10("invalid option %c\n", VAR_38);
   break;
  }
 }




 VAR_19 = FUNC_8("/dev/audio", VAR_13);
 if (VAR_19 <= 0) {
  FUNC_10("audio open %s\n", FUNC_14(VAR_18));
  FUNC_2(1);
 }
 VAR_37 = FUNC_6(VAR_19, VAR_1, &VAR_33);
 if (VAR_37 < 0) {
  FUNC_10("audio control %s\n", FUNC_14(VAR_18));
  FUNC_2(0);
 }
 VAR_33.play.port = VAR_23;
 VAR_33.play.gain = VAR_21;
 VAR_33.play.sample_rate = VAR_14;
 VAR_33.play.channels = 1;
 VAR_33.play.precision = 8;
 VAR_33.play.encoding = VAR_0;
 FUNC_10("port %d gain %d rate %d chan %d prec %d encode %d\n",
     VAR_33.play.port, VAR_33.play.gain, VAR_33.play.sample_rate,
     VAR_33.play.channels, VAR_33.play.precision,
     VAR_33.play.encoding);
 FUNC_6(VAR_19, VAR_2, &VAR_33);





 if (!VAR_29) {
  FUNC_4(&VAR_32, ((void*)0));
  VAR_34 = FUNC_5(&VAR_32.tv_sec);
  VAR_42 = VAR_34->tm_min;
  VAR_43 = VAR_34->tm_hour;
  VAR_44 = VAR_34->tm_yday + 1;
  VAR_45 = VAR_34->tm_year % 100;
  VAR_27 = VAR_34->tm_sec;






  FUNC_1(VAR_14 - VAR_32.tv_usec * 8 / 1000);
 }
 FUNC_7(VAR_36, 0, sizeof(VAR_36));
 switch (VAR_17) {





 case 128:
  FUNC_10("year %d day %d time %02d:%02d:%02d tone %d\n",
      VAR_45, VAR_44, VAR_43, VAR_42, VAR_27, VAR_28);
  FUNC_12(VAR_36, sizeof(VAR_36), "%01d%03d%02d%02d%01d",
      VAR_45 / 10, VAR_44, VAR_43, VAR_42, VAR_45 % 10);
  FUNC_10("%s\n", VAR_36);
  VAR_41 = 8;
  for (VAR_46 = 0; VAR_46 <= VAR_27; VAR_46++) {
   if (VAR_24[VAR_46].sw == 135)
    VAR_41--;
  }
  break;





 case 131:
  FUNC_10("sbs %x year %d day %d time %02d:%02d:%02d\n",
      0, VAR_45, VAR_44, VAR_43, VAR_42, VAR_27);
  break;
 }





 while(1) {







  VAR_27 = (VAR_27 + 1) % 60;
  if (VAR_27 == 0) {
   VAR_42++;
   if (VAR_42 >= 60) {
    VAR_42 = 0;
    VAR_43++;
   }
   if (VAR_43 >= 24) {
    VAR_43 = 0;
    VAR_44++;
   }




   if (VAR_44 >= (VAR_45 & 0x3 ? 366 : 367)) {
    if (VAR_20) {
     FUNC_11(VAR_4);
     FUNC_10("\nleap!");
     VAR_20 = 0;
    }
    VAR_44 = 1;
    VAR_45++;
   }
   if (VAR_17 == 128) {
    FUNC_12(VAR_36, sizeof(VAR_36),
        "%01d%03d%02d%02d%01d", VAR_45 / 10,
        VAR_44, VAR_43, VAR_42, VAR_45 % 10);
    FUNC_10("\n%s\n", VAR_36);
    VAR_41 = 8;
   }
  }
  if (VAR_17 == 131) {
   FUNC_12(VAR_36, sizeof(VAR_36),
       "%04x%04d%06d%02d%02d%02d", 0, VAR_45, VAR_44,
       VAR_43, VAR_42, VAR_27);
   FUNC_10("%s\n", VAR_36);
   VAR_41 = 19;
  }




  switch(VAR_17) {






  case 131:
   for (VAR_46 = 0; VAR_46 < 100; VAR_46++) {
    if (VAR_46 < 10) {
     VAR_40 = VAR_26[VAR_46].sw;
     VAR_39 = VAR_26[VAR_46].arg;
    } else {
     VAR_40 = VAR_25[VAR_46 % 10].sw;
     VAR_39 = VAR_25[VAR_46 % 10].arg;
    }
    switch(VAR_40) {

    case 137:
     if (VAR_36[VAR_41] & VAR_39) {
      FUNC_9(VAR_10, 1000, VAR_7);
      FUNC_9(VAR_10, 1000, VAR_8);
      FUNC_10("1");
     } else {
      FUNC_9(VAR_9, 1000, VAR_7);
      FUNC_9(VAR_11, 1000, VAR_8);
      FUNC_10("0");
     }
     break;

    case 135:
     VAR_41--;
     FUNC_10(" ");
     FUNC_9(VAR_39, 1000, VAR_7);
     FUNC_9(10 - VAR_39, 1000, VAR_8);
     break;

    case 129:
     FUNC_9(VAR_39, 1000, VAR_7);
     FUNC_9(10 - VAR_39, 1000, VAR_8);
     FUNC_10("M ");
     break;
    }
    if (VAR_41 < 0)
     break;
   }
   FUNC_10("\n");
   break;





  case 128:
   VAR_40 = VAR_24[VAR_27].sw;
   VAR_39 = VAR_24[VAR_27].arg;
   switch(VAR_40) {

   case 136:
    FUNC_11(VAR_39);
    break;

   case 137:
    if (VAR_36[VAR_41] & VAR_39) {
     FUNC_11(VAR_5);
     FUNC_10("1");
    } else {
     FUNC_11(VAR_4);
     FUNC_10("0");
    }
    break;

   case 130:
    if (VAR_20) {
     FUNC_11(VAR_5);
     FUNC_10("L ");
    } else {
     FUNC_11(VAR_4);
     FUNC_10("  ");
    }
    break;

   case 135:
    VAR_41--;
    FUNC_11(VAR_39);
    FUNC_10(" ");
    break;

   case 129:
    FUNC_9(VAR_39, VAR_28, VAR_7);
    FUNC_9(1000 - VAR_39, VAR_28, VAR_12);
    break;

   case 132:
    if (VAR_16 & VAR_39)
     FUNC_11(VAR_5);
    else
     FUNC_11(VAR_4);
    break;

   case 134:
    VAR_41--;
    if (VAR_15)
     FUNC_11(VAR_5);
    else
     FUNC_11(VAR_4);
    FUNC_10(" ");
    break;

   case 133:
    if (VAR_15)
     FUNC_11(VAR_5);
    else
     FUNC_11(VAR_4);
    break;
   }
  }
 }
}
