
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uschar ;
struct charclass {int (* cc_func ) (int) ;int cc_namelen; int * cc_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (char**,int*,int,int,char**,char*) ;
 struct charclass* VAR_10 ;
 int FUNC_2 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_3 (int) ;
 char* VAR_13 ;
 char FUNC_4 (char**) ;
 int FUNC_5 (char*,char*,int ,char const*,int,int) ;
 char* VAR_14 ;
 char VAR_15 ;
 char* VAR_16 ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (char const*,char const*,int ) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (char*) ;

int FUNC_10(void)
{
 int VAR_17, VAR_18;
 int VAR_19;
 static uschar *VAR_20 = ((void*)0);
 static int VAR_21 = 100;
 uschar *VAR_22;
 struct charclass *VAR_23;
 int VAR_24;
 int VAR_25, VAR_26, VAR_27, VAR_28;
 const uschar *VAR_29;

rescan:
 VAR_16 = VAR_13;

 switch (VAR_17 = *VAR_13++) {
 case '|': return VAR_5;
 case '*': return VAR_8;
 case '+': return VAR_6;
 case '?': return VAR_7;
 case '.': return VAR_2;
 case '\0': VAR_13--; return '\0';
 case '^':
 case '$':
 case '(':
 case ')':
  return VAR_17;
 case '\\':
  VAR_15 = FUNC_4(&VAR_13);
  return VAR_1;
 default:
  VAR_15 = VAR_17;
  return VAR_1;
 case '[':
  if (VAR_20 == ((void*)0) && (VAR_20 = (uschar *) FUNC_3(VAR_21)) == ((void*)0))
   FUNC_0("out of space in reg expr %.10s..", VAR_12);
  VAR_22 = VAR_20;
  if (*VAR_13 == '^') {
   VAR_19 = 1;
   VAR_13++;
  }
  else
   VAR_19 = 0;
  VAR_18 = 2 * FUNC_6((const char *) VAR_13)+1;
  if (!FUNC_1((char **) &VAR_20, &VAR_21, VAR_18, VAR_18, (char **) &VAR_22, "relex1"))
   FUNC_0("out of space for reg expr %.10s...", VAR_12);
  for (; ; ) {
   if ((VAR_17 = *VAR_13++) == '\\') {
    *VAR_22++ = '\\';
    if ((VAR_17 = *VAR_13++) == '\0')
     FUNC_0("nonterminated character class %.20s...", VAR_12);
    *VAR_22++ = VAR_17;


   } else if (VAR_17 == '[' && *VAR_13 == ':') {

    for (VAR_23 = VAR_10; VAR_23->cc_name; VAR_23++)
     if (FUNC_7((const char *) VAR_13 + 1, (const char *) VAR_23->cc_name, VAR_23->cc_namelen) == 0)
      break;
    if (VAR_23->cc_name != ((void*)0) && VAR_13[1 + VAR_23->cc_namelen] == ':' &&
        VAR_13[2 + VAR_23->cc_namelen] == ']') {
     VAR_13 += VAR_23->cc_namelen + 3;
     for (VAR_24 = 1; VAR_24 <= VAR_9; VAR_24++) {
      if (!FUNC_1((char **) &VAR_20, &VAR_21, VAR_22-VAR_20+1, 100, (char **) &VAR_22, "relex2"))
          FUNC_0("out of space for reg expr %.10s...", VAR_12);
      if (VAR_23->cc_func(VAR_24)) {
       *VAR_22++ = VAR_24;
       VAR_18++;
      }
     }
    } else
     *VAR_22++ = VAR_17;
   } else if (VAR_17 == '[' && *VAR_13 == '.') {
    char VAR_30;
    VAR_13++;
    VAR_30 = *VAR_13++;
    if (*VAR_13 == '.' && VAR_13[1] == ']') {
     VAR_13 += 2;





     if (*VAR_13 == ']') {
      VAR_13++;
      VAR_15 = VAR_30;
      return VAR_1;
     }
    }
   } else if (VAR_17 == '[' && *VAR_13 == '=') {
    char VAR_31;
    VAR_13++;
    VAR_31 = *VAR_13++;
    if (*VAR_13 == '=' && VAR_13[1] == ']') {
     VAR_13 += 2;





     if (*VAR_13 == ']') {
      VAR_13++;
      VAR_15 = VAR_31;
      return VAR_1;
     }
    }
   } else if (VAR_17 == '\0') {
    FUNC_0("nonterminated character class %.20s", VAR_12);
   } else if (VAR_22 == VAR_20) {
    *VAR_22++ = VAR_17;
   } else if (VAR_17 == ']') {
    *VAR_22++ = 0;
    VAR_14 = (uschar *) FUNC_9((char *) VAR_20);
    if (VAR_19 == 0)
     return VAR_0;
    else
     return VAR_4;
   } else
    *VAR_22++ = VAR_17;
  }
  break;
 case '{':
  if (FUNC_2(*(VAR_13))) {
   VAR_25 = 0;
   VAR_18 = -1; VAR_26 = -1;
   VAR_27 = 0;
   VAR_28 = 0;
   VAR_29 = VAR_13-1;

  } else {
   VAR_15 = VAR_17;
   return VAR_1;
                }
  for (; ; ) {
   if ((VAR_17 = *VAR_13++) == '}') {
    if (VAR_27) {
     if (VAR_28) {
      VAR_26 = VAR_25;
      if (VAR_26<VAR_18)
       FUNC_0("illegal repetition expression: class %.20s",
        VAR_12);
      if ((VAR_18==0) && (VAR_26==1)) {
       return VAR_7;
      }
     } else {
      if (VAR_18==0) return VAR_8;
      if (VAR_18==1) return VAR_6;
     }
    } else {
     if (VAR_28) {
      VAR_18 = VAR_25;
      VAR_26 = VAR_25;
     } else {
      FUNC_0("illegal repetition expression: class %.20s",
       VAR_12);
     }
    }
    if (FUNC_5(VAR_16, VAR_13-VAR_16, VAR_11,
        VAR_29 - VAR_11, VAR_18, VAR_26) > 0) {
     if ((VAR_18==0) && (VAR_26==0)) {
      return VAR_3;
     }

     goto rescan;
    }


    return VAR_6;
   } else if (VAR_17 == '\0') {
    FUNC_0("nonterminated character class %.20s",
     VAR_12);
   } else if (FUNC_2(VAR_17)) {
    VAR_25 = 10 * VAR_25 + VAR_17 - '0';
    VAR_28 = 1;
   } else if (VAR_17 == ',') {
    if (VAR_27)
     FUNC_0("illegal repetition expression: class %.20s",
      VAR_12);

    VAR_27 = 1;
    VAR_18 = VAR_25;
    VAR_28 = 0;
    VAR_25 = 0;
   } else {
    FUNC_0("illegal repetition expression: class %.20s",
     VAR_12);
   }
  }
  break;
 }
}
