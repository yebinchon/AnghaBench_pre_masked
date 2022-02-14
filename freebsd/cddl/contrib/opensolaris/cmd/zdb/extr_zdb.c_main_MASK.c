
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef void* uint64_t ;
struct rlimit {int member_0; int member_1; } ;
struct TYPE_8__ {scalar_t__ spa_log_state; int * spa_meta_objset; } ;
typedef TYPE_1__ spa_t ;
typedef int objset_t ;
typedef int nvlist_t ;
typedef void* boolean_t ;


 int FUNC_0 (int ) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int,int) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_2 (char**,char**,int) ;
 scalar_t__* FUNC_3 (unsigned int,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int*,char**) ;
 int FUNC_6 (char*) ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int *,int) ;
 int* VAR_31 ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (int,int) ;
 int VAR_32 ;
 int FUNC_14 (char*,...) ;
 char* FUNC_15 (char**,int **,int,char**) ;
 int * VAR_33 ;
 int FUNC_16 (int ,char*,...) ;
 int FUNC_17 (char*) ;
 int FUNC_18 () ;
 int * VAR_34 ;
 char* FUNC_19 (char*) ;
 int FUNC_20 (int,char**,char*) ;
 char* FUNC_21 (char*,int *,char**) ;
 int FUNC_22 () ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int *) ;
 int * FUNC_25 () ;
 void* VAR_35 ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;
 scalar_t__ FUNC_28 (int *,int ,int *) ;
 scalar_t__ FUNC_29 (int *,int ,int) ;
 scalar_t__ FUNC_30 (int *,int ,void*) ;
 scalar_t__ FUNC_31 (int **,int ,int ) ;
 int FUNC_32 (int *) ;
 int FUNC_33 (char*,int ,int ,int **) ;
 char* VAR_36 ;
 scalar_t__ VAR_37 ;
 int FUNC_34 (char*) ;
 void* VAR_38 ;
 int FUNC_35 (char*) ;
 int FUNC_36 (int ,struct rlimit*) ;
 int FUNC_37 (TYPE_1__*,int ) ;
 char* VAR_39 ;
 int FUNC_38 (char*,int *,int *,int) ;
 void* VAR_40 ;
 TYPE_1__* FUNC_39 (char*) ;
 int VAR_41 ;
 int FUNC_40 (char*,TYPE_1__**,int ) ;
 int FUNC_41 (char*,TYPE_1__**,int ,int *,int *) ;
 int VAR_42 ;
 int * FUNC_42 (char*,int) ;
 int FUNC_43 (int) ;
 size_t FUNC_44 (char*) ;
 int * FUNC_45 (char*,char*) ;
 void* FUNC_46 (char*,int *,int ) ;
 char** FUNC_47 (int,int ) ;
 int FUNC_48 (char**,int) ;
 int FUNC_49 () ;
 char* VAR_43 ;
 int FUNC_50 (char*) ;
 int FUNC_51 (char*,TYPE_1__*) ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 scalar_t__* VAR_48 ;
 unsigned int VAR_49 ;

