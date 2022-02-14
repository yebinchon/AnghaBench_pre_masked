
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* connect_path; struct TYPE_5__* connect_host; struct TYPE_5__* listen_path; struct TYPE_5__* listen_host; } ;
struct TYPE_4__ {int num_local_forwards; int num_remote_forwards; int tun_open; TYPE_2__* remote_forwards; TYPE_2__* local_forwards; } ;
typedef TYPE_1__ Options ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_1(Options *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_local_forwards; VAR_2++) {
  FUNC_0(VAR_1->local_forwards[VAR_2].listen_host);
  FUNC_0(VAR_1->local_forwards[VAR_2].listen_path);
  FUNC_0(VAR_1->local_forwards[VAR_2].connect_host);
  FUNC_0(VAR_1->local_forwards[VAR_2].connect_path);
 }
 if (VAR_1->num_local_forwards > 0) {
  FUNC_0(VAR_1->local_forwards);
  VAR_1->local_forwards = ((void*)0);
 }
 VAR_1->num_local_forwards = 0;
 for (VAR_2 = 0; VAR_2 < VAR_1->num_remote_forwards; VAR_2++) {
  FUNC_0(VAR_1->remote_forwards[VAR_2].listen_host);
  FUNC_0(VAR_1->remote_forwards[VAR_2].listen_path);
  FUNC_0(VAR_1->remote_forwards[VAR_2].connect_host);
  FUNC_0(VAR_1->remote_forwards[VAR_2].connect_path);
 }
 if (VAR_1->num_remote_forwards > 0) {
  FUNC_0(VAR_1->remote_forwards);
  VAR_1->remote_forwards = ((void*)0);
 }
 VAR_1->num_remote_forwards = 0;
 VAR_1->tun_open = VAR_0;
}
