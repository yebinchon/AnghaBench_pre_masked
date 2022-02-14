
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int workdir ;
struct TYPE_2__ {char* name; int failures; int (* func ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;


 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (char*,char*) ;
 int FUNC_7 (int *,char*,char const*) ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_8 (char*,int,char*) ;
 int FUNC_9 (int ,char*) ;
 int VAR_5 ;
 int FUNC_10 (char*,int,char*,char const*,char*) ;
 int FUNC_11 (char*,char*,char*) ;
 int * VAR_6 ;
 int VAR_7 ;
 int FUNC_12 () ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 (int,int) ;
 TYPE_1__* VAR_8 ;
 char* VAR_9 ;
 int FUNC_15 (int) ;
 int VAR_10 ;

__attribute__((used)) static int
FUNC_16(int VAR_11, const char *VAR_12)
{



 char VAR_13[1024];

 char VAR_14[64];
 int VAR_15 = VAR_2;
 int VAR_16 = VAR_5;
 int VAR_17;

 switch (VAR_10) {
 case 128:
  break;
 case 129:
  FUNC_8("%3d: %-64s", VAR_11, VAR_8[VAR_11].name);
  FUNC_5(VAR_7);
  break;
 default:
  FUNC_8("%3d: %s\n", VAR_11, VAR_8[VAR_11].name);
 }


 if (!FUNC_1(VAR_12)) {
  FUNC_7(VAR_6,
      "ERROR: Can't chdir to top work dir %s\n", VAR_12);
  FUNC_3(1);
 }

 FUNC_11(VAR_14, "%s.log", VAR_8[VAR_11].name);
 VAR_4 = FUNC_6(VAR_14, "w");
 FUNC_7(VAR_4, "%s\n\n", VAR_8[VAR_11].name);

 FUNC_10(VAR_13, sizeof(VAR_13), "%s/%s", VAR_12, VAR_8[VAR_11].name);
 VAR_9 = VAR_13;
 if (!FUNC_2(VAR_9, 0755)
     || !FUNC_1(VAR_9)) {
  FUNC_7(VAR_6,
      "ERROR: Can't chdir to work dir %s\n", VAR_9);
  FUNC_3(1);
 }

 FUNC_9(VAR_0, "C");

 FUNC_15(VAR_17 = FUNC_15(0));



 (*VAR_8[VAR_11].func)();



 VAR_9 = ((void*)0);

 FUNC_15(VAR_17);

 FUNC_9(VAR_0, "C");

 if (!FUNC_1(VAR_12)) {
  FUNC_7(VAR_6, "ERROR: Couldn't chdir to temp dir %s\n",
      VAR_12);
  FUNC_3(1);
 }

 VAR_8[VAR_11].failures = VAR_2 - VAR_15;
 FUNC_14(VAR_8[VAR_11].failures, VAR_5 - VAR_16);

 FUNC_4(VAR_4);
 VAR_4 = ((void*)0);

 if (VAR_8[VAR_11].failures == 0) {
  if (!VAR_3 && FUNC_1(VAR_12)) {
   FUNC_13("rm -rf %s", VAR_8[VAR_11].name);
   FUNC_13("rm %s", VAR_14);

  }
 }

 return (VAR_8[VAR_11].failures);
}
