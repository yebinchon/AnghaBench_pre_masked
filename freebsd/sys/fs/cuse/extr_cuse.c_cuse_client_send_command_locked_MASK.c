
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct cuse_server {scalar_t__ is_closing; int cv; int head; } ;
struct TYPE_5__ {int * tqe_prev; } ;
struct TYPE_4__ {unsigned long fflags; uintptr_t data_pointer; unsigned long argument; } ;
struct cuse_client_command {TYPE_3__* client; TYPE_2__ entry; TYPE_1__ sub; } ;
struct TYPE_6__ {struct cuse_server* server; } ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_7 ;
 int FUNC_2 (int *,struct cuse_client_command*,int ) ;
 int FUNC_3 (int *) ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_4(struct cuse_client_command *VAR_9,
    uintptr_t VAR_10, unsigned long VAR_11, int VAR_12, int VAR_13)
{
 unsigned long VAR_14 = 0;
 struct cuse_server *VAR_15;

 if (VAR_12 & VAR_4)
  VAR_14 |= VAR_2;

 if (VAR_12 & VAR_5)
  VAR_14 |= VAR_3;

 if (VAR_13 & VAR_6)
  VAR_14 |= VAR_1;

 if (FUNC_1(VAR_7))
  VAR_14 |= VAR_0;

 VAR_9->sub.fflags = VAR_14;
 VAR_9->sub.data_pointer = VAR_10;
 VAR_9->sub.argument = VAR_11;

 VAR_15 = VAR_9->client->server;

 if ((VAR_9->entry.tqe_prev == ((void*)0)) &&
     (FUNC_0(VAR_9->client) == 0) &&
     (VAR_15->is_closing == 0)) {
  FUNC_2(&VAR_15->head, VAR_9, VAR_8);
  FUNC_3(&VAR_15->cv);
 }
}
