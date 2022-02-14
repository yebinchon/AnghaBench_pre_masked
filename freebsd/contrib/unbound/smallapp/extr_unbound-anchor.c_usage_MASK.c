
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(void)
{
 FUNC_1("Usage:	local-unbound-anchor [opts]\n");
 FUNC_1("	Setup or update root anchor. "
  "Most options have defaults.\n");
 FUNC_1("	Run this program before you start the validator.\n");
 FUNC_1("\n");
 FUNC_1("	The anchor and cert have default builtin content\n");
 FUNC_1("	if the file does not exist or is empty.\n");
 FUNC_1("\n");
 FUNC_1("-a file		root key file, default %s\n", VAR_4);
 FUNC_1("		The key is input and output for this tool.\n");
 FUNC_1("-c file		cert file, default %s\n", VAR_5);
 FUNC_1("-l		list builtin key and cert on stdout\n");
 FUNC_1("-u name		server in https url, default %s\n", VAR_6);
 FUNC_1("-x path		pathname to xml in url, default %s\n", VAR_7);
 FUNC_1("-s path		pathname to p7s in url, default %s\n", VAR_1);
 FUNC_1("-n name		signer's subject emailAddress, default %s\n", VAR_0);
 FUNC_1("-4		work using IPv4 only\n");
 FUNC_1("-6		work using IPv6 only\n");
 FUNC_1("-f resolv.conf	use given resolv.conf\n");
 FUNC_1("-r root.hints	use given root.hints\n"
  "		builtin root hints are used by default\n");
 FUNC_1("-R		fallback from -f to root query on error\n");
 FUNC_1("-v		more verbose\n");
 FUNC_1("-C conf		debug, read config\n");
 FUNC_1("-P port		use port for https connect, default 443\n");
 FUNC_1("-F 		debug, force update with cert\n");
 FUNC_1("-h		show this usage help\n");
 FUNC_1("Version %s\n", VAR_3);
 FUNC_1("BSD licensed, see LICENSE in source package for details.\n");
 FUNC_1("Report bugs to %s\n", VAR_2);
 FUNC_0(1);
}
