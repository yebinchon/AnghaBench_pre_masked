
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atf_tc {int dummy; } ;
typedef char regmatch_t ;
typedef int regex_t ;
typedef int data_path ;
typedef int FILE ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,char*) ;
 char* FUNC_3 (struct atf_tc const*,char*) ;
 scalar_t__ FUNC_4 (char*,char*,size_t) ;
 char* FUNC_5 (size_t,int) ;
 int FUNC_6 (char*,size_t) ;
 int FUNC_7 (char*,size_t,char*,size_t) ;
 int VAR_4 ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (char*,char*) ;
 char* FUNC_10 (int *,size_t*,size_t*,int ,int ) ;
 int FUNC_11 (int ,char*,char*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,int*,int*) ;
 int FUNC_14 (char*) ;
 size_t FUNC_15 (char*) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (int *,char*,int) ;
 int FUNC_18 (int *,char*,size_t,char*,int ) ;
 int FUNC_19 (int *) ;
 int VAR_5 ;
 int FUNC_20 (char*,int,char*,char*,char const*) ;
 int VAR_6 ;
 scalar_t__ FUNC_21 (char*,char) ;
 scalar_t__ FUNC_22 (char*,char*) ;
 char* FUNC_23 (char*) ;
 char* FUNC_24 (char*,int ) ;
 int FUNC_25 (char*,char*) ;
 int FUNC_26 (char*) ;

__attribute__((used)) static void
FUNC_27(const struct atf_tc *VAR_7, const char *VAR_8)
{
 regex_t VAR_9;
 char *VAR_10, *VAR_11 = ((void*)0), VAR_12[VAR_0];
 size_t VAR_13, VAR_14 = 0;
 int VAR_15 = 0;
 FILE *VAR_16;

 FUNC_20(VAR_12, sizeof(VAR_12), "%s/data/%s.dat",
     FUNC_3(VAR_7, "srcdir"), VAR_8);

 VAR_16 = FUNC_9(VAR_12, "r");
 if (VAR_16 == ((void*)0))
  FUNC_2("Failed to open input file %s", VAR_12);

 for (; (VAR_10 = FUNC_10(VAR_16, &VAR_13, &VAR_14, VAR_4, 0))
     != ((void*)0); FUNC_12(VAR_10)) {
  char *VAR_17, *VAR_18, *VAR_19, *VAR_20, *VAR_21;
  regmatch_t *VAR_22;
  size_t VAR_23;



  if ((VAR_17 = FUNC_24(VAR_10, VAR_5)) == ((void*)0))
   continue;






  if (*VAR_17 == '}') {
   VAR_15 = 0;
   continue;
  }
  if (VAR_15)
   continue;
  if (*VAR_17 == ';' || *VAR_17 == '#' || FUNC_22(VAR_17, "NOTE") == 0)
   continue;
  if (*VAR_17 == ':') {

   while (*++VAR_17 && *VAR_17 != ':')
    continue;
   if (*VAR_17)
    VAR_17++;
  }

  FUNC_1((VAR_18 = FUNC_24(((void*)0), VAR_5)) != ((void*)0),
   "Missing pattern at line %zu", VAR_14);
  FUNC_1((VAR_19 = FUNC_24(((void*)0), VAR_5)) != ((void*)0),
   "Missing input at line %zu", VAR_14);

  if (FUNC_21(VAR_17, '$')) {
   FUNC_0(FUNC_25(VAR_18, VAR_18) != -1);
   FUNC_0(FUNC_25(VAR_19, VAR_19) != -1);
  }


  if (FUNC_22(VAR_19, "NULL") == 0)
   *VAR_19 = '\0';

  if (FUNC_22(VAR_18, "SAME") == 0) {
   FUNC_0(VAR_11 != ((void*)0));
   VAR_18 = VAR_11;
  } else {
   FUNC_12(VAR_11);
   FUNC_0((VAR_11 = FUNC_23(VAR_18)) != ((void*)0));
  }

  FUNC_1((VAR_20 = FUNC_24(((void*)0), VAR_5)) != ((void*)0),
      "Missing matches at line %zu", VAR_14);

  VAR_21 = FUNC_24(((void*)0), VAR_5);
  switch (*VAR_17) {
  case '{':
   if (FUNC_16(VAR_21)) {
    VAR_15++;
    continue;
   }
   VAR_17++;
   break;
  case '}':
   VAR_15 = 0;
   continue;
  case '?':
  case '|':
   if (FUNC_26(VAR_21))
    continue;
   VAR_17++;
   break;
  case '#':
  case ';':
   continue;
  default:
   break;
  }


  if (FUNC_4(VAR_18, VAR_19, VAR_14))
   continue;

  int VAR_24, VAR_25;
  if (*VAR_20 != '(') {
   FUNC_13(VAR_20, &VAR_24, &VAR_25);
   VAR_22 = ((void*)0);
   VAR_23 = 0;
  } else {
   VAR_24 = VAR_25 = 0;
   VAR_23 = FUNC_15(VAR_20);
   FUNC_0((VAR_22 = FUNC_5(VAR_23, sizeof(*VAR_22))) != ((void*)0));
  }



  int VAR_26 = FUNC_14(VAR_17);
  for (; *VAR_17; VAR_17++) {
   int VAR_27;
   switch (*VAR_17) {
   case 'B':
    VAR_27 = VAR_1;
    break;
   case 'E':
    VAR_27 = VAR_2;
    break;
   case 'L':
    VAR_27 = VAR_3;
    break;
   default:
    FUNC_1(0, "Bad name %c", *VAR_17);
    continue;
   }
   int VAR_28 = FUNC_17(&VAR_9, VAR_18, VAR_27 | VAR_26);
   FUNC_1(VAR_28 == VAR_24,
       "regcomp returned %d for pattern %s at line %zu",
       VAR_28, VAR_18, VAR_14);
   if (VAR_28)
    continue;
   int VAR_29 = FUNC_18(&VAR_9, VAR_19, VAR_23, VAR_22, 0);
   FUNC_1(VAR_29 == VAR_25, "Expected error %d,"
       " got %d at line %zu", VAR_25, VAR_29, VAR_14);
   FUNC_7(VAR_20, VAR_23, VAR_22, VAR_14);
   FUNC_6(VAR_21, VAR_14);
   FUNC_19(&VAR_9);
  }
  FUNC_12(VAR_22);
 }

 FUNC_8(VAR_16);
}
