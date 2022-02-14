
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cuse_server {int hcli; } ;
struct cuse_client_command {int cv; int sx; } ;
struct cuse_client {struct cuse_server* server; struct cuse_client_command* cmds; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct cuse_client*,int ) ;
 int FUNC_1 (struct cuse_client*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct cuse_server*) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 int FUNC_6 (struct cuse_client*,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(void *VAR_3)
{
 struct cuse_client *VAR_4 = VAR_3;
 struct cuse_client_command *VAR_5;
 struct cuse_server *VAR_6;
 int VAR_7;

 FUNC_2();
 FUNC_1(VAR_4);
 FUNC_0(&VAR_4->server->hcli, VAR_4, VAR_2);
 FUNC_4();

 for (VAR_7 = 0; VAR_7 != VAR_0; VAR_7++) {

  VAR_5 = &VAR_4->cmds[VAR_7];

  FUNC_7(&VAR_5->sx);
  FUNC_5(&VAR_5->cv);
 }

 VAR_6 = VAR_4->server;

 FUNC_6(VAR_4, VAR_1);


 FUNC_3(VAR_6);
}
