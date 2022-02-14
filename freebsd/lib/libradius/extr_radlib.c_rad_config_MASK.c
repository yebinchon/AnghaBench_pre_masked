
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rad_handle {int errmsg; int type; } ;
struct in_addr {scalar_t__ s_addr; } ;
typedef int FILE ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;
 int VAR_8 ;
 unsigned long VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (struct rad_handle*,char*,char const*,int,...) ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (char*,int ,int) ;
 int FUNC_6 (struct rad_handle*,char*,int,char*,unsigned long,unsigned long,unsigned long,struct in_addr*) ;
 int FUNC_7 (char*,char**,int,char*,int) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*) ;
 char* FUNC_12 (char**,char*) ;
 void* FUNC_13 (char*,char**,int) ;

int
FUNC_14(struct rad_handle *VAR_11, const char *VAR_12)
{
 FILE *VAR_13;
 char VAR_14[VAR_4];
 int VAR_15;
 int VAR_16;

 if (VAR_12 == ((void*)0))
  VAR_12 = VAR_7;
 if ((VAR_13 = FUNC_2(VAR_12, "r")) == ((void*)0)) {
  FUNC_3(VAR_11, "Cannot open \"%s\": %s", VAR_12, FUNC_10(VAR_10));
  return -1;
 }
 VAR_16 = 0;
 VAR_15 = 0;
 while (FUNC_1(VAR_14, sizeof VAR_14, VAR_13) != ((void*)0)) {
  int VAR_17;
  char *VAR_18[VAR_6];
  int VAR_19;
  char VAR_20[VAR_1];
  char *VAR_21;
  char *VAR_22, *VAR_23;
  char *VAR_24;
  char *VAR_25;
  char *VAR_26;
  char *VAR_27;
  char *VAR_28;
  char *VAR_29;
  char *VAR_30;
  char *VAR_31;
  unsigned long VAR_32;
  unsigned long VAR_33;
  unsigned long VAR_34;
  int VAR_35;
  struct in_addr VAR_36;
  int VAR_37;

  VAR_15++;
  VAR_17 = FUNC_11(VAR_14);

  if (VAR_14[VAR_17 - 1] != '\n') {
   if (VAR_17 == sizeof VAR_14 - 1)
    FUNC_3(VAR_11, "%s:%d: line too long", VAR_12,
        VAR_15);
   else
    FUNC_3(VAR_11, "%s:%d: missing newline", VAR_12,
        VAR_15);
   VAR_16 = -1;
   break;
  }
  VAR_14[VAR_17 - 1] = '\0';


  VAR_19 = FUNC_7(VAR_14, VAR_18, VAR_6, VAR_20, sizeof VAR_20);
  if (VAR_19 == -1) {
   FUNC_3(VAR_11, "%s:%d: %s", VAR_12, VAR_15, VAR_20);
   VAR_16 = -1;
   break;
  }
  if (VAR_19 == 0)
   continue;






  if (FUNC_8(VAR_18[0], "auth") != 0 &&
      FUNC_8(VAR_18[0], "acct") != 0) {
   if (VAR_19 >= VAR_6) {
    FUNC_3(VAR_11, "%s:%d: invalid service type", VAR_12,
        VAR_15);
    VAR_16 = -1;
    break;
   }
   VAR_19++;
   for (VAR_37 = VAR_19; --VAR_37 > 0; )
    VAR_18[VAR_37] = VAR_18[VAR_37 - 1];
   VAR_18[0] = "auth";
  }
  if (VAR_19 < 3) {
   FUNC_3(VAR_11, "%s:%d: missing shared secret", VAR_12,
       VAR_15);
   VAR_16 = -1;
   break;
  }
  VAR_21 = VAR_18[0];
  VAR_22 = VAR_18[1];
  VAR_25 = VAR_18[2];
  VAR_26 = VAR_18[3];
  VAR_27 = VAR_18[4];
  VAR_28 = VAR_18[5];
  VAR_29 = VAR_18[6];


  VAR_31 = VAR_11->type == VAR_8 ? "auth" : "acct";
  if (FUNC_8(VAR_21, VAR_31) != 0)
   continue;


  VAR_23 = VAR_22;
  VAR_22 = FUNC_12(&VAR_23, ":");
  VAR_24 = FUNC_12(&VAR_23, ":");
  if (VAR_24 != ((void*)0)) {
   VAR_35 = FUNC_13(VAR_24, &VAR_30, 10);
   if (*VAR_30 != '\0') {
    FUNC_3(VAR_11, "%s:%d: invalid port", VAR_12,
        VAR_15);
    VAR_16 = -1;
    break;
   }
  } else
   VAR_35 = 0;
  if (VAR_26 != ((void*)0)) {
   VAR_32 = FUNC_13(VAR_26, &VAR_30, 10);
   if (*VAR_30 != '\0') {
    FUNC_3(VAR_11, "%s:%d: invalid timeout", VAR_12,
        VAR_15);
    VAR_16 = -1;
    break;
   }
  } else
   VAR_32 = VAR_9;
  if (VAR_27 != ((void*)0)) {
   VAR_33 = FUNC_13(VAR_27, &VAR_30, 10);
   if (*VAR_30 != '\0') {
    FUNC_3(VAR_11, "%s:%d: invalid maxtries", VAR_12,
        VAR_15);
    VAR_16 = -1;
    break;
   }
  } else
   VAR_33 = VAR_5;

  if (VAR_28 != ((void*)0)) {
   VAR_34 = FUNC_13(VAR_28, &VAR_30, 10);
   if (*VAR_30 != '\0') {
    FUNC_3(VAR_11, "%s:%d: invalid dead_time", VAR_12,
        VAR_15);
    VAR_16 = -1;
    break;
   }
  } else
       VAR_34 = VAR_0;

  if (VAR_29 != ((void*)0)) {
       VAR_36.s_addr = FUNC_4(VAR_29);
   if (VAR_36.s_addr == VAR_3) {
    FUNC_3(VAR_11, "%s:%d: invalid bindto", VAR_12,
        VAR_15);
    VAR_16 = -1;
    break;
   }
  } else
       VAR_36.s_addr = VAR_2;

  if (FUNC_6(VAR_11, VAR_22, VAR_35, VAR_25, VAR_32, VAR_33,
       VAR_34, &VAR_36) == -1) {
   FUNC_9(VAR_20, VAR_11->errmsg);
   FUNC_3(VAR_11, "%s:%d: %s", VAR_12, VAR_15, VAR_20);
   VAR_16 = -1;
   break;
  }
 }

 FUNC_5(VAR_14, 0, sizeof VAR_14);
 FUNC_0(VAR_13);
 return VAR_16;
}
