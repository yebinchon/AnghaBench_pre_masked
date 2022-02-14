
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 char* FUNC_2 () ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(void)
{
 FUNC_1(VAR_0, "Usage: %s [-v] [-I include-path] [-C check-path] "
     "[-T terminfo-file] [-s pathtoslave] [-t term] "
     "commandfile\n", FUNC_2());
 FUNC_1(VAR_0, " where:\n");
 FUNC_1(VAR_0, "    -v enables verbose test output\n");
 FUNC_1(VAR_0, "    -T is a directory containing the terminfo.cdb "
     "file, or a file holding the terminfo description n");
 FUNC_1(VAR_0, "    -s is the path to the slave executable\n");
 FUNC_1(VAR_0, "    -t is value to set TERM to for the test\n");
 FUNC_1(VAR_0, "    -I is the directory to include files\n");
 FUNC_1(VAR_0, "    -C is the directory for config files\n");
 FUNC_1(VAR_0, "    commandfile is a file of test directives\n");
 FUNC_0(1);
}
