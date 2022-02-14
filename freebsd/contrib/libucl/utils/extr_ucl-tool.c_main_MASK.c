
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucl_object_t ;
typedef scalar_t__ ucl_emitter_t ;
struct ucl_schema_error {char* msg; } ;
struct ucl_parser {int dummy; } ;
typedef int FILE ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (int *,char*,...) ;
 scalar_t__ FUNC_6 (unsigned char*,int,size_t,int *) ;
 int FUNC_7 (unsigned char*,int,size_t,int *) ;
 char FUNC_8 (int,char**,char*,int ,int *) ;
 unsigned char* FUNC_9 (size_t) ;
 char* VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (char*) ;
 unsigned char* FUNC_11 (unsigned char*,size_t) ;
 int * VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int FUNC_12 (char*,char*) ;
 char* FUNC_13 (int *,scalar_t__) ;
 unsigned char* FUNC_14 (int *,scalar_t__,size_t*) ;
 int FUNC_15 (int *,int *,struct ucl_schema_error*) ;
 int FUNC_16 (struct ucl_parser*,unsigned char*,size_t) ;
 int FUNC_17 (struct ucl_parser*,char const*) ;
 char* FUNC_18 (struct ucl_parser*) ;
 int * FUNC_19 (struct ucl_parser*) ;
 struct ucl_parser* FUNC_20 (int ) ;
 int FUNC_21 (char*,int *) ;

int FUNC_22(int VAR_12, char **VAR_13) {
  char VAR_14;
  FILE *VAR_15 = VAR_10, *VAR_16 = VAR_11;
  const char *VAR_17 = ((void*)0);
  unsigned char *VAR_18 = ((void*)0);
  size_t VAR_19 = 0, VAR_20 = 0;
  struct ucl_parser *VAR_21 = ((void*)0);
  ucl_object_t *VAR_22 = ((void*)0);
  ucl_emitter_t VAR_23 = VAR_2;

  while((VAR_14 = FUNC_8(VAR_12, VAR_13, "hi:o:s:f:", VAR_8, ((void*)0))) != -1) {
    switch (VAR_14) {
    case 'i':
      VAR_15 = FUNC_4(VAR_7, "r");
      if (VAR_15 == ((void*)0)) {
        FUNC_10("fopen on input file");
        FUNC_0(VAR_1);
      }
      break;
    case 'o':
      VAR_16 = FUNC_4(VAR_7, "w");
      if (VAR_16 == ((void*)0)) {
        FUNC_10("fopen on output file");
        FUNC_0(VAR_1);
      }
      break;
    case 's':
      VAR_17 = VAR_7;
      break;
    case 'f':
      if (FUNC_12(VAR_7, "ucl") == 0) {
        VAR_23 = VAR_2;
      } else if (FUNC_12(VAR_7, "json") == 0) {
        VAR_23 = VAR_3;
      } else if (FUNC_12(VAR_7, "yaml") == 0) {
        VAR_23 = VAR_6;
      } else if (FUNC_12(VAR_7, "compact_json") == 0) {
        VAR_23 = VAR_4;
      } else if (FUNC_12(VAR_7, "msgpack") == 0) {
        VAR_23 = VAR_5;
      } else {
        FUNC_5(VAR_9, "Unknown output format: %s\n", VAR_7);
        FUNC_0(VAR_1);
      }
      break;
    case 'h':
      FUNC_21(VAR_13[0], VAR_11);
      FUNC_0(0);
    default:
      FUNC_21(VAR_13[0], VAR_9);
      FUNC_0(VAR_1);
      break;
    }
  }

  VAR_21 = FUNC_20(0);
  VAR_18 = FUNC_9(VAR_0);
  VAR_19 = VAR_0;
  while(!FUNC_2(VAR_15) && !FUNC_3(VAR_15)) {
    if (VAR_20 == VAR_19) {
      VAR_18 = FUNC_11(VAR_18, VAR_19*2);
      VAR_19 *= 2;
      if (VAR_18 == ((void*)0)) {
        FUNC_10("realloc");
        FUNC_0(VAR_1);
      }
    }
    VAR_20 += FUNC_6(VAR_18 + VAR_20, 1, VAR_19 - VAR_20, VAR_15);
  }
  if (FUNC_3(VAR_15)) {
    FUNC_5(VAR_9, "Failed to read the input file.\n");
    FUNC_0(VAR_1);
  }
  FUNC_1(VAR_15);
  if (!FUNC_16(VAR_21, VAR_18, VAR_20)) {
    FUNC_5(VAR_9, "Failed to parse input file: %s\n",
            FUNC_18(VAR_21));
    FUNC_0(VAR_1);
  }
  if ((VAR_22 = FUNC_19(VAR_21)) == ((void*)0)) {
    FUNC_5(VAR_9, "Failed to get root object: %s\n",
            FUNC_18(VAR_21));
    FUNC_0(VAR_1);
  }
  if (VAR_17 != ((void*)0)) {
    struct ucl_parser *VAR_24 = FUNC_20(0);
    ucl_object_t *VAR_25 = ((void*)0);
    struct ucl_schema_error VAR_26;

    if (!FUNC_17(VAR_24, VAR_17)) {
      FUNC_5(VAR_9, "Failed to parse schema file: %s\n",
              FUNC_18(VAR_24));
      FUNC_0(VAR_1);
    }
    if ((VAR_25 = FUNC_19(VAR_24)) == ((void*)0)) {
      FUNC_5(VAR_9, "Failed to get root object: %s\n",
              FUNC_18(VAR_24));
      FUNC_0(VAR_1);
    }
    if (!FUNC_15(VAR_25, VAR_22, &VAR_26)) {
      FUNC_5(VAR_9, "Validation failed: %s\n", VAR_26.msg);
      FUNC_0(VAR_1);
    }
  }

  if (VAR_23 != VAR_5) {
    FUNC_5(VAR_16, "%s\n", FUNC_13(VAR_22, VAR_23));
  }
  else {
    size_t VAR_27;
    unsigned char *VAR_28;

    VAR_28 = FUNC_14(VAR_22, VAR_23, &VAR_27);
    FUNC_7(VAR_28, 1, VAR_27, VAR_16);
  }

  return 0;
}
