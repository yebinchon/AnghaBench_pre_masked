
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint16_t ;
typedef int tm ;
typedef int timestr ;
struct tm {int tm_hour; int tm_min; int tm_sec; } ;
struct passwd {void* pw_uid; } ;
struct group {void* gr_gid; } ;
typedef scalar_t__ pid_t ;
typedef void* au_event_t ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
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
 int VAR_15 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct tm*,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int,char*) ;
 scalar_t__ VAR_16 ;
 int FUNC_6 (int,char*,...) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (char*,char*) ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (int ,int *) ;
 void** FUNC_12 (int ) ;
 struct group* FUNC_13 (int ) ;
 int FUNC_14 (int,char**,char*) ;
 struct passwd* FUNC_15 (int ) ;
 void** FUNC_16 (int) ;
 int VAR_17 ;
 void* FUNC_17 (struct tm*) ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 void* VAR_21 ;
 void* VAR_22 ;
 void* VAR_23 ;
 void* VAR_24 ;
 void* VAR_25 ;
 void** VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 void* VAR_29 ;
 void* VAR_30 ;
 void* VAR_31 ;
 int FUNC_18 (int ,char*) ;
 void** FUNC_19 (void**,int) ;
 int FUNC_20 (int *) ;
 int * VAR_32 ;
 char* FUNC_21 (int ,char) ;
 int FUNC_22 (char*,int,char*,struct tm*) ;
 int FUNC_23 (int ,char*,struct tm*) ;
 void* FUNC_24 (int ,char**,int) ;
 int FUNC_25 (char*) ;
 scalar_t__ FUNC_26 (scalar_t__,int*,int ) ;

