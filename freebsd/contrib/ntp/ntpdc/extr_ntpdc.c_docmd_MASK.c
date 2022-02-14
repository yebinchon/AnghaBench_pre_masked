
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xcmd {int* arg; int (* handler ) (struct parse*,int *) ;} ;
struct parse {char* keyword; scalar_t__ nargs; int * argval; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,int ,struct xcmd**) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (int *,char*,...) ;
 int FUNC_6 (char*,int *) ;
 int FUNC_7 (char*,int,int *) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (struct xcmd*,int *) ;
 int * VAR_14 ;
 int * VAR_15 ;
 scalar_t__ FUNC_10 (char const*) ;
 int FUNC_11 (struct parse*,int *) ;
 int FUNC_12 (struct parse*,int *) ;
 int FUNC_13 (char const*,char**,int*) ;

__attribute__((used)) static void
FUNC_14(
 const char *VAR_16
 )
{
 char *VAR_17[1+VAR_0+VAR_2+2];
 struct parse VAR_18;
 int VAR_19;
 int VAR_20, VAR_21;
 int VAR_22;
 struct xcmd *VAR_23;

 VAR_7 = VAR_6;



 if (FUNC_10(VAR_16) >= VAR_1) {
  FUNC_5(VAR_14, "***Command ignored, more than %ld characters:\n%s\n",
   VAR_1 - 1, VAR_16);
  return;
 }
 FUNC_13(VAR_16, VAR_17, &VAR_19);
 if (VAR_19 == 0)
     return;




 VAR_20 = FUNC_3(VAR_17[0], VAR_8, VAR_13, &VAR_23);
 if (VAR_20 == 0) {
  (void) FUNC_5(VAR_14, "***Command `%s' unknown\n",
          VAR_17[0]);
  return;
 } else if (VAR_20 >= 2) {
  (void) FUNC_5(VAR_14, "***Command `%s' ambiguous\n",
          VAR_17[0]);
  return;
 }





 VAR_18.keyword = VAR_17[0];
 VAR_18.nargs = 0;
 VAR_21 = 1;
 for (VAR_20 = 0; VAR_20 < VAR_0 && VAR_23->arg[VAR_20] != VAR_3;) {
  if ((VAR_20+VAR_21) >= VAR_19) {
   if (!(VAR_23->arg[VAR_20] & VAR_5)) {
    FUNC_9(VAR_23, VAR_14);
    return;
   }
   break;
  }
  if ((VAR_23->arg[VAR_20] & VAR_5) && (*VAR_17[VAR_20+VAR_21] == '>'))
   break;
  VAR_22 = FUNC_7(VAR_17[VAR_20+VAR_21], (int)VAR_23->arg[VAR_20], &VAR_18.argval[VAR_20]);
  if (VAR_22 == -1) {
   VAR_21++;
   continue;
  }
  if (VAR_22 == 0)
   return;
  VAR_18.nargs++;
  VAR_20++;
 }


 for ( ; VAR_20 < VAR_0 + VAR_2;) {
      if ((VAR_20+VAR_21) >= VAR_19)
    break;
  VAR_22 = FUNC_7(VAR_17[VAR_20+VAR_21], (int)(VAR_5|VAR_4), &VAR_18.argval[VAR_20]);
  if (VAR_22 == -1) {
   VAR_21++;
   continue;
  }
  if (VAR_22 == 0)
   return;
  VAR_18.nargs++;
  VAR_20++;
 }

 VAR_20 += VAR_21;
 if (VAR_20 < VAR_19 && *VAR_17[VAR_20] == '>') {
  char *VAR_24;

  if (*(VAR_17[VAR_20]+1) != '\0')
      VAR_24 = VAR_17[VAR_20]+1;
  else if ((VAR_20+1) < VAR_19)
      VAR_24 = VAR_17[VAR_20+1];
  else {
   (void) FUNC_5(VAR_14, "***No file for redirect\n");
   return;
  }

  VAR_9 = FUNC_4(VAR_24, "w");
  if (VAR_9 == ((void*)0)) {
   (void) FUNC_5(VAR_14, "***Error opening %s: ", VAR_24);
   FUNC_8("");
   return;
  }
 } else {
  VAR_9 = VAR_15;
 }

 if (VAR_10) {
  if ( ! FUNC_0(VAR_11)) {
   VAR_12 = 1;
   (VAR_23->handler)(&VAR_18, VAR_9);
   VAR_12 = 0;
  } else {
   FUNC_2(VAR_9);
   FUNC_6("\n >>> command aborted <<<\n", VAR_14);
   FUNC_2(VAR_14);
  }
 } else {
  VAR_12 = 0;
  (VAR_23->handler)(&VAR_18, VAR_9);
 }
 if ((((void*)0) != VAR_9) && (VAR_15 != VAR_9)) {
  (void)FUNC_1(VAR_9);
  VAR_9 = ((void*)0);
 }
}
