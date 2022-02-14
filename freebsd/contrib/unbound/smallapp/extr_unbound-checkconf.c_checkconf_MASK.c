
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_file {int module_conf; } ;
typedef int oldwd ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct config_file*) ;
 int FUNC_2 (struct config_file*) ;
 int FUNC_3 (struct config_file*) ;
 int FUNC_4 (struct config_file*,int ) ;
 struct config_file* FUNC_5 () ;
 int FUNC_6 (struct config_file*) ;
 int FUNC_7 (struct config_file*,char const*,int *) ;
 int VAR_0 ;
 int FUNC_8 (int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,int) ;
 int FUNC_11 () ;
 int FUNC_12 (char*,char*,...) ;
 int FUNC_13 (struct config_file*) ;
 int FUNC_14 (struct config_file*,char const*,int) ;
 int FUNC_15 (char*,char const*) ;
 int FUNC_16 () ;
 int FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (int ,char*) ;
 int FUNC_19 () ;

__attribute__((used)) static void
FUNC_20(const char* VAR_1, const char* VAR_2, int VAR_3)
{
 char VAR_4[4096];
 struct config_file* VAR_5 = FUNC_5();
 if(!VAR_5)
  FUNC_9("out of memory");
 VAR_4[0] = 0;
 if(!FUNC_10(VAR_4, sizeof(VAR_4))) {
  FUNC_12("cannot getcwd: %s", FUNC_17(VAR_0));
  VAR_4[0] = 0;
 }
 if(!FUNC_7(VAR_5, VAR_1, ((void*)0))) {

  FUNC_6(VAR_5);
  FUNC_8(1);
 }
 if(VAR_4[0] && FUNC_0(VAR_4) == -1)
  FUNC_12("cannot chdir(%s): %s", VAR_4, FUNC_17(VAR_0));
 if(VAR_2) {
  FUNC_14(VAR_5, VAR_2, VAR_3);
  FUNC_6(VAR_5);
  return;
 }
 FUNC_13(VAR_5);
 FUNC_4(VAR_5, FUNC_11());
 FUNC_4(VAR_5, FUNC_19());




 FUNC_2(VAR_5);
 FUNC_3(VAR_5);
 FUNC_1(VAR_5);
 FUNC_15("unbound-checkconf: no errors in %s\n", VAR_1);
 FUNC_6(VAR_5);
}
