
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sa_family; } ;
struct TYPE_4__ {TYPE_1__ sa; } ;
struct logininfo {char* progname; int type; int pid; int uid; char* line; char* username; char* hostname; int exit; int termination; int tv_sec; int tv_usec; TYPE_2__ hostaddr; } ;


 int FUNC_0 (char*,char*,char*,int,int,int,char*,char*,char*,int,int,int,int,int) ;

void
FUNC_1(struct logininfo *VAR_0, char *VAR_1)
{

 FUNC_0("struct logininfo %s = {\n\t"
        "progname\t'%s'\n\ttype\t\t%d\n\t"
        "pid\t\t%d\n\tuid\t\t%d\n\t"
        "line\t\t'%s'\n\tusername\t'%s'\n\t"
        "hostname\t'%s'\n\texit\t\t%d\n\ttermination\t%d\n\t"
        "tv_sec\t%d\n\ttv_usec\t%d\n\t"
        "struct login_netinfo hostaddr {\n\t\t"
        "struct sockaddr sa {\n"
        "\t\t\tfamily\t%d\n\t\t}\n"
        "\t}\n"
        "}\n",
        VAR_1, VAR_0->progname, VAR_0->type,
        VAR_0->pid, VAR_0->uid, VAR_0->line,
        VAR_0->username, VAR_0->hostname, VAR_0->exit,
        VAR_0->termination, VAR_0->tv_sec, VAR_0->tv_usec,
        VAR_0->hostaddr.sa.sa_family);
}
