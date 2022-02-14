
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comm_base {struct comm_base* eb; int * base; int slow_accept; scalar_t__ slow_accept_enabled; } ;


 int FUNC_0 (struct comm_base*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void
FUNC_4(struct comm_base* VAR_0)
{
 if(!VAR_0)
  return;
 if(VAR_0->eb->slow_accept_enabled) {
  if(FUNC_2(VAR_0->eb->slow_accept) != 0) {
   FUNC_1("could not event_del slow_accept");
  }
  FUNC_3(VAR_0->eb->slow_accept);
 }
 VAR_0->eb->base = ((void*)0);
 FUNC_0(VAR_0->eb);
 FUNC_0(VAR_0);
}
