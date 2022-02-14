
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_int ;
typedef int u_char ;
typedef int sockaddr_u ;
typedef int keystr ;
typedef int keyid_t ;
struct TYPE_4__ {int keyid; int keytype; size_t seclen; struct TYPE_4__* next; int * keyacclist; int secbuf; } ;
typedef TYPE_1__ KeyDataT ;
typedef int FILE ;


 int VAR_0 ;
 int * FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int,int,int ,size_t,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_6 (char*) ;
 int FUNC_7 () ;
 TYPE_1__* FUNC_8 (int) ;
 int FUNC_9 (int *) ;
 char* FUNC_10 (char*,int,int *) ;
 int * FUNC_11 (char const*,char*) ;
 int FUNC_12 (TYPE_1__*) ;
 scalar_t__ FUNC_13 (char*,int ,int *) ;
 int FUNC_14 (unsigned char) ;
 int * FUNC_15 (int *,int *,unsigned int) ;
 int FUNC_16 (char*,int *) ;
 int FUNC_17 (scalar_t__*,char*,...) ;
 int FUNC_18 (int ,...) ;
 size_t FUNC_19 (size_t,int) ;
 int FUNC_20 (int ,char*,char const*,...) ;
 scalar_t__ VAR_6 ;
 char* FUNC_21 (char**) ;
 char* FUNC_22 (char const*,int) ;
 size_t FUNC_23 (char*) ;
 int FUNC_24 (unsigned char) ;

