
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(void)
{
 FUNC_1(VAR_0,
"ipfw syntax summary (but please do read the ipfw(8) manpage):\n\n"
"\tipfw [-abcdefhnNqStTv] <command>\n\n"
"where <command> is one of the following:\n\n"
"add [num] [set N] [prob x] RULE-BODY\n"
"{pipe|queue} N config PIPE-BODY\n"
"[pipe|queue] {zero|delete|show} [N{,N}]\n"
"nat N config {ip IPADDR|if IFNAME|log|deny_in|same_ports|unreg_only|reset|\n"
"		reverse|proxy_only|redirect_addr linkspec|\n"
"		redirect_port linkspec|redirect_proto linkspec}\n"
"set [disable N... enable N...] | move [rule] X to Y | swap X Y | show\n"
"set N {show|list|zero|resetlog|delete} [N{,N}] | flush\n"
"table N {add ip[/bits] [value] | delete ip[/bits] | flush | list}\n"
"table all {flush | list}\n"
"\n"
"RULE-BODY:	check-state [PARAMS] | ACTION [PARAMS] ADDR [OPTION_LIST]\n"
"ACTION:	check-state | allow | count | deny | unreach{,6} CODE |\n"
"               skipto N | {divert|tee} PORT | forward ADDR |\n"
"               pipe N | queue N | nat N | setfib FIB | reass\n"
"PARAMS: 	[log [logamount LOGLIMIT]] [altq QUEUE_NAME]\n"
"ADDR:		[ MAC dst src ether_type ] \n"
"		[ ip from IPADDR [ PORT ] to IPADDR [ PORTLIST ] ]\n"
"		[ ipv6|ip6 from IP6ADDR [ PORT ] to IP6ADDR [ PORTLIST ] ]\n"
"IPADDR:	[not] { any | me | ip/bits{x,y,z} | table(t[,v]) | IPLIST }\n"
"IP6ADDR:	[not] { any | me | me6 | ip6/bits | IP6LIST }\n"
"IP6LIST:	{ ip6 | ip6/bits }[,IP6LIST]\n"
"IPLIST:	{ ip | ip/bits | ip:mask }[,IPLIST]\n"
"OPTION_LIST:	OPTION [OPTION_LIST]\n"
"OPTION:	bridged | diverted | diverted-loopback | diverted-output |\n"
"	{dst-ip|src-ip} IPADDR | {dst-ip6|src-ip6|dst-ipv6|src-ipv6} IP6ADDR |\n"
"	{dst-port|src-port} LIST |\n"
"	estab | frag | {gid|uid} N | icmptypes LIST | in | out | ipid LIST |\n"
"	iplen LIST | ipoptions SPEC | ipprecedence | ipsec | iptos SPEC |\n"
"	ipttl LIST | ipversion VER | keep-state | layer2 | limit ... |\n"
"	icmp6types LIST | ext6hdr LIST | flow-id N[,N] | fib FIB |\n"
"	mac ... | mac-type LIST | proto LIST | {recv|xmit|via} {IF|IPADDR} |\n"
"	setup | {tcpack|tcpseq|tcpwin} NN | tcpflags SPEC | tcpoptions SPEC |\n"
"	tcpdatalen LIST | verrevpath | versrcreach | antispoof\n"
);

 FUNC_0(0);
}
