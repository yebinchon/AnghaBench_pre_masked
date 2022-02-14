
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
 FUNC_1("Usage:	unbound-host [-C configfile] [-vdhr46] [-c class] [-t type]\n");
 FUNC_1("                     [-y key] [-f keyfile] [-F namedkeyfile] hostname\n");
 FUNC_1("  Queries the DNS for information.\n");
 FUNC_1("  The hostname is looked up for IP4, IP6 and mail.\n");
 FUNC_1("  If an ip-address is given a reverse lookup is done.\n");
 FUNC_1("  Use the -v option to see DNSSEC security information.\n");
 FUNC_1("    -t type		what type to look for.\n");
 FUNC_1("    -c class		what class to look for, if not class IN.\n");
 FUNC_1("    -y 'keystring'	specify trust anchor, DS or DNSKEY, like\n");
 FUNC_1("			-y 'example.com DS 31560 5 1 1CFED8478...'\n");
 FUNC_1("    -D			DNSSEC enable with default root anchor\n");
 FUNC_1("    			from %s\n", VAR_2);
 FUNC_1("    -f keyfile		read trust anchors from file, with lines as -y.\n");
 FUNC_1("    -F keyfile		read named.conf-style trust anchors.\n");
 FUNC_1("    -C config		use the specified unbound.conf (none read by default)\n");
 FUNC_1("			pass as first argument if you want to override some\n");
 FUNC_1("			options with further arguments\n");
 FUNC_1("    -r			read forwarder information from /etc/resolv.conf\n");
 FUNC_1("      			breaks validation if the forwarder does not do DNSSEC.\n");
 FUNC_1("    -v			be more verbose, shows nodata and security.\n");
 FUNC_1("    -d			debug, traces the action, -d -d shows more.\n");
 FUNC_1("    -4			use ipv4 network, avoid ipv6.\n");
 FUNC_1("    -6			use ipv6 network, avoid ipv4.\n");
 FUNC_1("    -h			show this usage help.\n");
 FUNC_1("Version %s\n", VAR_1);
 FUNC_1("BSD licensed, see LICENSE in source package for details.\n");
 FUNC_1("Report bugs to %s\n", VAR_0);
 FUNC_0(1);
}
