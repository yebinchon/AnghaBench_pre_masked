
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * node_p ;
typedef int * hook_p ;
typedef int fullpath ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_3 ;
 int * FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int * FUNC_10 (int *,char*) ;
 int * FUNC_11 (int *,char*) ;
 scalar_t__ FUNC_12 (char*,char**,char**,int *) ;
 int FUNC_13 (char*,char const*,int) ;

int
FUNC_14(node_p VAR_4, const char *VAR_5, node_p *VAR_6,
    hook_p *VAR_7)
{
 char VAR_8[VAR_3];
 char *VAR_9, *VAR_10;
 node_p VAR_11, VAR_12;


 if (VAR_6 == ((void*)0)) {
  FUNC_9();
  return VAR_0;
 }
 *VAR_6 = ((void*)0);


 FUNC_13(VAR_8, VAR_5, sizeof(VAR_8) - 1);
 VAR_8[sizeof(VAR_8) - 1] = '\0';


 if (FUNC_12(VAR_8, &VAR_9, &VAR_10, ((void*)0)) < 0) {
  FUNC_9();
  return VAR_0;
 }






 if (VAR_9) {
  VAR_11 = FUNC_11(VAR_4, VAR_9);
  if (VAR_11 == ((void*)0)) {
   FUNC_9();
   return (VAR_1);
  }
 } else {
  if (VAR_4 == ((void*)0)) {
   FUNC_9();
   return (VAR_0);
  }
  VAR_11 = VAR_4;
  FUNC_4(VAR_11);
 }

 if (VAR_10 == ((void*)0)) {
  if (VAR_7 != ((void*)0))
   *VAR_7 = ((void*)0);
  *VAR_6 = VAR_11;
  return (0);
 }
 for (;;) {
  hook_p VAR_13;
  char *VAR_14;






  for (VAR_14 = VAR_10; *VAR_10 != '\0'; VAR_10++) {
   if (*VAR_10 == '.') {
    *VAR_10++ = '\0';
    break;
   }
  }


  VAR_13 = FUNC_10(VAR_11, VAR_14);

  FUNC_7();

  if (VAR_13 == ((void*)0) || FUNC_1(VAR_13) == ((void*)0) ||
      FUNC_0(VAR_13) ||
      FUNC_0(FUNC_1(VAR_13))) {
   FUNC_9();
   FUNC_5(VAR_11);
   FUNC_8();
   return (VAR_1);
  }
  VAR_12 = VAR_11;
  if ((VAR_11 = FUNC_6(VAR_13)))
   FUNC_4(VAR_11);
  FUNC_5(VAR_12);
  if (FUNC_3(VAR_11)) {
   FUNC_5(VAR_11);
   FUNC_8();
   FUNC_9();
   return (VAR_2);
  }

  if (*VAR_10 == '\0') {
   if (VAR_7 != ((void*)0)) {
    if (VAR_13 != ((void*)0)) {
     *VAR_7 = FUNC_1(VAR_13);
     FUNC_2(*VAR_7);
    } else
     *VAR_7 = ((void*)0);
   }
   FUNC_8();
   *VAR_6 = VAR_11;
   return (0);
  }
  FUNC_8();
 }
}
