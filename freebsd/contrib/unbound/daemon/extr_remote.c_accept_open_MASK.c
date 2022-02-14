
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct listen_list {TYPE_2__* com; struct listen_list* next; } ;
struct daemon_remote {TYPE_1__* worker; struct listen_list* accept_list; } ;
struct TYPE_4__ {int do_not_close; } ;
struct TYPE_3__ {int base; } ;


 TYPE_2__* FUNC_0 (int ,int,int ,int *,struct daemon_remote*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_3(struct daemon_remote* VAR_1, int VAR_2)
{
 struct listen_list* VAR_3 = (struct listen_list*)FUNC_2(sizeof(*VAR_3));
 if(!VAR_3) {
  FUNC_1("out of memory");
  return 0;
 }
 VAR_3->next = VAR_1->accept_list;
 VAR_1->accept_list = VAR_3;

 VAR_3->com = FUNC_0(VAR_1->worker->base, VAR_2, 0,
  &VAR_0, VAR_1);
 if(!VAR_3->com)
  return 0;

 VAR_3->com->do_not_close = 1;
 return 1;
}
