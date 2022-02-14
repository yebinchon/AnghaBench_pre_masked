
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct session {int client_fd; int server_fd; int id; TYPE_1__* server_bufev; TYPE_1__* client_bufev; } ;
struct TYPE_2__ {int output; } ;


 int FUNC_0 (struct session*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (struct session*) ;
 int FUNC_7 (int ,char*,int ,...) ;
 int FUNC_8 (int ) ;
 int VAR_4 ;
 int FUNC_9 (int) ;

void
FUNC_10(struct session *VAR_5)
{
 int VAR_6;

 FUNC_7(VAR_1, "#%d ending session", VAR_5->id);


 if (VAR_5->client_bufev && VAR_5->client_fd != -1)
  FUNC_5(VAR_5->client_bufev->output, VAR_5->client_fd);
 if (VAR_5->server_bufev && VAR_5->server_fd != -1)
  FUNC_5(VAR_5->server_bufev->output, VAR_5->server_fd);

 if (VAR_5->client_fd != -1)
  FUNC_2(VAR_5->client_fd);
 if (VAR_5->server_fd != -1)
  FUNC_2(VAR_5->server_fd);

 if (VAR_5->client_bufev)
  FUNC_1(VAR_5->client_bufev);
 if (VAR_5->server_bufev)
  FUNC_1(VAR_5->server_bufev);


 VAR_6 = 0;
 if (FUNC_8(VAR_5->id) == -1)
  VAR_6 = VAR_3;
 else if (FUNC_3() == -1) {
  VAR_6 = VAR_3;
  FUNC_4();
 }
 if (VAR_6)
  FUNC_7(VAR_0, "#%d pf rule removal failed: %s", VAR_5->id,
      FUNC_9(VAR_6));

 FUNC_0(VAR_5, VAR_2);
 FUNC_6(VAR_5);
 VAR_4--;
}
