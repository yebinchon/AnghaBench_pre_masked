
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xcmd {int* arg; int (* handler ) (struct parse*,int *) ;} ;
struct parse {char* keyword; scalar_t__ nargs; int * argval; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,int ,struct xcmd**) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (int *,char*,...) ;
 int FUNC_6 (char*,int *) ;
 int FUNC_7 (char*,int,int *) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (struct xcmd*,int *) ;
 int * VAR_9 ;
 int * VAR_10 ;
 int FUNC_10 (struct parse*,int *) ;
 int FUNC_11 (struct parse*,int *) ;
 int FUNC_12 (char const*,char**,int*) ;

__attribute__((used)) static void
FUNC_13(
 const char *VAR_11
 )
{
 char *VAR_12[1+VAR_0+2];
 struct parse VAR_13;
 int VAR_14;
 static int VAR_15;
 struct xcmd *VAR_16;




 FUNC_12(VAR_11, VAR_12, &VAR_14);
 if (VAR_14 == 0)
     return;




 VAR_15 = FUNC_3(VAR_12[0], VAR_3, VAR_8, &VAR_16);
 if (VAR_15 == 0) {
  (void) FUNC_5(VAR_9, "***Command `%s' unknown\n",
          VAR_12[0]);
  return;
 } else if (VAR_15 >= 2) {
  (void) FUNC_5(VAR_9, "***Command `%s' ambiguous\n",
          VAR_12[0]);
  return;
 }


 for (VAR_15 = VAR_0 + 1; VAR_15 < VAR_14 ; ++VAR_15) {
  FUNC_5(VAR_9, "***Extra arg `%s' ignored\n", VAR_12[VAR_15]);
 }





 VAR_13.keyword = VAR_12[0];
 VAR_13.nargs = 0;
 for (VAR_15 = 0; VAR_15 < VAR_0 && VAR_16->arg[VAR_15] != VAR_1; VAR_15++) {
  if ((VAR_15+1) >= VAR_14) {
   if (!(VAR_16->arg[VAR_15] & VAR_2)) {
    FUNC_9(VAR_16, VAR_9);
    return;
   }
   break;
  }
  if ((VAR_16->arg[VAR_15] & VAR_2) && (*VAR_12[VAR_15+1] == '>'))
   break;
  if (!FUNC_7(VAR_12[VAR_15+1], (int)VAR_16->arg[VAR_15], &VAR_13.argval[VAR_15]))
   return;
  VAR_13.nargs++;
 }

 VAR_15++;
 if (VAR_15 < VAR_14 && *VAR_12[VAR_15] == '>') {
  char *VAR_17;

  if (*(VAR_12[VAR_15]+1) != '\0')
   VAR_17 = VAR_12[VAR_15]+1;
  else if ((VAR_15+1) < VAR_14)
   VAR_17 = VAR_12[VAR_15+1];
  else {
   (void) FUNC_5(VAR_9, "***No file for redirect\n");
   return;
  }

  VAR_4 = FUNC_4(VAR_17, "w");
  if (VAR_4 == ((void*)0)) {
   (void) FUNC_5(VAR_9, "***Error opening %s: ", VAR_17);
   FUNC_8("");
   return;
  }
 } else {
  VAR_4 = VAR_10;
 }

 if (VAR_5) {
  if ( ! FUNC_0(VAR_6)) {
   VAR_7 = 1;
   (VAR_16->handler)(&VAR_13, VAR_4);
   VAR_7 = 0;
  } else {
   FUNC_2(VAR_4);
   FUNC_6("\n >>> command aborted <<<\n", VAR_9);
   FUNC_2(VAR_9);
  }

 } else {
  VAR_7 = 0;
  (VAR_16->handler)(&VAR_13, VAR_4);
 }
 if ((((void*)0) != VAR_4) && (VAR_10 != VAR_4)) {
  (void)FUNC_1(VAR_4);
  VAR_4 = ((void*)0);
 }
}
