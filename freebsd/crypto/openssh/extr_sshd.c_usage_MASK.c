
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* version_addendum; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_2(void)
{
 if (VAR_2.version_addendum && *VAR_2.version_addendum != '\0')
  FUNC_1(VAR_3, "%s %s, %s\n",
      VAR_1,
      VAR_2.version_addendum, VAR_0);
 else
  FUNC_1(VAR_3, "%s, %s\n",
      VAR_1, VAR_0);
 FUNC_1(VAR_3,
"usage: sshd [-46DdeiqTt] [-C connection_spec] [-c host_cert_file]\n"
"            [-E log_file] [-f config_file] [-g login_grace_time]\n"
"            [-h host_key_file] [-o option] [-p port] [-u len]\n"
 );
 FUNC_0(1);
}
