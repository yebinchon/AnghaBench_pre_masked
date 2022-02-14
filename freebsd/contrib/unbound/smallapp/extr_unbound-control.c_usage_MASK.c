
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
 FUNC_1("Usage:	local-unbound-control [options] command\n");
 FUNC_1("	Remote control utility for unbound server.\n");
 FUNC_1("Options:\n");
 FUNC_1("  -c file	config file, default is %s\n", VAR_0);
 FUNC_1("  -s ip[@port]	server address, if omitted config is used.\n");
 FUNC_1("  -q		quiet (don't print anything if it works ok).\n");
 FUNC_1("  -h		show this usage help.\n");
 FUNC_1("Commands:\n");
 FUNC_1("  start				start server; runs unbound(8)\n");
 FUNC_1("  stop				stops the server\n");
 FUNC_1("  reload			reloads the server\n");
 FUNC_1("  				(this flushes data, stats, requestlist)\n");
 FUNC_1("  stats				print statistics\n");
 FUNC_1("  stats_noreset			peek at statistics\n");



 FUNC_1("  status			display status of server\n");
 FUNC_1("  verbosity <number>		change logging detail\n");
 FUNC_1("  log_reopen			close and open the logfile\n");
 FUNC_1("  local_zone <name> <type>	add new local zone\n");
 FUNC_1("  local_zone_remove <name>	remove local zone and its contents\n");
 FUNC_1("  local_data <RR data...>	add local data, for example\n");
 FUNC_1("				local_data www.example.com A 192.0.2.1\n");
 FUNC_1("  local_data_remove <name>	remove local RR data from name\n");
 FUNC_1("  local_zones, local_zones_remove, local_datas, local_datas_remove\n");
 FUNC_1("  				same, but read list from stdin\n");
 FUNC_1("  				(one entry per line).\n");
 FUNC_1("  dump_cache			print cache to stdout\n");
 FUNC_1("  load_cache			load cache from stdin\n");
 FUNC_1("  lookup <name>			print nameservers for name\n");
 FUNC_1("  flush <name>			flushes common types for name from cache\n");
 FUNC_1("  				types:  A, AAAA, MX, PTR, NS,\n");
 FUNC_1("					SOA, CNAME, DNAME, SRV, NAPTR\n");
 FUNC_1("  flush_type <name> <type>	flush name, type from cache\n");
 FUNC_1("  flush_zone <name>		flush everything at or under name\n");
 FUNC_1("  				from rr and dnssec caches\n");
 FUNC_1("  flush_bogus			flush all bogus data\n");
 FUNC_1("  flush_negative		flush all negative data\n");
 FUNC_1("  flush_stats 			flush statistics, make zero\n");
 FUNC_1("  flush_requestlist 		drop queries that are worked on\n");
 FUNC_1("  dump_requestlist		show what is worked on by first thread\n");
 FUNC_1("  flush_infra [all | ip] 	remove ping, edns for one IP or all\n");
 FUNC_1("  dump_infra			show ping and edns entries\n");
 FUNC_1("  set_option opt: val		set option to value, no reload\n");
 FUNC_1("  get_option opt		get option value\n");
 FUNC_1("  list_stubs			list stub-zones and root hints in use\n");
 FUNC_1("  list_forwards			list forward-zones in use\n");
 FUNC_1("  list_insecure			list domain-insecure zones\n");
 FUNC_1("  list_local_zones		list local-zones in use\n");
 FUNC_1("  list_local_data		list local-data RRs in use\n");
 FUNC_1("  insecure_add zone 		add domain-insecure zone\n");
 FUNC_1("  insecure_remove zone		remove domain-insecure zone\n");
 FUNC_1("  forward_add [+i] zone addr..	add forward-zone with servers\n");
 FUNC_1("  forward_remove [+i] zone	remove forward zone\n");
 FUNC_1("  stub_add [+ip] zone addr..	add stub-zone with servers\n");
 FUNC_1("  stub_remove [+i] zone		remove stub zone\n");
 FUNC_1("		+i		also do dnssec insecure point\n");
 FUNC_1("		+p		set stub to use priming\n");
 FUNC_1("  forward [off | addr ...]	without arg show forward setup\n");
 FUNC_1("				or off to turn off root forwarding\n");
 FUNC_1("				or give list of ip addresses\n");
 FUNC_1("  ratelimit_list [+a]		list ratelimited domains\n");
 FUNC_1("  ip_ratelimit_list [+a]	list ratelimited ip addresses\n");
 FUNC_1("		+a		list all, also not ratelimited\n");
 FUNC_1("  list_auth_zones		list auth zones\n");
 FUNC_1("  auth_zone_reload zone		reload auth zone from zonefile\n");
 FUNC_1("  auth_zone_transfer zone	transfer auth zone from master\n");
 FUNC_1("  view_list_local_zones	view	list local-zones in view\n");
 FUNC_1("  view_list_local_data	view	list local-data RRs in view\n");
 FUNC_1("  view_local_zone view name type  	add local-zone in view\n");
 FUNC_1("  view_local_zone_remove view name  	remove local-zone in view\n");
 FUNC_1("  view_local_data view RR...		add local-data in view\n");
 FUNC_1("  view_local_datas view 		add list of local-data to view\n");
 FUNC_1("  					one entry per line read from stdin\n");
 FUNC_1("  view_local_data_remove view name  	remove local-data in view\n");
 FUNC_1("Version %s\n", VAR_2);
 FUNC_1("BSD licensed, see LICENSE in source package for details.\n");
 FUNC_1("Report bugs to %s\n", VAR_1);
 FUNC_0(1);
}
