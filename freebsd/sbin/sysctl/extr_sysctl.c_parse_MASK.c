
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int line ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;



 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int * VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int) ;
 int FUNC_1 (void*) ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*,int*) ;
 int VAR_15 ;
 scalar_t__ FUNC_4 (int*,int,char*,int*) ;
 int FUNC_5 (char*,char*,int,void**,size_t*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char) ;
 scalar_t__ VAR_16 ;
 int FUNC_8 (int*,int) ;
 int FUNC_9 (char*,int,char*,...) ;
 size_t FUNC_10 (char*) ;
 char* FUNC_11 (char**,char*) ;
 int FUNC_12 (int*,int,int ,int ,void const*,size_t) ;
 int FUNC_13 (int*,int) ;
 int FUNC_14 () ;
 int FUNC_15 (char*,char const*,char*) ;
 int FUNC_16 (char*,...) ;

__attribute__((used)) static int
FUNC_17(const char *VAR_17, int VAR_18)
{
 int VAR_19, VAR_20, VAR_21;
 const void *VAR_22;
 char *VAR_23 = ((void*)0);
 void *VAR_24;
 size_t VAR_25 = VAR_1;
 int VAR_26[VAR_6];
 char *VAR_27, *VAR_28, VAR_29[VAR_0], VAR_30[VAR_0], VAR_31[VAR_0];
 u_int VAR_32;

 if (VAR_18)
  FUNC_9(VAR_31, sizeof(VAR_31), " at line %d", VAR_18);
 else
  VAR_31[0] = '\0';

 VAR_27 = VAR_29;
 if (FUNC_9(VAR_29, VAR_0, "%s", VAR_17) >= VAR_0) {
  FUNC_16("oid too long: '%s'%s", VAR_17, VAR_31);
  return (1);
 }
 VAR_28 = FUNC_11(&VAR_27, "=:");
 if (VAR_27 != ((void*)0)) {

  if (VAR_8 || VAR_9) {
   FUNC_16("Can't set variables when using -T or -W");
   FUNC_14();
  }
  while (FUNC_2(*VAR_27))
   VAR_27++;

  switch (*VAR_27) {
  case '\"':
  case '\'':
   if (VAR_27[FUNC_10(VAR_27) - 1] == *VAR_27)
    VAR_27[FUNC_10(VAR_27) - 1] = '\0';
   VAR_27++;
  }
  VAR_23 = VAR_27;
  VAR_25 = FUNC_10(VAR_27);
 }

 VAR_27 = VAR_28 + FUNC_10(VAR_28) - 1;
 while (VAR_27 >= VAR_28 && FUNC_2((int)*VAR_27)) {
  *VAR_27 = '\0';
  VAR_27--;
 }
 VAR_19 = FUNC_3(VAR_28, VAR_26);

 if (VAR_19 < 0) {
  if (VAR_14)
   return (0);
  if (VAR_16)
   return (1);
  else {
   if (VAR_13 == VAR_7) {
    FUNC_16("unknown oid '%s'%s", VAR_28, VAR_31);
   } else {
    FUNC_15("unknown oid '%s'%s", VAR_28, VAR_31);
   }
   return (1);
  }
 }

 if (FUNC_4(VAR_26, VAR_19, VAR_30, &VAR_32)) {
  FUNC_15("couldn't find format of oid '%s'%s", VAR_28, VAR_31);
  if (VAR_14)
   return (1);
  else
   FUNC_0(1);
 }

 if (VAR_23 == ((void*)0) || VAR_12) {
  if ((VAR_32 & VAR_4) == VAR_5) {
   if (VAR_12) {
    VAR_20 = FUNC_8(VAR_26, VAR_19);
    if (!VAR_20 && !VAR_10)
     FUNC_7('\n');
   }
   FUNC_13(VAR_26, VAR_19);
  } else {
   VAR_20 = FUNC_8(VAR_26, VAR_19);
   if (!VAR_20 && !VAR_10)
    FUNC_7('\n');
  }
 } else {
  if ((VAR_32 & VAR_4) == VAR_5) {
   FUNC_16("oid '%s' isn't a leaf node%s", VAR_28, VAR_31);
   return (1);
  }

  if (!(VAR_32 & VAR_3)) {
   if (VAR_32 & VAR_2) {
    FUNC_16("oid '%s' is a read only tunable%s", VAR_28, VAR_31);
    FUNC_16("Tunable values are set in /boot/loader.conf");
   } else
    FUNC_16("oid '%s' is read only%s", VAR_28, VAR_31);
   return (1);
  }

  switch (VAR_32 & VAR_4) {
  case 143:
  case 132:
  case 142:
  case 131:
  case 138:
  case 141:
  case 140:
  case 139:
  case 133:
  case 136:
  case 135:
  case 134:
   if (FUNC_10(VAR_23) == 0) {
    FUNC_16("empty numeric value");
    return (1);
   }

  case 137:
   break;
  default:
   FUNC_16("oid '%s' is type %d,"
    " cannot set that%s", VAR_28,
    VAR_32 & VAR_4, VAR_31);
   return (1);
  }

  VAR_24 = ((void*)0);

  switch (VAR_32 & VAR_4) {
  case 137:
   VAR_22 = VAR_23;
   break;
  default:
   VAR_25 = 0;
   while ((VAR_27 = FUNC_11(&VAR_23, " ,")) != ((void*)0)) {
    if (*VAR_27 == '\0')
     continue;
    if (!FUNC_5(VAR_27, VAR_30, VAR_32, &VAR_24,
        &VAR_25)) {
     FUNC_16("invalid %s '%s'%s",
         VAR_11[VAR_32 & VAR_4],
         VAR_27, VAR_31);
     FUNC_1(VAR_24);
     return (1);
    }
   }
   VAR_22 = VAR_24;
   break;
  }

  VAR_20 = FUNC_8(VAR_26, VAR_19);
  if (FUNC_12(VAR_26, VAR_19, 0, 0, VAR_22, VAR_25) == -1) {
   FUNC_1(VAR_24);
   if (!VAR_20 && !VAR_10)
    FUNC_7('\n');
   switch (VAR_13) {
   case 128:
    FUNC_16("%s: value is not available%s",
     VAR_17, VAR_31);
    return (1);
   case 129:
    FUNC_16("%s: specification is incomplete%s",
     VAR_17, VAR_31);
    return (1);
   case 130:
    FUNC_16("%s: type is unknown to this program%s",
     VAR_17, VAR_31);
    return (1);
   default:
    FUNC_15("%s%s", VAR_17, VAR_31);
    return (1);
   }
  }
  FUNC_1(VAR_24);
  if (!VAR_10)
   FUNC_6(" -> ");
  VAR_20 = VAR_15;
  VAR_15 = 1;
  VAR_21 = FUNC_8(VAR_26, VAR_19);
  if (!VAR_21 && !VAR_10)
   FUNC_7('\n');
  VAR_15 = VAR_20;
 }

 return (0);
}
