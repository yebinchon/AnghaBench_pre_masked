
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tac_handle {int errmsg; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (struct tac_handle*,char*,char const*,int,...) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (char*,char**,int,char*,int) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*) ;
 char* FUNC_10 (char**,char*) ;
 void* FUNC_11 (char*,char**,int) ;
 int FUNC_12 (struct tac_handle*,char*,int,char*,unsigned long,int) ;

int
FUNC_13(struct tac_handle *VAR_6, const char *VAR_7)
{
 FILE *VAR_8;
 char VAR_9[VAR_1];
 int VAR_10;
 int VAR_11;

 if (VAR_7 == ((void*)0))
  VAR_7 = VAR_2;
 if ((VAR_8 = FUNC_2(VAR_7, "r")) == ((void*)0)) {
  FUNC_3(VAR_6, "Cannot open \"%s\": %s", VAR_7, FUNC_8(VAR_5));
  return -1;
 }
 VAR_11 = 0;
 VAR_10 = 0;
 while (FUNC_1(VAR_9, sizeof VAR_9, VAR_8) != ((void*)0)) {
  int VAR_12;
  char *VAR_13[4];
  int VAR_14;
  char VAR_15[VAR_0];
  char *VAR_16, *VAR_17;
  char *VAR_18;
  char *VAR_19;
  char *VAR_20;
  char *VAR_21;
  char *VAR_22;
  unsigned long VAR_23;
  int VAR_24;
  int VAR_25;

  VAR_10++;
  VAR_12 = FUNC_9(VAR_9);

  if (VAR_9[VAR_12 - 1] != '\n') {
   if (VAR_12 >= sizeof VAR_9 - 1)
    FUNC_3(VAR_6, "%s:%d: line too long", VAR_7,
        VAR_10);
   else
    FUNC_3(VAR_6, "%s:%d: missing newline", VAR_7,
        VAR_10);
   VAR_11 = -1;
   break;
  }
  VAR_9[VAR_12 - 1] = '\0';


  VAR_14 = FUNC_5(VAR_9, VAR_13, 4, VAR_15, sizeof VAR_15);
  if (VAR_14 == -1) {
   FUNC_3(VAR_6, "%s:%d: %s", VAR_7, VAR_10, VAR_15);
   VAR_11 = -1;
   break;
  }
  if (VAR_14 == 0)
   continue;
  if (VAR_14 < 2) {
   FUNC_3(VAR_6, "%s:%d: missing shared secret", VAR_7,
       VAR_10);
   VAR_11 = -1;
   break;
  }
  VAR_16 = VAR_13[0];
  VAR_19 = VAR_13[1];
  VAR_20 = VAR_13[2];
  VAR_21 = VAR_13[3];


  VAR_17 = VAR_16;
  VAR_16 = FUNC_10(&VAR_17, ":");
  VAR_18 = FUNC_10(&VAR_17, ":");
  if (VAR_18 != ((void*)0)) {
   VAR_24 = FUNC_11(VAR_18, &VAR_22, 10);
   if (VAR_18[0] == '\0' || *VAR_22 != '\0') {
    FUNC_3(VAR_6, "%s:%d: invalid port", VAR_7,
        VAR_10);
    VAR_11 = -1;
    break;
   }
  } else
   VAR_24 = 0;
  if (VAR_20 != ((void*)0)) {
   VAR_23 = FUNC_11(VAR_20, &VAR_22, 10);
   if (VAR_20[0] == '\0' || *VAR_22 != '\0') {
    FUNC_3(VAR_6, "%s:%d: invalid timeout", VAR_7,
        VAR_10);
    VAR_11 = -1;
    break;
   }
  } else
   VAR_23 = VAR_4;
  VAR_25 = 0;
  if (VAR_21 != ((void*)0)) {
   if (FUNC_6(VAR_21, "single-connection") == 0)
    VAR_25 |= VAR_3;
   else {
    FUNC_3(VAR_6, "%s:%d: invalid option \"%s\"",
        VAR_7, VAR_10, VAR_21);
    VAR_11 = -1;
    break;
   }
  };

  if (FUNC_12(VAR_6, VAR_16, VAR_24, VAR_19, VAR_23,
      VAR_25) == -1) {
   char VAR_26[VAR_0];

   FUNC_7(VAR_26, VAR_6->errmsg);
   FUNC_3(VAR_6, "%s:%d: %s", VAR_7, VAR_10, VAR_26);
   VAR_11 = -1;
   break;
  }
 }

 FUNC_4(VAR_9, 0, sizeof VAR_9);
 FUNC_0(VAR_8);
 return VAR_11;
}
