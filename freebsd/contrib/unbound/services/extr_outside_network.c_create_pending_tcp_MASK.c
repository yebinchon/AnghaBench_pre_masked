
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pending_tcp {int c; struct pending_tcp* next_free; } ;
struct outside_network {int num_tcp; struct pending_tcp** tcp_conns; int base; struct pending_tcp* tcp_free; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int ,size_t,int ,struct pending_tcp*) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_2(struct outside_network* VAR_1, size_t VAR_2)
{
 size_t VAR_3;
 if(VAR_1->num_tcp == 0)
  return 1;
 if(!(VAR_1->tcp_conns = (struct pending_tcp **)FUNC_0(
   VAR_1->num_tcp, sizeof(struct pending_tcp*))))
  return 0;
 for(VAR_3=0; VAR_3<VAR_1->num_tcp; VAR_3++) {
  if(!(VAR_1->tcp_conns[VAR_3] = (struct pending_tcp*)FUNC_0(1,
   sizeof(struct pending_tcp))))
   return 0;
  VAR_1->tcp_conns[VAR_3]->next_free = VAR_1->tcp_free;
  VAR_1->tcp_free = VAR_1->tcp_conns[VAR_3];
  VAR_1->tcp_conns[VAR_3]->c = FUNC_1(
   VAR_1->base, VAR_2, VAR_0,
   VAR_1->tcp_conns[VAR_3]);
  if(!VAR_1->tcp_conns[VAR_3]->c)
   return 0;
 }
 return 1;
}
