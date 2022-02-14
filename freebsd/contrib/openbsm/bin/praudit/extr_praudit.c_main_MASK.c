
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int VAR_6 ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (char*,char*) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int,char**,char*) ;
 int FUNC_11 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int) ;
 int * VAR_13 ;
 int VAR_14 ;
 int FUNC_16 () ;
 scalar_t__ FUNC_17 (scalar_t__,int *,int ) ;

int
FUNC_18(int VAR_15, char **VAR_16)
{
 int VAR_17;
 int VAR_18;




 FILE *VAR_19;

 while ((VAR_17 = FUNC_10(VAR_15, VAR_16, "d:lnprsx")) != -1) {
  switch(VAR_17) {
  case 'd':
   VAR_6 = VAR_10;
   break;

  case 'l':
   VAR_9 = 1;
   break;

  case 'n':
   VAR_8 |= VAR_0;
   break;

  case 'p':
   VAR_12 = 1;
   break;

  case 'r':
   if (VAR_8 & VAR_2)
    FUNC_16();
   VAR_8 |= VAR_1;
   break;

  case 's':
   if (VAR_8 & VAR_1)
    FUNC_16();
   VAR_8 |= VAR_2;
   break;

  case 'x':
   VAR_8 |= VAR_3;
   break;

  case '?':
  default:
   FUNC_16();
  }
 }
 if (VAR_8 & VAR_3)
  FUNC_1(VAR_14);


 if (VAR_11 == VAR_15) {





  FUNC_13(VAR_13);
  return (1);
 }
 for (VAR_18 = VAR_11; VAR_18 < VAR_15; VAR_18++) {
  VAR_19 = FUNC_6(VAR_16[VAR_18], "r");
  if (VAR_19 == ((void*)0)) {
   FUNC_12(VAR_16[VAR_18]);
   continue;
  }
  if (FUNC_13(VAR_19) == -1)
   FUNC_12(VAR_16[VAR_18]);

  FUNC_5(VAR_19);
 }

 if (VAR_8 & VAR_3)
  FUNC_0(VAR_14);

 return (0);
}
