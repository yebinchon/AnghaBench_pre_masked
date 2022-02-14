
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(const char *VAR_2)
{
 FUNC_1(VAR_1, "%s\n", VAR_2);
 FUNC_1(VAR_1, "Usage: auditreduce [options] [file ...]\n");
 FUNC_1(VAR_1, "\tOptions are : \n");
 FUNC_1(VAR_1, "\t-A : all records\n");
 FUNC_1(VAR_1, "\t-a YYYYMMDD[HH[[MM[SS]]] : after date\n");
 FUNC_1(VAR_1, "\t-b YYYYMMDD[HH[[MM[SS]]] : before date\n");
 FUNC_1(VAR_1, "\t-c <flags> : matching class\n");
 FUNC_1(VAR_1, "\t-d YYYYMMDD : on date\n");
 FUNC_1(VAR_1, "\t-e <uid|name>  : effective user\n");
 FUNC_1(VAR_1, "\t-f <gid|group> : effective group\n");
 FUNC_1(VAR_1, "\t-g <gid|group> : real group\n");
 FUNC_1(VAR_1, "\t-j <pid> : subject id \n");
 FUNC_1(VAR_1, "\t-m <evno|evname> : matching event\n");
 FUNC_1(VAR_1, "\t-o objecttype=objectvalue\n");
 FUNC_1(VAR_1, "\t\t file=<pathname>\n");
 FUNC_1(VAR_1, "\t\t msgqid=<ID>\n");
 FUNC_1(VAR_1, "\t\t pid=<ID>\n");
 FUNC_1(VAR_1, "\t\t semid=<ID>\n");
 FUNC_1(VAR_1, "\t\t shmid=<ID>\n");
 FUNC_1(VAR_1, "\t-r <uid|name> : real user\n");
 FUNC_1(VAR_1, "\t-u <uid|name> : audit user\n");
 FUNC_1(VAR_1, "\t-v : select non-matching records\n");
 FUNC_0(VAR_0);
}
