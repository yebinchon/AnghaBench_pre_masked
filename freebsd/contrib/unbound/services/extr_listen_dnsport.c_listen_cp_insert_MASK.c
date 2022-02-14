
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct listen_list {struct listen_list* next; struct comm_point* com; } ;
struct listen_dnsport {struct listen_list* cps; } ;
struct comm_point {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(struct comm_point* VAR_0, struct listen_dnsport* VAR_1)
{
 struct listen_list* VAR_2 = (struct listen_list*)FUNC_0(
  sizeof(struct listen_list));
 if(!VAR_2)
  return 0;
 VAR_2->com = VAR_0;
 VAR_2->next = VAR_1->cps;
 VAR_1->cps = VAR_2;
 return 1;
}