int
FUNC_27(int VAR_33, char **VAR_34)
{
 struct group *VAR_35;
 struct passwd *VAR_36;
 struct tm VAR_37;
 au_event_t *VAR_38;
 FILE *VAR_39;
 int VAR_40;
 char *VAR_41, *VAR_42;
 int VAR_43;
 char VAR_44[128];
 char *VAR_45;
 uint16_t *VAR_46;





 VAR_42 = ((void*)0);

 while ((VAR_43 = FUNC_14(VAR_33, VAR_34, "Aa:b:c:d:e:f:g:j:m:o:r:u:v")) != -1) {
  switch(VAR_43) {
  case 'A':
   FUNC_1(VAR_20, VAR_3);
   break;

  case 'a':
   if (FUNC_0(VAR_20, VAR_4)) {
    FUNC_25("d is exclusive with a and b");
   }
   FUNC_1(VAR_20, VAR_4);
   FUNC_3(&VAR_37, sizeof(VAR_37));
   FUNC_23(VAR_18, "%Y%m%d%H%M%S", &VAR_37);
   FUNC_22(VAR_44, sizeof(VAR_44), "%Y%m%d%H%M%S",
       &VAR_37);

   VAR_21 = FUNC_17(&VAR_37);
   break;

  case 'b':
   if (FUNC_0(VAR_20, VAR_5)) {
    FUNC_25("d is exclusive with a and b");
   }
   FUNC_1(VAR_20, VAR_5);
   FUNC_3(&VAR_37, sizeof(VAR_37));
   FUNC_23(VAR_18, "%Y%m%d%H%M%S", &VAR_37);
   FUNC_22(VAR_44, sizeof(VAR_44), "%Y%m%d%H%M%S",
       &VAR_37);

   VAR_23 = FUNC_17(&VAR_37);
   break;

  case 'c':
   if (0 != FUNC_11(VAR_18, &VAR_17)) {

    FUNC_25("Incorrect class");
   }
   FUNC_1(VAR_20, VAR_6);
   break;

  case 'd':
   if (FUNC_0(VAR_20, VAR_5) || FUNC_0(VAR_20,
       VAR_4))
    FUNC_25("'d' is exclusive with 'a' and 'b'");
   FUNC_1(VAR_20, VAR_7);
   FUNC_3(&VAR_37, sizeof(VAR_37));
   FUNC_23(VAR_18, "%Y%m%d", &VAR_37);
   FUNC_22(VAR_44, sizeof(VAR_44), "%Y%m%d", &VAR_37);

   VAR_21 = FUNC_17(&VAR_37);
   VAR_37.tm_hour = 23;
   VAR_37.tm_min = 59;
   VAR_37.tm_sec = 59;
   FUNC_22(VAR_44, sizeof(VAR_44), "%Y%m%d", &VAR_37);

   VAR_23 = FUNC_17(&VAR_37);
   break;

  case 'e':
   VAR_25 = FUNC_24(VAR_18, &VAR_42, 10);
   if (*VAR_42 != '\0') {

    if ((VAR_36 = FUNC_15(VAR_18)) == ((void*)0))
     break;
    VAR_25 = VAR_36->pw_uid;
   }
   FUNC_1(VAR_20, VAR_8);
   break;

  case 'f':
   VAR_24 = FUNC_24(VAR_18, &VAR_42, 10);
   if (*VAR_42 != '\0') {

    if ((VAR_35 = FUNC_13(VAR_18)) == ((void*)0))
     break;
    VAR_24 = VAR_35->gr_gid;
   }
   FUNC_1(VAR_20, VAR_9);
   break;

  case 'g':
   VAR_29 = FUNC_24(VAR_18, &VAR_42, 10);
   if (*VAR_42 != '\0') {

    if ((VAR_35 = FUNC_13(VAR_18)) == ((void*)0))
     break;
    VAR_29 = VAR_35->gr_gid;
   }
   FUNC_1(VAR_20, VAR_10);
   break;

  case 'j':
   VAR_31 = FUNC_24(VAR_18, (char **)((void*)0), 10);
   FUNC_1(VAR_20, VAR_11);
   break;

  case 'm':
   if (VAR_26 == ((void*)0)) {
    VAR_27 = 32;
    VAR_26 = FUNC_16(sizeof(*VAR_46) * VAR_27);
    if (VAR_26 == ((void*)0))
     FUNC_5(1, "malloc");
   } else if (VAR_27 == VAR_28) {
    VAR_27 <<= 1;
    VAR_26 = FUNC_19(VAR_26,
        sizeof(*VAR_26) * VAR_27);
    if (VAR_26 == ((void*)0))
     FUNC_5(1, "realloc");
   }
   VAR_46 = &VAR_26[VAR_28++];
   *VAR_46 = FUNC_24(VAR_18, (char **)((void*)0), 10);
   if (*VAR_46 == 0) {

    VAR_38 = FUNC_12(VAR_18);
    if (VAR_38 == ((void*)0))
     FUNC_25("Incorrect event name");
    *VAR_46 = *VAR_38;
   }
   FUNC_1(VAR_20, VAR_12);
   break;

  case 'o':
   VAR_41 = FUNC_21(VAR_18, '=');
   if (VAR_41 != ((void*)0)) {
    *VAR_41 = '\0';
    VAR_41 += 1;
    FUNC_18(VAR_18, VAR_41);
   }
   break;

  case 'r':
   VAR_30 = FUNC_24(VAR_18, &VAR_42, 10);
   if (*VAR_42 != '\0') {
    if ((VAR_36 = FUNC_15(VAR_18)) == ((void*)0))
     break;
    VAR_30 = VAR_36->pw_uid;
   }
   FUNC_1(VAR_20, VAR_13);
   break;

  case 'u':
   VAR_22 = FUNC_24(VAR_18, &VAR_42, 10);
   if (*VAR_42 != '\0') {
    if ((VAR_36 = FUNC_15(VAR_18)) == ((void*)0))
     break;
    VAR_22 = VAR_36->pw_uid;
   }
   FUNC_1(VAR_20, VAR_14);
   break;

  case 'v':
   FUNC_1(VAR_20, VAR_15);
   break;

  case '?':
  default:
   FUNC_25("Unknown option");
  }
 }
 VAR_34 += VAR_19;
 VAR_33 -= VAR_19;

 if (VAR_33 == 0) {





  if (FUNC_20(VAR_32) == -1)
   FUNC_6(VAR_1,
       "Couldn't select records from stdin");
  FUNC_7(VAR_2);
 }




 for (VAR_40 = 0; VAR_40 < VAR_33; VAR_40++) {
  VAR_45 = VAR_34[VAR_40];
  VAR_39 = FUNC_9(VAR_45, "r");
  if (VAR_39 == ((void*)0))
   FUNC_6(VAR_1, "Couldn't open %s", VAR_45);
  if (FUNC_20(VAR_39) == -1)
   FUNC_6(VAR_1, "Couldn't select records %s",
       VAR_45);

  FUNC_8(VAR_39);
 }
 FUNC_7(VAR_2);
}
