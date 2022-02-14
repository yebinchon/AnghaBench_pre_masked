
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2()
{
 FUNC_1(VAR_0,
  "usage: bootpgw [-a] [-i | -s] [-d level] [-h count] [-t timeout]\n"
  "               [-w time] server\n");
 FUNC_1(VAR_0, "\t -a\tdon't modify ARP table\n");
 FUNC_1(VAR_0, "\t -d n\tset debug level\n");
 FUNC_1(VAR_0, "\t -h n\tset max hop count\n");
 FUNC_1(VAR_0, "\t -i\tforce inetd mode (run as child of inetd)\n");
 FUNC_1(VAR_0, "\t -s\tforce standalone mode (run without inetd)\n");
 FUNC_1(VAR_0, "\t -t n\tset inetd exit timeout to n minutes\n");
 FUNC_1(VAR_0, "\t -w n\tset min wait time (secs)\n");
 FUNC_0(1);
}
