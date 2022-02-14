
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(void)
{
 extern char *VAR_1;

 FUNC_1(VAR_0,
     "usage: %s [-46aCfpqrv] [-B buffer_size] [-b batchfile] [-c cipher]\n"
     "          [-D sftp_server_path] [-F ssh_config] "
     "[-i identity_file] [-l limit]\n"
     "          [-o ssh_option] [-P port] [-R num_requests] "
     "[-S program]\n"
     "          [-s subsystem | sftp_server] destination\n",
     VAR_1);
 FUNC_0(1);
}
