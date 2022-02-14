
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(void)
{
 FUNC_1("Usage:	local-unbound-checkconf [file]\n");
 FUNC_1("	Checks unbound configuration file for errors.\n");
 FUNC_1("file	if omitted %s is used.\n", VAR_0);
 FUNC_1("-o option	print value of option to stdout.\n");
 FUNC_1("-f 		output full pathname with chroot applied, eg. with -o pidfile.\n");
 FUNC_1("-h		show this usage help.\n");
 FUNC_1("Version %s\n", VAR_2);
 FUNC_1("BSD licensed, see LICENSE in source package for details.\n");
 FUNC_1("Report bugs to %s\n", VAR_1);
 FUNC_0(1);
}
