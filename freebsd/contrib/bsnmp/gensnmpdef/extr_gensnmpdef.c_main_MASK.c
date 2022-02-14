
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u_int ;
typedef int mods ;
struct TYPE_8__ {scalar_t__ oidlen; } ;
typedef TYPE_1__ SmiNode ;
typedef int SmiModule ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int,char*,...) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int,char**,char*) ;
 int * VAR_5 ;
 int ** FUNC_5 (int) ;
 scalar_t__ FUNC_6 (TYPE_1__*,scalar_t__,TYPE_1__**) ;
 char* VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_7 (TYPE_1__*,scalar_t__) ;
 int FUNC_8 (TYPE_1__*) ;
 TYPE_1__* FUNC_9 (int *,int ) ;
 int FUNC_10 () ;
 int * FUNC_11 (char*) ;
 TYPE_1__* FUNC_12 (int *,int ) ;
 int FUNC_13 (int *) ;
 char* FUNC_14 (char*) ;
 int FUNC_15 (int) ;
 int VAR_8 ;
 long FUNC_16 (char*,char**,int) ;
 int FUNC_17 () ;
 char* VAR_9 ;

int
FUNC_18(int VAR_10, char *VAR_11[])
{
 int VAR_12;
 int VAR_13;
 SmiModule **VAR_14;
 char *VAR_15;
 SmiNode *VAR_16, *VAR_17;
 u_int VAR_18;
 long VAR_19;
 char *VAR_20;

 FUNC_13(((void*)0));

 while ((VAR_12 = FUNC_4(VAR_10, VAR_11, "c:Eeh")) != -1)
  switch (VAR_12) {

    case 'c':
   VAR_4 = 0;
   VAR_19 = FUNC_16(VAR_6, &VAR_20, 10);
   if (VAR_4 != 0)
    FUNC_1(1, "argument to -c");
   if (*VAR_20 != '\0')
    FUNC_1(1, "%s: not a number", VAR_6);
   if (VAR_19 < 0 || VAR_19 > 5)
    FUNC_1(1, "%s: out of range", VAR_6);
   VAR_2 = (u_int)VAR_19;
   break;

    case 'E':
   VAR_3 = 'E';
   break;

    case 'e':
   VAR_3 = 'e';
   break;

    case 'h':
   FUNC_3(VAR_8, "%s", VAR_9);
   FUNC_2(0);
  }

 VAR_10 -= VAR_7;
 VAR_11 += VAR_7;

 VAR_13 = FUNC_10();
 VAR_13 |= VAR_0;
 FUNC_15(VAR_13);

 VAR_14 = FUNC_5(sizeof(VAR_14[0]) * VAR_10);
 if (VAR_14 == ((void*)0))
  FUNC_1(1, ((void*)0));

 for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
  if ((VAR_15 = FUNC_14(VAR_11[VAR_12])) == ((void*)0))
   FUNC_1(1, "%s: cannot load", VAR_11[VAR_12]);
  VAR_14[VAR_12] = FUNC_11(VAR_15);
 }
 VAR_18 = 0;
 VAR_17 = ((void*)0);
 for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
  if (VAR_14[VAR_12] == ((void*)0))
   continue;
  VAR_16 = FUNC_9(VAR_14[VAR_12], VAR_1);
  if (VAR_16 == ((void*)0))
   continue;
  for (;;) {
   if (VAR_3 == 0) {
    VAR_18 = FUNC_6(VAR_16, VAR_18, &VAR_17);
    FUNC_7(VAR_16, VAR_18);
    VAR_17 = VAR_16;
   } else
    FUNC_8(VAR_16);

   if (VAR_5 == ((void*)0) ||
       (VAR_16 = FUNC_12(VAR_5, VAR_1))
       == ((void*)0))
    break;
  }
 }
 if (VAR_17 != ((void*)0) && VAR_3 == 0)
  VAR_18 = FUNC_0(VAR_17->oidlen - 1, VAR_18 - 1);
 else if (VAR_3 != 0)
  FUNC_17();

 return (0);
}