int
FUNC_25(
 const char *VAR_7
 )
{
 FILE *VAR_8;
 char *VAR_9;
 char *VAR_10;
 keyid_t VAR_11;
 int VAR_12;
 char VAR_13[512];
 u_char VAR_14[32];
 size_t VAR_15;
 size_t VAR_16;
 u_int VAR_17;
 KeyDataT *VAR_18 = ((void*)0);
 KeyDataT *VAR_19 = ((void*)0);




 VAR_8 = FUNC_11(VAR_7, "r");
 if (VAR_8 == ((void*)0)) {
  FUNC_20(VAR_2, "authreadkeys: file '%s': %m",
      VAR_7);
  goto onerror;
 }
 FUNC_1();






 VAR_17 = 0;
 while ((VAR_9 = FUNC_10(VAR_13, sizeof VAR_13, VAR_8)) != ((void*)0)) {
  if (VAR_17 > VAR_6)
   break;
  VAR_10 = FUNC_21(&VAR_9);
  if (VAR_10 == ((void*)0))
   continue;




  VAR_11 = FUNC_6(VAR_10);
  if (VAR_11 < 1) {
   FUNC_17(&VAR_17,
      "authreadkeys: cannot change key %s",
      VAR_10);
   continue;
  }

  if (VAR_11 > VAR_4) {
   FUNC_17(&VAR_17,
      "authreadkeys: key %s > %d reserved for Autokey",
      VAR_10, VAR_4);
   continue;
  }




  VAR_10 = FUNC_21(&VAR_9);
  if (VAR_10 == ((void*)0)) {
   FUNC_17(&VAR_17,
      "authreadkeys: no key type for key %d",
      VAR_11);
   continue;
  }
  if (!(*VAR_10 == 'M' || *VAR_10 == 'm')) {
   FUNC_17(((void*)0),
      "authreadkeys: invalid type for key %d",
      VAR_11);
   VAR_12 = 0;
  } else {
   VAR_12 = VAR_1;
  }
  VAR_10 = FUNC_21(&VAR_9);
  if (VAR_10 == ((void*)0)) {
   FUNC_17(&VAR_17,
      "authreadkeys: no key for key %d", VAR_11);
   continue;
  }
  VAR_19 = ((void*)0);
  VAR_15 = FUNC_23(VAR_10);
  if (VAR_15 <= 20) {
   VAR_19 = FUNC_8(sizeof(KeyDataT) + VAR_15);
   VAR_19->keyacclist = ((void*)0);
   VAR_19->keyid = VAR_11;
   VAR_19->keytype = VAR_12;
   VAR_19->seclen = VAR_15;
   FUNC_18(VAR_19->secbuf, VAR_10, VAR_15);
  } else {
   static const char VAR_20[] = "0123456789abcdef";
   u_char VAR_21;
   char *VAR_22;
   size_t VAR_23;

   VAR_23 = FUNC_19(VAR_15, 2 * sizeof(VAR_14));
   for (VAR_16 = 0; VAR_16 < VAR_23; VAR_16++) {
    VAR_22 = FUNC_22(VAR_20, FUNC_24((unsigned char)VAR_10[VAR_16]));
    if (VAR_22 == ((void*)0))
     break;
    VAR_21 = (u_char)(VAR_22 - VAR_20);
    if (VAR_16 & 1)
     VAR_14[VAR_16 / 2] |= VAR_21;
    else
     VAR_14[VAR_16 / 2] = VAR_21 << 4;
   }
   if (VAR_16 < VAR_23) {
    FUNC_17(&VAR_17,
       "authreadkeys: invalid hex digit for key %d",
       VAR_11);
    continue;
   }
   VAR_15 = VAR_23/2;
   VAR_19 = FUNC_8(sizeof(KeyDataT) + VAR_15);
   VAR_19->keyacclist = ((void*)0);
   VAR_19->keyid = VAR_11;
   VAR_19->keytype = VAR_12;
   VAR_19->seclen = VAR_15;
   FUNC_18(VAR_19->secbuf, VAR_14, VAR_15);
  }

  VAR_10 = FUNC_21(&VAR_9);
  if (VAR_10 != ((void*)0)) {
   char *VAR_24 = VAR_10;

   while (VAR_24) {
    char *VAR_25;
    char *VAR_26;
    unsigned int VAR_27;
    sockaddr_u VAR_28;

    VAR_25 = FUNC_22(VAR_24, (int)',');
    if (VAR_25) {
     *VAR_25 = '\0';
    }
    VAR_26 = FUNC_22(VAR_24, (int)'/');
    if (VAR_26) {
     char *VAR_29;

     *VAR_26++ = '\0';
     VAR_27 = 0;
     VAR_29 = VAR_26;

     while (*VAR_29 != '\0') {
      if (!FUNC_14((unsigned char)*VAR_29))
          break;
      if (VAR_27 > 1000)
          break;
      VAR_27 = 10 * VAR_27 + (*VAR_29++ - '0');
     }
     if (*VAR_29 != '\0') {
      FUNC_17(&VAR_17,
         "authreadkeys: Invalid character in subnet specification for <%s/%s> in key %d",
         VAR_29, VAR_26, VAR_11);
      goto nextip;
     }
    } else {
     VAR_27 = VAR_5;
    }

    if (FUNC_13(VAR_24, VAR_0, &VAR_28)) {

        if ((VAR_27 < VAR_5) &&
     ( (FUNC_3(&VAR_28) && VAR_27 > 32) ||
       (FUNC_4(&VAR_28) && VAR_27 > 128))) {
      FUNC_17(((void*)0),
         "authreadkeys: excessive subnet mask <%s/%s> for key %d",
         VAR_24, VAR_26, VAR_11);
        }
        VAR_19->keyacclist = FUNC_15(
     VAR_19->keyacclist, &VAR_28, VAR_27);
    } else {
     FUNC_17(&VAR_17,
        "authreadkeys: invalid IP address <%s> for key %d",
        VAR_24, VAR_11);
    }

   nextip:
    if (VAR_25) {
     VAR_24 = VAR_25 + 1;
    } else {
     VAR_24 = 0;
    }
   }
  }


  if (0 == VAR_12) {
   FUNC_12(VAR_19);
   VAR_19 = ((void*)0);
   continue;
  }

  FUNC_2(((void*)0) != VAR_19);
  VAR_19->next = VAR_18;
  VAR_18 = VAR_19;
 }
 FUNC_9(VAR_8);
 if (VAR_17 > 0) {
  const char * VAR_30 = "";
  if (VAR_17 > VAR_6)
   VAR_30 = " (emergency break)";
  FUNC_20(VAR_2,
   "authreadkeys: rejecting file '%s' after %u error(s)%s",
   VAR_7, VAR_17, VAR_30);
  goto onerror;
 }


 FUNC_7();

 while (((void*)0) != (VAR_19 = VAR_18)) {
  VAR_18 = VAR_19->next;
  FUNC_5(VAR_19->keyid, VAR_19->keytype,
          VAR_19->secbuf, VAR_19->seclen, VAR_19->keyacclist);
  VAR_19->keyacclist = ((void*)0);
  FUNC_12(VAR_19);
 }
 return (1);

  onerror:

 while (((void*)0) != (VAR_19 = VAR_18)) {
  VAR_18 = VAR_19->next;
  FUNC_12(VAR_19);
 }
 return (0);
}
