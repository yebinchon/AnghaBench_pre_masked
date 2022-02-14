
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int (*) ()) ;
 int FUNC_1 () ;
 int * VAR_5 ;
 char* VAR_6 ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int,char*) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (char*,char*) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (char*) ;
 int FUNC_10 (int ) ;
 char* FUNC_11 (scalar_t__) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (char*,char*,char const*,char*) ;
 int * VAR_7 ;
 scalar_t__ FUNC_16 (char const*) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (char*) ;

__attribute__((used)) static void
FUNC_19(void)
{
 const char *VAR_8;
 char *VAR_9;
 int VAR_10;
 int VAR_11;

 if (!FUNC_10(FUNC_6(VAR_7))) {

  FUNC_13(VAR_7);
  return;
 }


 if ((VAR_8 = FUNC_9("EDITOR")) == ((void*)0))
  VAR_8 = VAR_0;


 if ((VAR_10 = FUNC_12(VAR_6)) == -1)
  FUNC_3(VAR_1, "mkstemp failed");

 FUNC_0(FUNC_1);

 if ((VAR_5 = FUNC_5(VAR_10, "w")) == ((void*)0))
  FUNC_2(VAR_2, "%s", VAR_6);

 VAR_11 = FUNC_14(VAR_5, 1);

 FUNC_4(VAR_5);
 VAR_5 = ((void*)0);

 if (VAR_11 == 0) {
  FUNC_18("no editable entries");
  FUNC_1();
  return;
 }






 VAR_9 = FUNC_11(FUNC_16(VAR_8) + FUNC_16(VAR_6) + 2);
 if (VAR_9 == ((void*)0))
  FUNC_2(VAR_3, ((void*)0));
 FUNC_15(VAR_9, "%s %s", VAR_8, VAR_6);


 if (FUNC_17(VAR_9) == -1)
  FUNC_2(VAR_4, "could not invoke %s", VAR_8);
 FUNC_8(VAR_9);

 if ((VAR_5 = FUNC_7(VAR_6, "r")) == ((void*)0))
  FUNC_2(VAR_2, "%s", VAR_6);


 FUNC_13(VAR_5);

 FUNC_1();
}
