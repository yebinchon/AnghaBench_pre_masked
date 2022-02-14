
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct listen_list {int com; struct listen_list* next; } ;
struct daemon_remote {struct listen_list* accept_list; } ;


 int FUNC_0 (int ,int,int) ;

void FUNC_1(struct daemon_remote* VAR_0)
{
 struct listen_list* VAR_1;
 for(VAR_1=VAR_0->accept_list; VAR_1; VAR_1=VAR_1->next) {
  FUNC_0(VAR_1->com, -1, -1);
 }
}
