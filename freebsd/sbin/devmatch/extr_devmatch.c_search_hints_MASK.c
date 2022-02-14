
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (void**) ;
 int FUNC_3 (void**,char*) ;
 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_4 (char*,char const*) ;
 char* FUNC_5 (char*,char const*) ;
 int FUNC_6 (char*,...) ;
 int VAR_4 ;
 char* FUNC_7 (char*,char) ;
 int FUNC_8 (char*,char const*) ;
 int FUNC_9 (char*,char*) ;
 char* FUNC_10 (char*) ;
 int FUNC_11 (char*) ;
 char* FUNC_12 (char const*,char*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void
FUNC_13(const char *VAR_7, const char *VAR_8, const char *VAR_9)
{
 char VAR_10[256], VAR_11[256];
 int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
 void *VAR_21, *VAR_22;
 char *VAR_23 = ((void*)0), *VAR_24, *VAR_25;

 VAR_22 = VAR_2;
 FUNC_2(&VAR_22);
 VAR_20 = 0;
 if (VAR_6)
  FUNC_6("Searching bus %s dev %s for pnpinfo %s\n",
      VAR_7, VAR_8, VAR_9);
 while (VAR_22 < VAR_3) {
  VAR_13 = FUNC_2(&VAR_22);
  VAR_12 = FUNC_2(&VAR_22);
  VAR_21 = VAR_22;
  switch (VAR_12) {
  case 128:
   FUNC_3(&VAR_21, VAR_10);
   VAR_12 = FUNC_2(&VAR_21);
   FUNC_3(&VAR_21, VAR_11);
   if (VAR_1 || VAR_6)
    FUNC_6("Version: if %s.%d kmod %s\n", VAR_10, VAR_12, VAR_11);
   break;
  case 130:
   FUNC_3(&VAR_21, VAR_10);
   FUNC_3(&VAR_21, VAR_11);
   if (VAR_23)
    FUNC_1(VAR_23);
   VAR_23 = FUNC_10(VAR_11);
   if (VAR_1 || VAR_6)
    FUNC_6("Module %s in %s\n", VAR_10, VAR_11);
   break;
  case 129:
   if (!VAR_1 && !VAR_5 && VAR_23 && FUNC_8(VAR_23, "kernel") == 0)
    break;
   FUNC_3(&VAR_21, VAR_10);
   FUNC_3(&VAR_21, VAR_11);
   VAR_14 = FUNC_2(&VAR_21);
   if (VAR_1 || VAR_6)
    FUNC_6("PNP info for bus %s format %s %d entries (%s)\n",
        VAR_10, VAR_11, VAR_14, VAR_23);
   if (FUNC_8(VAR_10, "usb") == 0) {
    if (VAR_6)
     FUNC_6("Treating usb as uhub -- bug in source table still?\n");
    FUNC_9(VAR_10, "uhub");
   }
   if (VAR_7 && FUNC_8(VAR_10, VAR_7) != 0) {
    if (VAR_6)
     FUNC_6("Skipped because table for bus %s, looking for %s\n",
         VAR_10, VAR_7);
    break;
   }
   for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++) {
    if (VAR_6)
     FUNC_6("---------- Entry %d ----------\n", VAR_15);
    if (VAR_1)
     FUNC_6("   ");
    VAR_24 = VAR_11;
    VAR_16 = 0;
    VAR_17 = -1;
    VAR_18 = -1;
    do {
     switch (*VAR_24) {

     case 'I':
     case 'J':
     case 'G':
     case 'L':
     case 'M':
      VAR_12 = FUNC_2(&VAR_21);
      if (VAR_1) {
       FUNC_6("%#x:", VAR_12);
       break;
      }
      if (VAR_18 >= 0 && ((1 << VAR_18) & VAR_17) == 0)
       break;
      VAR_19 = FUNC_4(VAR_24 + 2, VAR_9);
      if (VAR_6)
       FUNC_6("Matching %s (%c) table=%#x tomatch=%#x\n",
           VAR_24 + 2, *VAR_24, VAR_19, VAR_12);
      switch (*VAR_24) {
      case 'J':
       if (VAR_12 == -1)
        break;

      case 'I':
       if (VAR_19 != VAR_12)
        VAR_16++;
       break;
      case 'G':
       if (VAR_19 < VAR_12)
        VAR_16++;
       break;
      case 'L':
       if (VAR_19 > VAR_12)
        VAR_16++;
       break;
      case 'M':
       VAR_17 = VAR_12;
       break;
      }
      break;

     case 'D':
     case 'Z':
      FUNC_3(&VAR_21, VAR_10);
      if (VAR_1) {
       FUNC_6("'%s':", VAR_10);
       break;
      }
      if (*VAR_24 == 'D')
       break;
      VAR_25 = FUNC_5(VAR_24 + 2, VAR_9);
      if (FUNC_8(VAR_25, VAR_10) != 0)
       VAR_16++;
      break;

     case 'T':





      if (VAR_1)
       break;
      if (VAR_24[FUNC_11(VAR_24) - 1] == ';')
       VAR_24[FUNC_11(VAR_24) - 1] = '\0';
      if ((VAR_25 = FUNC_12(VAR_9, VAR_24 + 2)) == ((void*)0))
       VAR_16++;
      else if (VAR_25 > VAR_9 && VAR_25[-1] != ' ')
       VAR_16++;
      break;
     default:
      FUNC_0(VAR_4, "Unknown field type %c\n:", *VAR_24);
      break;
     }
     VAR_18++;
     VAR_24 = FUNC_7(VAR_24, ';');
     if (VAR_24)
      VAR_24++;
    } while (VAR_24 && *VAR_24);
    if (VAR_1)
     FUNC_6("\n");
    else if (!VAR_16) {
     if (!VAR_5) {
      if (VAR_0)
       FUNC_6("%s: %s", *VAR_8 ? VAR_8 : "unattached", VAR_23);
      else
       FUNC_6("%s\n", VAR_23);
      if (VAR_6)
       FUNC_6("Matches --- %s ---\n", VAR_23);
     }
     VAR_20++;
    }
   }
   break;
  default:
   if (VAR_1)
    FUNC_6("Unknown Type %d len %d\n", VAR_12, VAR_13);
   break;
  }
  VAR_22 = (void *)(VAR_13 - sizeof(int) + (intptr_t)VAR_22);
 }
 if (VAR_5 && VAR_20 == 0 && *VAR_9) {
  if (VAR_6)
   FUNC_6("------------------------- ");
  FUNC_6("%s on %s pnpinfo %s", *VAR_8 ? VAR_8 : "unattached", VAR_7, VAR_9);
  if (VAR_6)
   FUNC_6(" -------------------------");
  FUNC_6("\n");
 }
 FUNC_1(VAR_23);
}
