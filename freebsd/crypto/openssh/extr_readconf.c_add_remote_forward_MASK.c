
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct Forward {scalar_t__ allocated_port; int handle; int connect_path; int connect_port; int connect_host; int listen_path; int listen_port; int listen_host; } ;
struct TYPE_3__ {int num_remote_forwards; struct Forward* remote_forwards; } ;
typedef TYPE_1__ Options ;


 scalar_t__ FUNC_0 (struct Forward const*,struct Forward*) ;
 struct Forward* FUNC_1 (struct Forward*,int,int) ;

void
FUNC_2(Options *VAR_0, const struct Forward *VAR_1)
{
 struct Forward *VAR_2;
 int VAR_3;


 for (VAR_3 = 0; VAR_3 < VAR_0->num_remote_forwards; VAR_3++) {
  if (FUNC_0(VAR_1, VAR_0->remote_forwards + VAR_3))
   return;
 }
 VAR_0->remote_forwards = FUNC_1(VAR_0->remote_forwards,
     VAR_0->num_remote_forwards + 1,
     sizeof(*VAR_0->remote_forwards));
 VAR_2 = &VAR_0->remote_forwards[VAR_0->num_remote_forwards++];

 VAR_2->listen_host = VAR_1->listen_host;
 VAR_2->listen_port = VAR_1->listen_port;
 VAR_2->listen_path = VAR_1->listen_path;
 VAR_2->connect_host = VAR_1->connect_host;
 VAR_2->connect_port = VAR_1->connect_port;
 VAR_2->connect_path = VAR_1->connect_path;
 VAR_2->handle = VAR_1->handle;
 VAR_2->allocated_port = 0;
}
