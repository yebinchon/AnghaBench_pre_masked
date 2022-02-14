
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_2(void)
{

 FUNC_1(VAR_2, "auditfilterd [-d] [-c conffile] [-p pipefile]"
     " [-t trailfile]\n");
 FUNC_1(VAR_2, "  -c    Specify configuration file (default: %s)\n",
     VAR_0);
 FUNC_1(VAR_2, "  -d    Debugging mode, don't daemonize\n");
 FUNC_1(VAR_2, "  -p    Specify pipe file (default: %s)\n",
     VAR_1);
 FUNC_1(VAR_2, "  -t    Specify audit trail file (default: none)\n");
 FUNC_0(-1);
}
