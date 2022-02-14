
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fileargs_t ;
typedef int cap_rights_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,char*,int ) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int,char**,int ,int ,int *,int ) ;
 int FUNC_11 (int *,char const*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int,char**,char*,int ,int *) ;
 int FUNC_14 (int,char const*) ;
 char* VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_15 () ;
 int VAR_17 ;
 int VAR_18 ;
 char* FUNC_16 (char*) ;
 int FUNC_17 (char*,int *,int) ;
 scalar_t__ VAR_19 ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 int FUNC_20 (char*,char const*) ;
 int FUNC_21 (char*,char const*) ;

int
FUNC_22(int VAR_20, char **VAR_21)
{
 cap_rights_t VAR_22;
 fileargs_t *VAR_23;
 int VAR_24, VAR_25, VAR_26, VAR_27;
 const char *VAR_28;
 char *VAR_29;

 VAR_27 = VAR_10;

 if (FUNC_6(VAR_2) == VAR_3)
  FUNC_8(VAR_4, "ELF library initialization failed: %s",
      FUNC_5(-1));

 while ((VAR_24 = FUNC_13(VAR_20, VAR_21, "ABVdhotx", VAR_17,
     ((void*)0))) != -1)
  switch((char)VAR_24) {
  case 'A':
   VAR_19 = VAR_12;
   break;
  case 'B':
   VAR_19 = VAR_11;
   break;
  case 'V':
   FUNC_15();
   break;
  case 'd':
   VAR_15 = VAR_7;
   break;
  case 'o':
   VAR_15 = VAR_9;
   break;
  case 't':
   VAR_16 = 1;
   break;
  case 'x':
   VAR_15 = VAR_8;
   break;
  case 0:
   switch (VAR_18) {
   case 129:
    if (*VAR_13 == 's' || *VAR_13 == 'S')
     VAR_19 = VAR_12;
    else if (*VAR_13 == 'b' || *VAR_13 == 'B')
     VAR_19 = VAR_11;
    else {
     FUNC_21("unrecognized format \"%s\".",
           VAR_13);
     FUNC_19();
    }
    break;
   case 128:
    VAR_26 = FUNC_17(VAR_13, ((void*)0), 10);
    if (VAR_26 == 8)
     VAR_15 = VAR_9;
    else if (VAR_26 == 10)
     VAR_15 = VAR_7;
    else if (VAR_26 == 16)
     VAR_15 = VAR_8;
    else {
     FUNC_21("unsupported radix \"%s\".",
           VAR_13);
     FUNC_19();
    }
    break;
   default:
    FUNC_7(VAR_4, "Error in option handling.");

   }
   break;
  case 'h':
  case '?':
  default:
   FUNC_19();

  }
 VAR_20 -= VAR_14;
 VAR_21 += VAR_14;

 if (VAR_20 == 0) {
  VAR_29 = FUNC_16("a.out");
  if (VAR_29 == ((void*)0))
   FUNC_7(VAR_4, "strdup");
  VAR_20 = 1;
  VAR_21 = &VAR_29;
 } else {
  VAR_29 = ((void*)0);
 }

 FUNC_1(&VAR_22, VAR_0, VAR_1);
 VAR_23 = FUNC_10(VAR_20, VAR_21, VAR_6, 0, &VAR_22, VAR_5);
 if (VAR_23 == ((void*)0))
  FUNC_7(VAR_4, "failed to initialize fileargs");

 FUNC_2();
 if (FUNC_4() < 0)
  FUNC_7(VAR_4, "failed to limit stdio rights");
 if (FUNC_3() < 0)
  FUNC_7(VAR_4, "failed to enter capability mode");

 for (; VAR_20 > 0; VAR_20--, VAR_21++) {
  VAR_28 = VAR_21[0];
  VAR_25 = FUNC_11(VAR_23, VAR_28);
  if (VAR_25 < 0) {
   FUNC_20("%s: Failed to open", VAR_28);
   continue;
  }
  VAR_27 = FUNC_14(VAR_25, VAR_28);
  if (VAR_27 != VAR_10)
   FUNC_21("%s: File format not recognized", VAR_28);
 }
 if (VAR_19 == VAR_11) {
  if (VAR_16)
   FUNC_0();
  FUNC_18();
 }
 FUNC_9(VAR_23);
 FUNC_12(VAR_29);
        return (VAR_27);
}
