
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int FILE ;


 int FUNC_0 (int,char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int *) ;

void
FUNC_7(u_long VAR_2)
{
 FILE *VAR_3;
 u_long VAR_4;

 VAR_3 = FUNC_3(VAR_0, "w");
 if (VAR_3 == ((void*)0)) {
  FUNC_1("could not open %s for writing: %s",
      VAR_0, FUNC_5(VAR_1));
  return;
 }

 FUNC_6(&VAR_4, ((void*)0));

 FUNC_0(FUNC_4(VAR_3, "%lu", VAR_4) > 0,
     "saving %s failed", VAR_0);

 FUNC_2(VAR_3);

 FUNC_6(((void*)0), &VAR_2);
}
