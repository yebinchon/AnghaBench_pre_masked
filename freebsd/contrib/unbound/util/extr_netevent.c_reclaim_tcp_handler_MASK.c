
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comm_point {scalar_t__ type; TYPE_1__* tcp_parent; struct comm_point* tcp_free; int * ssl; } ;
struct TYPE_2__ {struct comm_point* tcp_free; int cur_tcp_count; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct comm_point*) ;
 int FUNC_3 (TYPE_1__*,int,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5(struct comm_point* VAR_1)
{
 FUNC_4(VAR_1->type == VAR_0);
 if(VAR_1->ssl) {





 }
 FUNC_2(VAR_1);
 if(VAR_1->tcp_parent) {
  VAR_1->tcp_parent->cur_tcp_count--;
  VAR_1->tcp_free = VAR_1->tcp_parent->tcp_free;
  VAR_1->tcp_parent->tcp_free = VAR_1;
  if(!VAR_1->tcp_free) {

   FUNC_3(VAR_1->tcp_parent, -1, -1);
  }
 }
}
