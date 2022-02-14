
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*,int,char) ;
 char* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(void) {
    FUNC_1(VAR_1,
    "Usage: %s [-aCdilrsTvw46] [-c class] [-N ndots] [-R number]\n"
    "       %*c [-t type] [-W wait] name [server]\n"
    "\t-a same as -v -t ANY\n"
    "\t-C query SOA records from all authoritative name servers\n"
    "\t-c use this query class (IN, CH, HS, etc)\n"
    "\t-d produce verbose output, same as -v\n"
    "\t-i use IP6.INT for IPv6 reverse lookups\n"
    "\t-l list records in a zone via AXFR\n"
    "\t-N consider names with at least this many dots as absolute\n"
    "\t-R retry UDP queries this many times\n"
    "\t-r disable recursive query\n"
    "\t-s do not ignore SERVFAIL responses\n"
    "\t-T send query via TCP\n"
    "\t-t use this query type (A, AAAA, MX, etc)\n"
    "\t-v produce verbose output\n"
    "\t-w wait forever for a server reply\n"
    "\t-W wait this many seconds for a reply\n"
    "\t-4 use IPv4 only\n"
    "\t-6 use IPv6 only\n",
    VAR_0, (int)FUNC_2(VAR_0), ' ');
    FUNC_0(1);
}
