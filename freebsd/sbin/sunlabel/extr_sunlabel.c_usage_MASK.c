
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*,char*,char*,char*,char*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(void)
{

 FUNC_1(VAR_1, "usage:"
"\t%s [-r] [-c | -h] disk\n"
"\t\t(to read label)\n"
"\t%s -B [-b boot1] [-n] disk\n"
"\t\t(to install boot program only)\n"
"\t%s -R [-B [-b boot1]] [-r] [-n] [-c] disk protofile\n"
"\t\t(to restore label)\n"
"\t%s -e [-B [-b boot1]] [-r] [-n] [-c] disk\n"
"\t\t(to edit label)\n"
"\t%s -w [-B [-b boot1]] [-r] [-n] disk type\n"
"\t\t(to write default label)\n",
      VAR_0,
      VAR_0,
      VAR_0,
      VAR_0,
      VAR_0);
 FUNC_0(1);
}
