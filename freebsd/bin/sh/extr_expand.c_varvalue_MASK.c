
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct worddest {int state; } ;
struct TYPE_2__ {int nparam; char** p; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char,int,int ,struct worddest*) ;
 int VAR_2 ;
 int FUNC_1 (char,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 char* VAR_9 ;
 int FUNC_2 (char const*) ;
 int FUNC_3 () ;
 int FUNC_4 (int,char*) ;
 int VAR_10 ;
 int FUNC_5 () ;
 char* FUNC_6 () ;
 int FUNC_7 (char const) ;
 int VAR_11 ;
 int * VAR_12 ;
 int * VAR_13 ;
 int VAR_14 ;
 TYPE_1__ VAR_15 ;
 int FUNC_8 (char*,int,int,int,struct worddest*) ;

__attribute__((used)) static void
FUNC_9(const char *VAR_16, int VAR_17, int VAR_18, int VAR_19,
    struct worddest *VAR_20)
{
 int VAR_21;
 char *VAR_22;
 int VAR_23;
 int VAR_24;
 char VAR_25[2];
 char **VAR_26;
 char VAR_27[(VAR_2 > 10 ? VAR_2 : 10) + 1];

 if (VAR_18 == VAR_3)
  VAR_19 &= ~VAR_0;
 VAR_24 = VAR_18 == VAR_4 || VAR_18 == VAR_5 ||
  VAR_18 == VAR_6 || VAR_18 == VAR_7;

 switch (*VAR_16) {
 case '$':
  VAR_21 = VAR_14;
  break;
 case '?':
  VAR_21 = VAR_11;
  break;
 case '#':
  VAR_21 = VAR_15.nparam;
  break;
 case '!':
  VAR_21 = FUNC_3();
  break;
 case '-':
  VAR_22 = VAR_27;
  for (VAR_23 = 0 ; VAR_23 < VAR_2 ; VAR_23++) {
   if (VAR_13[VAR_23])
    *VAR_22++ = VAR_12[VAR_23];
  }
  *VAR_22 = '\0';
  FUNC_8(VAR_27, VAR_19, VAR_18, VAR_17, VAR_20);
  return;
 case '@':
  if (VAR_19 & VAR_1 && VAR_17) {
   for (VAR_26 = VAR_15.p ; (VAR_22 = *VAR_26++) != ((void*)0) ; ) {
    FUNC_8(VAR_22, VAR_19, VAR_18, VAR_17, VAR_20);
    if (*VAR_26) {
     if (VAR_24)
      FUNC_1('\0', VAR_10);
     else
      FUNC_0('\0', VAR_19, VAR_10,
          VAR_20);
    }
   }
   if (VAR_15.nparam > 0)
    VAR_20->state = VAR_8;
   return;
  }

 case '*':
  if (FUNC_5())
   VAR_25[0] = FUNC_6()[0];
  else
   VAR_25[0] = ' ';
  VAR_25[1] = '\0';
  for (VAR_26 = VAR_15.p ; (VAR_22 = *VAR_26++) != ((void*)0) ; ) {
   FUNC_8(VAR_22, VAR_19, VAR_18, VAR_17, VAR_20);
   if (!*VAR_26)
    break;
   if (VAR_25[0])
    FUNC_8(VAR_25, VAR_19, VAR_18, VAR_17, VAR_20);
   else if (VAR_19 & VAR_1 && !VAR_17 && **VAR_26 != '\0') {
    if (VAR_24)
     FUNC_1('\0', VAR_10);
    else
     FUNC_0('\0', VAR_19, VAR_10, VAR_20);
   }
  }
  return;
 default:
  if (FUNC_7(*VAR_16)) {
   VAR_21 = FUNC_2(VAR_16);
   if (VAR_21 == 0)
    VAR_22 = VAR_9;
   else if (VAR_21 > 0 && VAR_21 <= VAR_15.nparam)
    VAR_22 = VAR_15.p[VAR_21 - 1];
   else
    return;
   FUNC_8(VAR_22, VAR_19, VAR_18, VAR_17, VAR_20);
  }
  return;
 }
 FUNC_4(VAR_21, VAR_27);
 FUNC_8(VAR_27, VAR_19, VAR_18, VAR_17, VAR_20);
}