int
FUNC_52(int VAR_50, char **VAR_51)
{
 int VAR_52;
 struct rlimit VAR_53 = { 1024, 1024 };
 spa_t *VAR_54 = ((void*)0);
 objset_t *VAR_55 = ((void*)0);
 int VAR_56 = 1;
 int VAR_57 = 0;
 int VAR_58 = 0;
 char **VAR_59 = ((void*)0);
 int VAR_60 = 0;
 char *VAR_61;
 nvlist_t *VAR_62 = ((void*)0);
 uint64_t VAR_63 = VAR_12;
 int VAR_64 = VAR_22;
 int VAR_65 = VAR_29;
 char *VAR_66;
 boolean_t VAR_67 = VAR_1;
 nvlist_t *VAR_68 = ((void*)0);

 (void) FUNC_36(VAR_8, &VAR_53);
 (void) FUNC_13(-1, -1);

 FUNC_5(&VAR_50, VAR_51);






 VAR_66 = FUNC_19("SPA_CONFIG_PATH");
 if (VAR_66 != ((void*)0))
  VAR_39 = VAR_66;

 while ((VAR_52 = FUNC_20(VAR_50, VAR_51,
     "AbcCdDeEFGhiI:klLmMo:Op:PqRsSt:uU:vVx:X")) != -1) {
  switch (VAR_52) {
  case 'b':
  case 'c':
  case 'C':
  case 'd':
  case 'D':
  case 'E':
  case 'G':
  case 'h':
  case 'i':
  case 'l':
  case 'm':
  case 'M':
  case 'O':
  case 'R':
  case 's':
  case 'S':
  case 'u':
   VAR_31[VAR_52]++;
   VAR_56 = 0;
   break;
  case 'A':
  case 'e':
  case 'F':
  case 'k':
  case 'L':
  case 'P':
  case 'q':
  case 'X':
   VAR_31[VAR_52]++;
   break;

  case 'I':
   VAR_35 = FUNC_46(VAR_36, ((void*)0), 0);
   if (VAR_35 == 0) {
    (void) FUNC_16(VAR_42, "maximum number "
        "of inflight I/Os must be greater "
        "than 0\n");
    FUNC_49();
   }
   break;
  case 'o':
   VAR_58 = FUNC_35(VAR_36);
   if (VAR_58 != 0)
    FUNC_49();
   break;
  case 'p':
   if (VAR_59 == ((void*)0)) {
    VAR_59 = FUNC_47(sizeof (char *),
        VAR_13);
   } else {
    char **VAR_69 = FUNC_47((VAR_60 + 1) *
        sizeof (char *), VAR_13);
    FUNC_2(VAR_59, VAR_69, VAR_60 *
        sizeof (char *));
    FUNC_48(VAR_59,
        VAR_60 * sizeof (char *));
    VAR_59 = VAR_69;
   }
   VAR_59[VAR_60++] = VAR_36;
   break;
  case 't':
   VAR_63 = FUNC_46(VAR_36, ((void*)0), 0);
   if (VAR_63 < VAR_11) {
    (void) FUNC_16(VAR_42, "incorrect txg "
        "specified: %s\n", VAR_36);
    FUNC_49();
   }
   break;
  case 'U':
   VAR_39 = VAR_36;
   if (VAR_39[0] != '/') {
    (void) FUNC_16(VAR_42,
        "cachefile must be an absolute path "
        "(i.e. start with a slash)\n");
    FUNC_49();
   }
   break;
  case 'v':
   VAR_57++;
   break;
  case 'V':
   VAR_64 = VAR_23;
   break;
  case 'x':
   VAR_43 = VAR_36;
   break;
  default:
   FUNC_49();
   break;
  }
 }

 if (!VAR_31['e'] && VAR_59 != ((void*)0)) {
  (void) FUNC_16(VAR_42, "-p option requires use of -e\n");
  FUNC_49();
 }





 VAR_44 = VAR_45 = 256 * 1024 * 1024;






 VAR_47 = 10;




 VAR_38 = VAR_0;





 VAR_40 = VAR_1;

 FUNC_23(VAR_5);
 VAR_34 = FUNC_25();
 if (VAR_34 == ((void*)0))
  FUNC_14("Fail to initialize zfs");

 if (VAR_56)
  VAR_57 = FUNC_1(VAR_57, 1);

 for (VAR_52 = 0; VAR_52 < 256; VAR_52++) {
  if (VAR_56 && FUNC_42("AeEFklLOPRSX", VAR_52) == ((void*)0))
   VAR_31[VAR_52] = 1;
  if (VAR_31[VAR_52])
   VAR_31[VAR_52] += VAR_57;
 }

 VAR_30 = (VAR_31['A'] == 1) || (VAR_31['A'] > 2);
 VAR_46 = (VAR_31['A'] > 1);

 VAR_50 -= VAR_37;
 VAR_51 += VAR_37;

 if (VAR_50 < 2 && VAR_31['R'])
  FUNC_49();

 if (VAR_31['E']) {
  if (VAR_50 != 1)
   FUNC_49();
  FUNC_50(VAR_51[0]);
  return (0);
 }

 if (VAR_50 < 1) {
  if (!VAR_31['e'] && VAR_31['C']) {
   FUNC_6(VAR_39);
   return (0);
  }
  FUNC_49();
 }

 if (VAR_31['l'])
  return (FUNC_9(VAR_51[0]));

 if (VAR_31['O']) {
  if (VAR_50 != 2)
   FUNC_49();
  VAR_31['v'] = VAR_57 + 3;
  return (FUNC_11(VAR_51[0], VAR_51[1]));
 }

 if (VAR_31['X'] || VAR_31['F'])
  VAR_65 = VAR_24 |
      (VAR_31['X'] ? VAR_25 : 0);

 if (FUNC_31(&VAR_62, VAR_7, 0) != 0 ||
     FUNC_30(VAR_62, VAR_27, VAR_63) != 0 ||
     FUNC_29(VAR_62, VAR_28, VAR_65) != 0)
  FUNC_14("internal error: %s", FUNC_43(VAR_4));

 VAR_58 = 0;
 VAR_61 = VAR_51[0];

 if (VAR_31['e']) {
  char *VAR_70 = FUNC_15(&VAR_61, &VAR_68, VAR_60, VAR_59);

  VAR_58 = VAR_3;
  if (VAR_70) {
   if (VAR_31['C'] > 1) {
    (void) FUNC_34("\nConfiguration for import:\n");
    FUNC_10(VAR_68, 8);
   }

   if (FUNC_28(VAR_68,
       VAR_26, VAR_62) != 0) {
    FUNC_14("can't open '%s': %s",
        VAR_61, FUNC_43(VAR_4));
   }
   VAR_58 = FUNC_38(VAR_70, VAR_68, ((void*)0), VAR_64);
  }
 }

 char *VAR_71 = ((void*)0);
 char *VAR_72 = ((void*)0);
 if (VAR_31['k']) {
  VAR_71 = FUNC_21(VAR_61, VAR_68,
      &VAR_72);

  if (VAR_72 != ((void*)0))
   VAR_61 = VAR_72;

 }

 if (FUNC_45(VAR_61, "/@") != ((void*)0)) {
  size_t VAR_73;

  VAR_67 = VAR_0;






  VAR_73 = FUNC_44(VAR_61);
  if (VAR_73 != 0 && VAR_61[VAR_73 - 1] == '/')
   VAR_61[VAR_73 - 1] = '\0';
 }

 if (VAR_58 == 0) {
  if (VAR_31['k'] && (VAR_67 || VAR_31['R'])) {
   FUNC_0(VAR_71 != ((void*)0));
   FUNC_0(VAR_72 == ((void*)0));

   VAR_58 = FUNC_40(VAR_71, &VAR_54, VAR_6);
   if (VAR_58 != 0) {
    FUNC_14("Tried to open pool \"%s\" but "
        "spa_open() failed with error %d\n",
        VAR_71, VAR_58);
   }

  } else if (VAR_67 || VAR_31['R']) {
   VAR_58 = FUNC_41(VAR_61, &VAR_54, VAR_6, VAR_62,
       ((void*)0));
   if (VAR_58) {





    FUNC_26(&VAR_41);
    if ((VAR_54 = FUNC_39(VAR_61)) != ((void*)0) &&
        VAR_54->spa_log_state == VAR_10) {
     VAR_54->spa_log_state = VAR_9;
     VAR_58 = 0;
    }
    FUNC_27(&VAR_41);

    if (!VAR_58) {
     VAR_58 = FUNC_41(VAR_61, &VAR_54,
         VAR_6, VAR_62, ((void*)0));
    }
   }
  } else {
   VAR_58 = FUNC_33(VAR_61, VAR_2, VAR_6, &VAR_55);
  }
 }
 FUNC_32(VAR_62);

 if (VAR_58)
  FUNC_14("can't open '%s': %s", VAR_61, FUNC_43(VAR_58));

 VAR_51++;
 VAR_50--;
 if (!VAR_31['R']) {
  if (VAR_50 > 0) {
   VAR_49 = VAR_50;
   VAR_48 = FUNC_3(VAR_49, sizeof (uint64_t));
   for (unsigned VAR_74 = 0; VAR_74 < VAR_49; VAR_74++) {
    VAR_32 = 0;
    VAR_48[VAR_74] = FUNC_46(VAR_51[VAR_74], ((void*)0), 0);
    if (VAR_48[VAR_74] == 0 && VAR_32 != 0)
     FUNC_14("bad number %s: %s",
         VAR_51[VAR_74], FUNC_43(VAR_32));
   }
  }
  if (VAR_55 != ((void*)0)) {
   FUNC_8(VAR_55);
  } else if (VAR_49 > 0 && !VAR_31['m']) {
   FUNC_8(VAR_54->spa_meta_objset);
  } else {
   FUNC_12(VAR_54);
  }
 } else {
  VAR_33['b'] = VAR_20;
  VAR_33['c'] = VAR_15;
  VAR_33['d'] = VAR_16;
  VAR_33['e'] = VAR_14;
  VAR_33['g'] = VAR_17;
  VAR_33['i'] = VAR_18;
  VAR_33['p'] = VAR_19;
  VAR_33['r'] = VAR_21;

  for (int VAR_75 = 0; VAR_75 < VAR_50; VAR_75++)
   FUNC_51(VAR_51[VAR_75], VAR_54);
 }

 if (VAR_31['k']) {
  FUNC_17(VAR_71);
  if (!VAR_67)
   FUNC_17(VAR_72);
 }

 if (VAR_55 != ((void*)0))
  FUNC_4(VAR_55, VAR_6);
 else
  FUNC_37(VAR_54, VAR_6);

 FUNC_18();

 FUNC_7();

 FUNC_24(VAR_34);
 FUNC_22();

 return (VAR_58);
}
