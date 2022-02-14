
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(const char *VAR_0)
{
 FUNC_1("%s -s [-vVd] [-S size] [-C count] [-a addr] [-p port]\n",
        FUNC_0(VAR_0));
 FUNC_1("%s -c [-vVd] [-S size] [-C count] [-I addr] -a addr [-p port]\n",
        FUNC_0(VAR_0));
 FUNC_1("\t-c\t\tclient side\n");
 FUNC_1("\t-I\t\tSource address to bind to for client.\n");
 FUNC_1("\t-s\t\tserver side.  To bind to any address with IPv6 use -a ::0\n");
 FUNC_1("\t-v\t\tdisplay ping data to stdout\n");
 FUNC_1("\t-V\t\tvalidate ping data\n");
 FUNC_1("\t-d\t\tdebug printfs\n");
 FUNC_1("\t-S size \tping data size\n");
 FUNC_1("\t-C count\tping count times\n");
 FUNC_1("\t-a addr\t\taddress\n");
 FUNC_1("\t-p port\t\tport\n");
 FUNC_1("\t-P\t\tpersistent server mode allowing multiple connections\n");
}
