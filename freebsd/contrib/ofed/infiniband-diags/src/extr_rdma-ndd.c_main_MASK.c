
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibdiag_opt {char* member_0; char member_1; int member_2; char* member_3; char* member_4; } ;
typedef int hostname ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_8 ;
 int FUNC_3 (int ) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_4 (int,char**,int *,char*,struct ibdiag_opt const*,int ,char*,int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char*,int,int ) ;
 int VAR_11 ;
 scalar_t__ FUNC_8 (int,char*,int) ;
 int FUNC_9 () ;
 int FUNC_10 (char const*,int) ;
 int FUNC_11 () ;
 int FUNC_12 (int ,char*,...) ;
 int FUNC_13 () ;

int FUNC_14(int VAR_12, char *VAR_13[])
{
 int VAR_14;
 char VAR_15[128];

 FUNC_7("rdma-ndd", VAR_5 | VAR_4, VAR_1);

 const struct ibdiag_opt VAR_16[] = {
  {"retry_timer", 't', 1, "<retry_timer>",
   "Length of time to sleep when system errors occur "
   "when attempting to poll and or read the hostname "
   "from the system.\n"},
  {"retry_count", 'r', 1, "<retry_count>",
   "Number of times to attempt to retry setting "
   "of the node description on failure\n"},
  {"foreground", 'f', 0, ((void*)0), "run in the foreground instead of as a daemon\n"},
  {"pidfile", 0, 1, "<pidfile>", "specify a pid file (daemon mode only)\n"},
  {0}
 };

 FUNC_4(VAR_12, VAR_13, ((void*)0), "CPDLGtsKyevd", VAR_16,
       VAR_11, "", ((void*)0));

 if (!VAR_10)
  VAR_10 = VAR_0;

 if (!VAR_9) {
  FUNC_1();
  FUNC_7("rdma-ndd", VAR_5, VAR_1);
  if (FUNC_2(0, 0) != 0) {
   FUNC_12(VAR_2, "Failed to daemonize\n");
   FUNC_3(VAR_8);
  }
  FUNC_13();
 }

 FUNC_11();

 FUNC_12(VAR_3, "Node Descriptor format (%s)\n", VAR_10);

 VAR_14 = FUNC_6(VAR_7, VAR_6);
 if (FUNC_8(VAR_14, VAR_15, sizeof(VAR_15)) != 0)
  VAR_15[0] = '\0';
 FUNC_10((const char *)VAR_15, 1);
 FUNC_0(VAR_14);

 FUNC_5();

 FUNC_9();

 return 0;
}
