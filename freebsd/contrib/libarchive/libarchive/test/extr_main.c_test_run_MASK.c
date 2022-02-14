
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int workdir ;
struct TYPE_2__ {char* name; int failures; int (* func ) () ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;


 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (char*,char*) ;
 int FUNC_7 (int *,char*,char const*) ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_8 (char*,int,char*) ;
 int FUNC_9 (int ,char*) ;
 int VAR_4 ;
 int FUNC_10 (char*,int,char*,char const*,char*) ;
 int FUNC_11 (char*,char*,char*) ;
 int * VAR_5 ;
 int VAR_6 ;
 int FUNC_12 () ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 (int,int) ;
 TYPE_1__* VAR_7 ;
 char* VAR_8 ;
 int FUNC_15 (int) ;
 int VAR_9 ;

__attribute__((used)) static int
FUNC_16(int VAR_10, const char *VAR_11)
{
 char VAR_12[1024];
 char VAR_13[64];
 int VAR_14 = VAR_1;
 int VAR_15 = VAR_4;
 int VAR_16;

 switch (VAR_9) {
 case 128:
  break;
 case 129:
  FUNC_8("%3d: %-64s", VAR_10, VAR_7[VAR_10].name);
  FUNC_5(VAR_6);
  break;
 default:
  FUNC_8("%3d: %s\n", VAR_10, VAR_7[VAR_10].name);
 }


 if (!FUNC_1(VAR_11)) {
  FUNC_7(VAR_5,
      "ERROR: Can't chdir to top work dir %s\n", VAR_11);
  FUNC_3(1);
 }

 FUNC_11(VAR_13, "%s.log", VAR_7[VAR_10].name);
 VAR_3 = FUNC_6(VAR_13, "w");
 FUNC_7(VAR_3, "%s\n\n", VAR_7[VAR_10].name);

 FUNC_10(VAR_12, sizeof(VAR_12), "%s/%s", VAR_11, VAR_7[VAR_10].name);
 VAR_8 = VAR_12;
 if (!FUNC_2(VAR_8, 0755)
     || !FUNC_1(VAR_8)) {
  FUNC_7(VAR_5,
      "ERROR: Can't chdir to work dir %s\n", VAR_8);
  FUNC_3(1);
 }

 FUNC_9(VAR_0, "C");

 FUNC_15(VAR_16 = FUNC_15(0));



 (*VAR_7[VAR_10].func)();



 VAR_8 = ((void*)0);

 FUNC_15(VAR_16);

 FUNC_9(VAR_0, "C");

 if (!FUNC_1(VAR_11)) {
  FUNC_7(VAR_5, "ERROR: Couldn't chdir to temp dir %s\n",
      VAR_11);
  FUNC_3(1);
 }

 VAR_7[VAR_10].failures = VAR_1 - VAR_14;
 FUNC_14(VAR_7[VAR_10].failures, VAR_4 - VAR_15);

 FUNC_4(VAR_3);
 VAR_3 = ((void*)0);

 if (VAR_7[VAR_10].failures == 0) {
  if (!VAR_2 && FUNC_1(VAR_11)) {
   FUNC_13("rm -rf %s", VAR_7[VAR_10].name);
   FUNC_13("rm %s", VAR_13);

  }
 }

 return (VAR_7[VAR_10].failures);
}
