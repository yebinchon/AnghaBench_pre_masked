
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mparse {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct mparse*) ;
 int FUNC_1 (int,char**,char*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct mparse* FUNC_4 (int,int ,int *) ;
 int FUNC_5 (struct mparse*) ;
 int FUNC_6 (struct mparse*,char*) ;
 int FUNC_7 (struct mparse*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (struct mparse*,int,char*,int) ;
 char* VAR_8 ;
 char* FUNC_10 (char*,char) ;
 int FUNC_11 () ;

int
FUNC_12(int VAR_9, char *VAR_10[])
{
 struct mparse *VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15;
 extern int VAR_16;

 if (VAR_9 < 1)
  VAR_8 = "demandoc";
 else if ((VAR_8 = FUNC_10(VAR_10[0], '/')) == ((void*)0))
  VAR_8 = VAR_10[0];
 else
  ++VAR_8;

 VAR_11 = ((void*)0);
 VAR_15 = 0;

 while (-1 != (VAR_12 = FUNC_1(VAR_9, VAR_10, "ikm:pw")))
  switch (VAR_12) {
  case ('i'):

  case ('k'):

  case ('m'):

  case ('p'):
   break;
  case ('w'):
   VAR_15 = 1;
   break;
  default:
   FUNC_11();
   return (int)VAR_0;
  }

 VAR_9 -= VAR_16;
 VAR_10 += VAR_16;

 FUNC_2();
 VAR_11 = FUNC_4(VAR_4 | VAR_5 | VAR_3 |
     VAR_6, VAR_2, ((void*)0));
 FUNC_0(VAR_11);

 if (VAR_9 < 1)
  FUNC_9(VAR_11, VAR_7, "<stdin>", VAR_15);

 for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++) {
  FUNC_7(VAR_11);
  if ((VAR_13 = FUNC_6(VAR_11, VAR_10[VAR_14])) == -1) {
   FUNC_8(VAR_10[VAR_14]);
   continue;
  }
  FUNC_9(VAR_11, VAR_13, VAR_10[VAR_14], VAR_15);
 }

 FUNC_5(VAR_11);
 FUNC_3();
 return (int)VAR_1;
}
