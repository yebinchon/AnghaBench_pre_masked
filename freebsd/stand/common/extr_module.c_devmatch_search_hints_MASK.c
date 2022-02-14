
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct moduledir {int d_hintsz; int * d_hints; } ;





 int FUNC_0 (char*) ;
 int FUNC_1 (void**) ;
 int FUNC_2 (void**,char*) ;
 int FUNC_3 (struct moduledir*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (char*,char const*) ;
 char* FUNC_5 (char*,char const*) ;
 int FUNC_6 (char*,...) ;
 char* FUNC_7 (char*,char) ;
 int FUNC_8 (char*,char const*) ;
 int FUNC_9 (char*,char*) ;
 char* FUNC_10 (char*) ;
 int FUNC_11 (char*) ;
 char* FUNC_12 (char const*,char*) ;

__attribute__((used)) static char *
FUNC_13(struct moduledir *VAR_3, const char *VAR_4, const char *VAR_5, const char *VAR_6)
{
 char VAR_7[256], VAR_8[256];
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 void *VAR_18, *VAR_19, *VAR_20;
 char *VAR_21 = ((void*)0), *VAR_22, *VAR_23;

 FUNC_3(VAR_3);
 VAR_17 = 0;
 if (VAR_3->d_hints == ((void*)0))
  goto bad;
 VAR_19 = VAR_3->d_hints;
 VAR_20 = VAR_19 + VAR_3->d_hintsz;
 while (VAR_19 < VAR_20 && !VAR_17) {
  VAR_10 = FUNC_1(&VAR_19);
  VAR_9 = FUNC_1(&VAR_19);
  VAR_18 = VAR_19;
  switch (VAR_9) {
  case 128:
   FUNC_2(&VAR_18, VAR_7);
   VAR_9 = FUNC_1(&VAR_18);
   FUNC_2(&VAR_18, VAR_8);
   if (VAR_0 || VAR_2)
    FUNC_6("Version: if %s.%d kmod %s\n", VAR_7, VAR_9, VAR_8);
   break;
  case 130:
   FUNC_2(&VAR_18, VAR_7);
   FUNC_2(&VAR_18, VAR_8);
   if (VAR_21)
    FUNC_0(VAR_21);
   VAR_21 = FUNC_10(VAR_8);
   if (VAR_0 || VAR_2)
    FUNC_6("module %s in %s\n", VAR_7, VAR_7);
   break;
  case 129:
   if (!VAR_0 && !VAR_1 && VAR_21 && FUNC_8(VAR_21, "kernel") == 0)
    break;
   FUNC_2(&VAR_18, VAR_7);
   FUNC_2(&VAR_18, VAR_8);
   VAR_11 = FUNC_1(&VAR_18);
   if (VAR_0 || VAR_2)
    FUNC_6("PNP info for bus %s format %s %d entries (%s)\n",
        VAR_7, VAR_8, VAR_11, VAR_21);
   if (FUNC_8(VAR_7, "usb") == 0) {
    if (VAR_2)
     FUNC_6("Treating usb as uhub -- bug in source table still?\n");
    FUNC_9(VAR_7, "uhub");
   }
   if (VAR_4 && FUNC_8(VAR_7, VAR_4) != 0) {
    if (VAR_2)
     FUNC_6("Skipped because table for bus %s, looking for %s\n",
         VAR_7, VAR_4);
    break;
   }
   for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
    if (VAR_2)
     FUNC_6("---------- Entry %d ----------\n", VAR_12);
    if (VAR_0)
     FUNC_6("   ");
    VAR_22 = VAR_8;
    VAR_13 = 0;
    VAR_14 = -1;
    VAR_15 = -1;
    do {
     switch (*VAR_22) {

     case 'I':
     case 'J':
     case 'G':
     case 'L':
     case 'M':
      VAR_9 = FUNC_1(&VAR_18);
      if (VAR_0) {
       FUNC_6("%#x:", VAR_9);
       break;
      }
      if (VAR_15 >= 0 && ((1 << VAR_15) & VAR_14) == 0)
       break;
      VAR_16 = FUNC_4(VAR_22 + 2, VAR_6);
      if (VAR_2)
       FUNC_6("Matching %s (%c) table=%#x tomatch=%#x\n",
           VAR_22 + 2, *VAR_22, VAR_16, VAR_9);
      switch (*VAR_22) {
      case 'J':
       if (VAR_9 == -1)
        break;

      case 'I':
       if (VAR_16 != VAR_9)
        VAR_13++;
       break;
      case 'G':
       if (VAR_16 < VAR_9)
        VAR_13++;
       break;
      case 'L':
       if (VAR_16 > VAR_9)
        VAR_13++;
       break;
      case 'M':
       VAR_14 = VAR_9;
       break;
      }
      break;

     case 'D':
     case 'Z':
      FUNC_2(&VAR_18, VAR_7);
      if (VAR_0) {
       FUNC_6("'%s':", VAR_7);
       break;
      }
      if (*VAR_22 == 'D')
       break;
      VAR_23 = FUNC_5(VAR_22 + 2, VAR_6);
      if (FUNC_8(VAR_23, VAR_7) != 0)
       VAR_13++;
      break;

     case 'T':





      if (VAR_0)
       break;
      if (VAR_22[FUNC_11(VAR_22) - 1] == ';')
       VAR_22[FUNC_11(VAR_22) - 1] = '\0';
      if ((VAR_23 = FUNC_12(VAR_6, VAR_22 + 2)) == ((void*)0))
       VAR_13++;
      else if (VAR_23 > VAR_6 && VAR_23[-1] != ' ')
       VAR_13++;
      break;
     default:
      FUNC_6("Unknown field type %c\n:", *VAR_22);
      break;
     }
     VAR_15++;
     VAR_22 = FUNC_7(VAR_22, ';');
     if (VAR_22)
      VAR_22++;
    } while (VAR_22 && *VAR_22);
    if (VAR_0)
     FUNC_6("\n");
    else if (!VAR_13) {
     if (!VAR_1) {
      if (VAR_2)
       FUNC_6("Matches --- %s ---\n", VAR_21);
     }
     VAR_17++;
    }
   }
   break;
  default:
   break;
  }
  VAR_19 = (void *)(VAR_10 - sizeof(int) + (intptr_t)VAR_19);
 }
 if (VAR_1 && VAR_17 == 0 && *VAR_6) {
  if (VAR_2)
   FUNC_6("------------------------- ");
  FUNC_6("%s on %s pnpinfo %s", *VAR_5 ? VAR_5 : "unattached", VAR_4, VAR_6);
  if (VAR_2)
   FUNC_6(" -------------------------");
  FUNC_6("\n");
 }
 if (VAR_17 != 0)
  return (VAR_21);
 FUNC_0(VAR_21);

bad:
 return (((void*)0));
}
