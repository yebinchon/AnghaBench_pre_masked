
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int) ;
 char* VAR_0 ;
 int VAR_1 ;

void
FUNC_2(void)
{
 extern char VAR_2[];

 FUNC_0(VAR_1, "Version %s\n", VAR_2);
 FUNC_0(VAR_1,
     "Usage: %s [-adDeFInrSvx] [-f first_ttl] [-g gateway] [-i iface]\n"
     "\t[-m max_ttl] [-p port] [-P proto] [-q nqueries] [-s src_addr]\n"
     "\t[-t tos] [-w waittime] [-A as_server] [-z pausemsecs] host [packetlen]\n", VAR_0);
 FUNC_1(1);
}
