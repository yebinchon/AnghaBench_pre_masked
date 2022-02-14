
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,int) ;
 scalar_t__ VAR_4 ;
 int * FUNC_4 (int,char*,int,char*,int) ;

__attribute__((used)) static void
FUNC_5(int VAR_5, int VAR_6)
{
 FILE *VAR_7;

 if ((VAR_7 = FUNC_4(VAR_5, "bounds", VAR_3 | VAR_1 | VAR_2,
     "w", 0644)) == ((void*)0)) {
  FUNC_2(VAR_0, "unable to write to bounds file: %m");
  return;
 }

 if (VAR_4)
  FUNC_3("bounds number: %d\n", VAR_6);

 FUNC_1(VAR_7, "%d\n", VAR_6);
 FUNC_0(VAR_7);
}
