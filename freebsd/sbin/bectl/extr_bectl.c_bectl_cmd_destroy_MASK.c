
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 scalar_t__ FUNC_1 (int ,char*,int *) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int **) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,char*,char*) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int,char**,char*) ;
 scalar_t__ FUNC_8 (int *,char*,char**) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_9 (char*,char) ;
 int FUNC_10 (int) ;

__attribute__((used)) static int
FUNC_11(int VAR_8, char *VAR_9[])
{
 nvlist_t *VAR_10;
 char *VAR_11, *VAR_12, VAR_13[VAR_3];
 int VAR_14, VAR_15, VAR_16;

 VAR_15 = 0;
 while ((VAR_16 = FUNC_7(VAR_8, VAR_9, "Fo")) != -1) {
  switch (VAR_16) {
  case 'F':
   VAR_15 |= VAR_1;
   break;
  case 'o':
   VAR_15 |= VAR_2;
   break;
  default:
   FUNC_6(VAR_7, "bectl destroy: unknown option '-%c'\n",
       VAR_6);
   return (FUNC_10(0));
  }
 }

 VAR_8 -= VAR_5;
 VAR_9 += VAR_5;

 if (VAR_8 != 1) {
  FUNC_6(VAR_7, "bectl destroy: wrong number of arguments\n");
  return (FUNC_10(0));
 }

 VAR_12 = VAR_9[0];


 if ((VAR_15 & VAR_2) == 0 && FUNC_9(VAR_12, '@') == ((void*)0)) {
  VAR_15 |= VAR_0;
  if (FUNC_5(VAR_4, VAR_12, VAR_13) != 0)
   goto destroy;
  if (FUNC_3(&VAR_10) != 0)
   goto destroy;
  if (FUNC_1(VAR_4, VAR_13, VAR_10) != 0) {
   FUNC_4(VAR_10);
   goto destroy;
  }
  if (FUNC_8(VAR_10, "origin", &VAR_11) == 0 &&
      !FUNC_2(VAR_4, VAR_11))
   FUNC_6(VAR_7, "bectl destroy: leaving origin '%s' intact\n",
       VAR_11);
  FUNC_4(VAR_10);
 }

destroy:
 VAR_14 = FUNC_0(VAR_4, VAR_12, VAR_15);

 return (VAR_14);
}
