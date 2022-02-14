
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_4__ {int * tqe_prev; } ;
struct cuse_client_command {int cv; TYPE_2__ entry; } ;
struct cuse_client {TYPE_1__* server; struct cuse_client_command* cmds; int * server_dev; int cflags; } ;
struct TYPE_3__ {int head; } ;


 scalar_t__ FUNC_0 (struct cuse_client*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (int *,struct cuse_client_command*,int ) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(struct cuse_client *VAR_3)
{
 struct cuse_client_command *VAR_4;
 uint32_t VAR_5;

 if (FUNC_0(VAR_3))
  return;

 VAR_3->cflags |= VAR_0;
 VAR_3->server_dev = ((void*)0);

 for (VAR_5 = 0; VAR_5 != VAR_1; VAR_5++) {

  VAR_4 = &VAR_3->cmds[VAR_5];

  if (VAR_4->entry.tqe_prev != ((void*)0)) {
   FUNC_1(&VAR_3->server->head, VAR_4, VAR_2);
   VAR_4->entry.tqe_prev = ((void*)0);
  }
  FUNC_2(&VAR_4->cv);
 }
}
