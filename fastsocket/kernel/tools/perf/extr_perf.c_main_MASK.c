
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,char const*) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,char const*,char const*) ;
 int FUNC_5 (int,char const**) ;
 int FUNC_6 (char const***,int*,int *) ;
 char* FUNC_7 (char const*) ;
 int FUNC_8 () ;
 int VAR_3 ;
 char* FUNC_9 (char const*) ;
 char* VAR_4 ;
 char* VAR_5 ;
 int FUNC_10 (char const*,char*) ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 () ;
 int FUNC_13 (int*,char const***) ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int VAR_6 ;
 char* FUNC_16 (scalar_t__) ;
 int FUNC_17 (int ) ;
 int FUNC_18 () ;

int FUNC_19(int VAR_7, const char **VAR_8)
{
 const char *VAR_9;

 VAR_3 = FUNC_17(VAR_1);

 VAR_9 = FUNC_9(VAR_8[0]);
 if (!VAR_9)
  VAR_9 = "perf-help";

 FUNC_1(((void*)0));
 if (!FUNC_10(VAR_9, "perf-")) {
  VAR_9 += 5;
  VAR_8[0] = VAR_9;
  FUNC_5(VAR_7, VAR_8);
  FUNC_2("cannot handle %s internally", VAR_9);
 }


 VAR_8++;
 VAR_7--;
 FUNC_6(&VAR_8, &VAR_7, ((void*)0));
 FUNC_0();
 FUNC_14();

 if (VAR_7 > 0) {
  if (!FUNC_10(VAR_8[0], "--"))
   VAR_8[0] += 2;
 } else {

  FUNC_11("\n usage: %s\n\n", VAR_5);
  FUNC_8();
  FUNC_11("\n %s\n\n", VAR_4);
  FUNC_3(1);
 }
 VAR_9 = VAR_8[0];



 FUNC_18();
 FUNC_15();





 FUNC_12();

 while (1) {
  static int VAR_10;
  static int VAR_11;

  VAR_11 = FUNC_13(&VAR_7, &VAR_8);
  if (VAR_2 != VAR_0)
   break;

  if (VAR_11) {
   FUNC_4(VAR_6, "Expansion of alias '%s' failed; "
    "'%s' is not a perf-command\n",
    VAR_9, VAR_8[0]);
   FUNC_3(1);
  }
  if (!VAR_10) {
   VAR_9 = VAR_8[0] = FUNC_7(VAR_9);
   VAR_10 = 1;
  } else
   break;
 }

 FUNC_4(VAR_6, "Failed to run command '%s': %s\n",
  VAR_9, FUNC_16(VAR_2));

 return 1;
}
