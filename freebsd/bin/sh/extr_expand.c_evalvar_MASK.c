
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worddest {int state; } ;
struct nodelist {struct nodelist* next; } ;
typedef int ptrdiff_t ;
typedef int buf ;


 int VAR_0 ;
 char const VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,char const*) ;
 int FUNC_1 (char,char const*) ;



 int VAR_8 ;


 int VAR_9 ;


 int VAR_10 ;




 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 () ;
 char const* FUNC_3 (char const*,struct nodelist**,int,struct worddest*) ;
 char* FUNC_4 (char const*,int) ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (char*,int,char const*,...) ;
 char const* VAR_13 ;
 int FUNC_7 (char const) ;
 scalar_t__ VAR_14 ;
 char* FUNC_8 (char const*) ;
 int FUNC_9 (char*,char const*,int) ;
 int FUNC_10 (int,int,int const,int,struct worddest*) ;
 char const* FUNC_11 () ;
 char* FUNC_12 (char const*,char) ;
 int FUNC_13 (char const*,int,int const,int,struct worddest*) ;
 char* FUNC_14 (char const*,struct nodelist**,char const*,int,int,int) ;
 char* FUNC_15 (char const*,struct nodelist**,int,int,int) ;
 scalar_t__ VAR_15 ;
 int FUNC_16 (char const*,int) ;
 int FUNC_17 (char const*,int,int,int,struct worddest*) ;

__attribute__((used)) static const char *
FUNC_18(const char *VAR_16, struct nodelist **restrict VAR_17, int VAR_18,
    struct worddest *VAR_19)
{
 int VAR_20;
 int VAR_21;
 const char *VAR_22;
 const char *VAR_23;
 int VAR_24;
 int VAR_25;
 int VAR_26;
 int VAR_27;
 int VAR_28;
 int VAR_29;
 int VAR_30;
 char VAR_31[21];

 VAR_21 = (unsigned char)*VAR_16++;
 VAR_20 = VAR_21 & VAR_11;
 VAR_22 = VAR_16;
 VAR_27 = 0;
 if (! FUNC_7(*VAR_16))
  VAR_27 = 1;
 VAR_16 = FUNC_12(VAR_16, '=') + 1;
 if (VAR_21 & VAR_8) {
  VAR_26 = 1;
  VAR_27 = 1;
  VAR_23 = ((void*)0);
 } else if (VAR_27) {
  VAR_26 = FUNC_16(VAR_22, VAR_21 & VAR_9);
  VAR_23 = ((void*)0);
 } else {
  VAR_23 = FUNC_4(VAR_22, 1);
  if (VAR_23 == ((void*)0) || ((VAR_21 & VAR_9) && VAR_23[0] == '\0')) {
   VAR_23 = ((void*)0);
   VAR_26 = 0;
  } else
   VAR_26 = 1;
 }
 VAR_29 = 0;
 VAR_28 = VAR_13 - FUNC_11();
 if (!VAR_26 && VAR_15 && *VAR_22 != '@' && *VAR_22 != '*') {
  switch (VAR_20) {
  case 134:
  case 131:
  case 130:
  case 129:
  case 128:
  case 136:
   FUNC_6("%.*s: parameter not set", (int)(VAR_16 - VAR_22 - 1),
       VAR_22);
  }
 }
 if (VAR_26 && VAR_20 != 133) {

  if (VAR_27) {
   if (VAR_21 & VAR_8) {
    if (VAR_16 - VAR_22 > (ptrdiff_t)sizeof(VAR_31))
     FUNC_2();
    FUNC_9(VAR_31, VAR_22, VAR_16 - VAR_22 - 1);
    VAR_31[VAR_16 - VAR_22 - 1] = '\0';
    FUNC_13(VAR_31, VAR_18, VAR_20,
        VAR_21 & VAR_10, VAR_19);
   } else
    FUNC_17(VAR_22, VAR_21 & VAR_10, VAR_20, VAR_18,
        VAR_19);
   if (VAR_20 == 136) {
    VAR_30 = VAR_13 - FUNC_11() - VAR_28;
    VAR_29 = VAR_30;
    if (VAR_14) {
     VAR_23 = FUNC_11() + VAR_28;
     for (;VAR_23 != VAR_13; VAR_23++)
      if ((*VAR_23 & 0xC0) == 0x80)
       VAR_29--;
    }
    FUNC_0(-VAR_30, VAR_13);
   }
  } else {
   if (VAR_20 == 136) {
    for (;*VAR_23; VAR_23++)
     if (!VAR_14 ||
         (*VAR_23 & 0xC0) != 0x80)
      VAR_29++;
   }
   else
    FUNC_13(VAR_23, VAR_18, VAR_20,
        VAR_21 & VAR_10, VAR_19);
  }
 }

 if (VAR_20 == 133)
  VAR_26 = ! VAR_26;

 switch (VAR_20) {
 case 136:
  FUNC_5(VAR_29, VAR_31);
  FUNC_13(VAR_31, VAR_18, 134, VAR_21 & VAR_10, VAR_19);
  break;

 case 134:
  return VAR_16;

 case 133:
 case 135:
  if (!VAR_26) {
   return FUNC_3(VAR_16, VAR_17,
       VAR_18 | (VAR_18 & VAR_6 ? VAR_7 : 0) |
       (VAR_21 & VAR_10 ? VAR_5 : 0), VAR_19);
  }
  break;

 case 131:
 case 130:
 case 129:
 case 128:
  if (!VAR_26)
   break;




  FUNC_1('\0', VAR_13);
  VAR_24 = VAR_13 - FUNC_11();
  VAR_16 = FUNC_15(VAR_16, VAR_17, VAR_24, VAR_20, VAR_28);
  FUNC_10(VAR_28, VAR_18, 134, VAR_21 & VAR_10, VAR_19);
  if (VAR_18 & VAR_6 && *VAR_22 == '@' && VAR_21 & VAR_10)
   VAR_19->state = VAR_12;
  return VAR_16;

 case 138:
 case 132:
  if (!VAR_26) {
   VAR_16 = FUNC_14(VAR_16, VAR_17, VAR_22, VAR_20,
       VAR_28, VAR_21);

   VAR_23 = FUNC_8(VAR_22);
   FUNC_13(VAR_23, VAR_18, VAR_20, VAR_21 & VAR_10, VAR_19);
   return VAR_16;
  }
  break;

 case 137:
  VAR_25 = VAR_16 - VAR_22 - 1;
  FUNC_6("${%.*s%s}: Bad substitution", VAR_25, VAR_22,
      (VAR_25 > 0 && *VAR_16 != VAR_1) ? "..." : "");

 default:
  FUNC_2();
 }

 {
  int VAR_32 = 1;
  for (;;) {
   if ((VAR_25 = *VAR_16++) == VAR_2)
    VAR_16++;
   else if (VAR_25 == VAR_0 || VAR_25 == (VAR_0|VAR_3))
    *VAR_17 = (*VAR_17)->next;
   else if (VAR_25 == VAR_4) {
    if ((*VAR_16++ & VAR_11) != 134)
     VAR_32++;
   } else if (VAR_25 == VAR_1) {
    if (--VAR_32 == 0)
     break;
   }
  }
 }
 return VAR_16;
}
