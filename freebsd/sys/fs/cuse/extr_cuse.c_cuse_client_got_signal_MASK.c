
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cuse_server {scalar_t__ is_closing; int cv; int head; } ;
struct TYPE_3__ {int * tqe_prev; } ;
struct cuse_client_command {int got_signal; TYPE_2__* client; TYPE_1__ entry; } ;
struct TYPE_4__ {struct cuse_server* server; struct cuse_client_command* cmds; } ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 size_t VAR_0 ;
 int FUNC_1 (int *,struct cuse_client_command*,int ) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(struct cuse_client_command *VAR_2)
{
 struct cuse_server *VAR_3;

 VAR_2->got_signal = 1;

 VAR_2 = &VAR_2->client->cmds[VAR_0];

 VAR_3 = VAR_2->client->server;

 if ((VAR_2->entry.tqe_prev == ((void*)0)) &&
     (FUNC_0(VAR_2->client) == 0) &&
     (VAR_3->is_closing == 0)) {
  FUNC_1(&VAR_3->head, VAR_2, VAR_1);
  FUNC_2(&VAR_3->cv);
 }
}
