
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;
typedef int SCR ;
typedef int FILE ;
typedef char CHAR_T ;


 int FUNC_0 (int *,char*,size_t,size_t) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int ,char*,size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_4 (int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char) ;
 int FUNC_9 (int,int ) ;
 int FUNC_10 (char*,char*,char*,char*,char*) ;
 scalar_t__ FUNC_11 (int *) ;
 int * FUNC_12 (int,char*) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (int *,int ,char*) ;
 int FUNC_15 (int *,int ,char*,char*) ;
 scalar_t__ FUNC_16 (int*) ;
 scalar_t__ FUNC_17 (int *,long,char*,int,int ) ;
 char* FUNC_18 (char*,char) ;
 scalar_t__ FUNC_19 () ;

__attribute__((used)) static int
FUNC_20(SCR *VAR_7, CHAR_T **VAR_8, size_t *VAR_9, size_t *VAR_10)
{
 enum { SEXP_ERR, SEXP_EXPANSION_ERR, SEXP_OK } VAR_11;
 FILE *VAR_12;
 pid_t VAR_13;
 size_t VAR_14, VAR_15;
 int VAR_16, VAR_17[2];
 CHAR_T *VAR_18, *VAR_19;
 char *VAR_20, *VAR_21;
 char *VAR_22;
 size_t VAR_23;


 if (FUNC_3(VAR_7, VAR_3)) {
  FUNC_14(VAR_7, VAR_1,
"289|Shell expansions not supported when the secure edit option is set");
  return (1);
 }

 VAR_21 = FUNC_4(VAR_7, VAR_4);
 if ((VAR_20 = FUNC_18(VAR_21, '/')) == ((void*)0))
  VAR_20 = VAR_21;
 else
  ++VAR_20;


 VAR_18 = *VAR_8;
 VAR_14 = *VAR_9;
 VAR_12 = ((void*)0);
 VAR_17[0] = VAR_17[1] = -1;
 if (FUNC_16(VAR_17) < 0) {
  FUNC_14(VAR_7, VAR_2, "pipe");
  return (1);
 }
 if ((VAR_12 = FUNC_12(VAR_17[0], "r")) == ((void*)0)) {
  FUNC_14(VAR_7, VAR_2, "fdopen");
  goto err;
 }





 switch (VAR_13 = FUNC_19()) {
 case -1:
  FUNC_14(VAR_7, VAR_2, "vfork");
err: if (VAR_12 != ((void*)0))
   (void)FUNC_11(VAR_12);
  else if (VAR_17[0] != -1)
   FUNC_7(VAR_17[0]);
  if (VAR_17[1] != -1)
   FUNC_7(VAR_17[0]);
  return (1);
 case 0:

  (void)FUNC_9(VAR_17[1], VAR_6);


  (void)FUNC_7(VAR_17[0]);
  (void)FUNC_7(VAR_17[1]);
  (void)FUNC_7(VAR_5);





  FUNC_2(VAR_7, VAR_18, FUNC_5(VAR_18)+1, VAR_22, VAR_23);
  FUNC_10(VAR_21, VAR_20, "-c", VAR_22, (char *)((void*)0));
  FUNC_15(VAR_7, VAR_2, VAR_21, "118|Error: execl: %s");
  FUNC_6(127);
 default:

  (void)FUNC_7(VAR_17[1]);
  break;
 }
 for (VAR_19 = VAR_18, VAR_15 = 0, VAR_16 = VAR_0;
     (VAR_16 = FUNC_1(VAR_12)) != VAR_0; *VAR_19++ = VAR_16, VAR_14-=sizeof(CHAR_T), ++VAR_15)
  if (VAR_14 < 5) {
   FUNC_0(VAR_7, VAR_18, *VAR_9, *VAR_9 * 2);
   VAR_19 = VAR_18 + VAR_15;
   VAR_14 = *VAR_9 - VAR_15;
  }


 if (VAR_19 > VAR_18 && (VAR_19[-1] == '\n' || VAR_19[-1] == '\r')) {
  --VAR_19;
  --VAR_15;
 }
 *VAR_19 = '\0';
 *VAR_10 = VAR_15;
 *VAR_8 = VAR_18;

 if (FUNC_13(VAR_12))
  goto ioerr;
 if (FUNC_11(VAR_12)) {
ioerr: FUNC_15(VAR_7, VAR_1, VAR_20, "119|I/O error: %s");
alloc_err: VAR_11 = SEXP_ERR;
 } else
  VAR_11 = SEXP_OK;
 if (FUNC_17(VAR_7, (long)VAR_13, VAR_20, 1, 0))
  VAR_11 = SEXP_EXPANSION_ERR;

 for (VAR_19 = VAR_18; VAR_15; ++VAR_19, --VAR_15)
  if (!FUNC_8(*VAR_19))
   break;
 if (VAR_15 == 0)
  VAR_11 = SEXP_EXPANSION_ERR;

 if (VAR_11 == SEXP_EXPANSION_ERR)
  FUNC_14(VAR_7, VAR_1, "304|Shell expansion failed");

 return (VAR_11 == SEXP_OK ? 0 : 1);
}
