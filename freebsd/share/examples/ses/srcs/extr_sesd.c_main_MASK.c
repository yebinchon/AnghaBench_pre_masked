
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int encioc_enc_status_t ;
typedef int * caddr_t ;


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
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_17 ;
 int FUNC_3 (int ,char const*,char*,...) ;
 int FUNC_4 (int,char**,char*) ;
 scalar_t__ FUNC_5 (int,int ,int *) ;
 int* FUNC_6 (int) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (char*,int,int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int) ;
 int VAR_20 ;
 char* FUNC_11 (int ) ;
 int FUNC_12 (int ,char*,char*) ;

int
FUNC_13(int VAR_21, char **VAR_22)
{
 static const char *VAR_23 =
     "usage: %s [ -c ] [ -d ] [ -t pollinterval ] device [ device ]\n";
 int VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29;
 encioc_enc_status_t VAR_30, VAR_31, *VAR_32;

 if (VAR_21 < 2) {
  FUNC_3(VAR_20, VAR_23, *VAR_22);
  return (1);
 }

 VAR_27 = 0;
 VAR_25 = 30;
 VAR_28 = 0;
 while ((VAR_29 = FUNC_4(VAR_21, VAR_22, "cdt:")) != -1) {
  switch (VAR_29) {
  case 'c':
   VAR_28 = 1;
   break;
  case 'd':
   VAR_27 = 1;
   break;
  case 't':
   VAR_25 = FUNC_0(VAR_18);
   break;
  default:
   FUNC_3(VAR_20, VAR_23, *VAR_22);
   return (1);
  }
 }

 VAR_32 = FUNC_6(VAR_21);
 if (VAR_32 == ((void*)0)) {
  FUNC_9("malloc");
  return (1);
 }
 for (VAR_26 = VAR_19; VAR_26 < VAR_21; VAR_26++)
  VAR_32[VAR_26] = (encioc_enc_status_t) -1;




 for (VAR_26 = VAR_19; VAR_26 < VAR_21; VAR_26++) {
  VAR_24 = FUNC_7(VAR_22[VAR_26], VAR_12);
  if (VAR_24 < 0) {
   FUNC_9(VAR_22[VAR_26]);
   return (1);
  }
  if (FUNC_5(VAR_24, VAR_2, ((void*)0)) < 0) {
   FUNC_3(VAR_20, "%s: ENCIOC_INIT fails- %s\n",
       VAR_22[VAR_26], FUNC_11(VAR_17));
   return (1);
  }
  (void) FUNC_1(VAR_24);
 }
 if (VAR_27 == 0) {
  if (FUNC_2(0, 0) < 0) {
   FUNC_9("daemon");
   return (1);
  }
  FUNC_8("sesd", VAR_5, VAR_10);
 } else {
  FUNC_8("sesd", VAR_5|VAR_9, VAR_10);
 }

 for (;;) {
  for (VAR_26 = VAR_19; VAR_26 < VAR_21; VAR_26++) {
   VAR_24 = FUNC_7(VAR_22[VAR_26], VAR_12);
   if (VAR_24 < 0) {
    FUNC_12(VAR_7, "%s: %m", VAR_22[VAR_26]);
    continue;
   }




   if (FUNC_5(VAR_24, VAR_1, (caddr_t) &VAR_30) < 0) {
    FUNC_12(VAR_7,
        "%s: ENCIOC_GETENCSTAT- %m", VAR_22[VAR_26]);
    (void) FUNC_1(VAR_24);
    continue;
   }
   if (VAR_30 != 0 && VAR_28) {
    VAR_31 = 0;
    if (FUNC_5(VAR_24, VAR_3,
        (caddr_t) &VAR_31) < 0) {
     FUNC_12(VAR_7,
         "%s: ENCIOC_SETENCSTAT- %m", VAR_22[VAR_26]);
    }
   }
   (void) FUNC_1(VAR_24);

   if (VAR_30 == VAR_32[VAR_26])
    continue;

   VAR_32[VAR_26] = VAR_30;
   if ((VAR_30 & VAR_0) == 0) {
    FUNC_12(VAR_8,
        "%s: Enclosure Status OK", VAR_22[VAR_26]);
   }
   if (VAR_30 & VAR_14) {
    FUNC_12(VAR_8,
        "%s: Enclosure Has Information", VAR_22[VAR_26]);
   }
   if (VAR_30 & VAR_15) {
    FUNC_12(VAR_11,
        "%s: Enclosure Non-Critical", VAR_22[VAR_26]);
   }
   if (VAR_30 & VAR_13) {
    FUNC_12(VAR_6,
        "%s: Enclosure Critical", VAR_22[VAR_26]);
   }
   if (VAR_30 & VAR_16) {
    FUNC_12(VAR_4,
        "%s: Enclosure Unrecoverable", VAR_22[VAR_26]);
   }
  }
  FUNC_10(VAR_25);
 }

}
