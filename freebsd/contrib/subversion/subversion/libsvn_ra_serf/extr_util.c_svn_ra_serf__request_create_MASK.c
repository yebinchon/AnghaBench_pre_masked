
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ version; } ;
struct TYPE_8__ {TYPE_2__* conn; scalar_t__ scheduled; void* discard_body; void* reading_body; int * location; TYPE_1__ sline; int * server_error; void* done; int * handler_pool; } ;
typedef TYPE_3__ svn_ra_serf__handler_t ;
struct TYPE_7__ {int conn; } ;


 void* VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int ,TYPE_3__*) ;
 int VAR_2 ;

void
FUNC_2(svn_ra_serf__handler_t *VAR_3)
{
  FUNC_0(VAR_3->handler_pool != ((void*)0)
                           && !VAR_3->scheduled);


  VAR_3->done = VAR_0;
  VAR_3->server_error = ((void*)0);
  VAR_3->sline.version = 0;
  VAR_3->location = ((void*)0);
  VAR_3->reading_body = VAR_0;
  VAR_3->discard_body = VAR_0;
  VAR_3->scheduled = VAR_1;
  (void) FUNC_1(VAR_3->conn->conn,
                                        VAR_2, VAR_3);
}
