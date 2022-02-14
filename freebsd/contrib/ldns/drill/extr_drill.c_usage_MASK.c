
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 char* VAR_0 ;
 int FUNC_0 (int *,char*,...) ;

__attribute__((used)) static void
FUNC_1(FILE *VAR_1, const char *VAR_2)
{
 FUNC_0(VAR_1, "  Usage: %s name [@server] [type] [class]\n", VAR_2);
 FUNC_0(VAR_1, "\t<name>  can be a domain name or an IP address (-x lookups)\n");
 FUNC_0(VAR_1, "\t<type>  defaults to A\n");
 FUNC_0(VAR_1, "\t<class> defaults to IN\n");
 FUNC_0(VAR_1, "\n\targuments may be placed in random order\n");
 FUNC_0(VAR_1, "\n  Options:\n");
 FUNC_0(VAR_1, "\t-D\t\tenable DNSSEC (DO bit)\n");




 FUNC_0(VAR_1, "\t-I <address>\tsource address to query from\n");
 FUNC_0(VAR_1, "\t-V <number>\tverbosity (0-5)\n");
 FUNC_0(VAR_1, "\t-Q\t\tquiet mode (overrules -V)\n");
 FUNC_0(VAR_1, "\n");
 FUNC_0(VAR_1, "\t-f file\t\tread packet from file and send it\n");
 FUNC_0(VAR_1, "\t-i file\t\tread packet from file and print it\n");
 FUNC_0(VAR_1, "\t-w file\t\twrite answer packet to file\n");
 FUNC_0(VAR_1, "\t-q file\t\twrite query packet to file\n");
 FUNC_0(VAR_1, "\t-h\t\tshow this help\n");
 FUNC_0(VAR_1, "\t-v\t\tshow version\n");
 FUNC_0(VAR_1, "\n  Query options:\n");
 FUNC_0(VAR_1, "\t-4\t\tstay on ip4\n");
 FUNC_0(VAR_1, "\t-6\t\tstay on ip6\n");
 FUNC_0(VAR_1, "\t-a\t\tfallback to EDNS0 and TCP if the answer is truncated\n");
 FUNC_0(VAR_1, "\t-b <bufsize>\tuse <bufsize> as the buffer size (defaults to 512 b)\n");
 FUNC_0(VAR_1, "\t-c <file>\tuse file for rescursive nameserver configuration"
   "\n\t\t\t(/etc/resolv.conf)\n");
 FUNC_0(VAR_1, "\t-k <file>\tspecify a file that contains a trusted DNSSEC key [**]\n");
 FUNC_0(VAR_1, "\t\t\tUsed to verify any signatures in the current answer.\n");
 FUNC_0(VAR_1, "\t\t\tWhen DNSSEC enabled tracing (-TD) or signature\n"
   "\t\t\tchasing (-S) and no key files are given, keys are read\n"
   "\t\t\tfrom: %s\n",
   VAR_0);
 FUNC_0(VAR_1, "\t-o <mnemonic>\tset flags to:"
   "\n\t\t\t[QR|qr][AA|aa][TC|tc][RD|rd][CD|cd][RA|ra][AD|ad]\n");
 FUNC_0(VAR_1, "\t\t\tlowercase: unset bit, uppercase: set bit\n");
 FUNC_0(VAR_1, "\t-p <port>\tuse <port> as remote port number\n");
 FUNC_0(VAR_1, "\t-s\t\tshow the DS RR for each key in a packet\n");
 FUNC_0(VAR_1, "\t-u\t\tsend the query with udp (the default)\n");
 FUNC_0(VAR_1, "\t-x\t\tdo a reverse lookup\n");
 FUNC_0(VAR_1, "\twhen doing a secure trace:\n");
 FUNC_0(VAR_1, "\t-r <file>\tuse file as root servers hint file\n");
 FUNC_0(VAR_1, "\t-t\t\tsend the query with tcp (connected)\n");
 FUNC_0(VAR_1, "\t-d <domain>\tuse domain as the start point for the trace\n");
    FUNC_0(VAR_1, "\t-y <name:key[:algo]>\tspecify named base64 tsig key, and optional an\n\t\t\talgorithm (defaults to hmac-md5.sig-alg.reg.int)\n");
 FUNC_0(VAR_1, "\t-z\t\tdon't randomize the nameservers before use\n");
 FUNC_0(VAR_1, "\n  [*] = enables/implies DNSSEC\n");
 FUNC_0(VAR_1, "  [**] = can be given more than once\n");
 FUNC_0(VAR_1, "\n  ldns-team@nlnetlabs.nl | http://www.nlnetlabs.nl/ldns/\n");
}
