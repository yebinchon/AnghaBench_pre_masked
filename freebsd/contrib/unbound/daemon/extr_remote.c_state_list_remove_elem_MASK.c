
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_state {struct rc_state* next; struct comm_point* c; } ;
struct comm_point {int dummy; } ;



__attribute__((used)) static void
FUNC_0(struct rc_state** VAR_0, struct comm_point* VAR_1)
{
 while(*VAR_0) {
  if( (*VAR_0)->c == VAR_1) {
   *VAR_0 = (*VAR_0)->next;
   return;
  }
  VAR_0 = &(*VAR_0)->next;
 }
}
