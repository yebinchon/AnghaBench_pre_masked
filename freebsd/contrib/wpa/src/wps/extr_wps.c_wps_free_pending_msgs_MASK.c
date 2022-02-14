
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct upnp_pending_message {int msg; struct upnp_pending_message* next; } ;


 int FUNC_0 (struct upnp_pending_message*) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct upnp_pending_message *VAR_0)
{
 struct upnp_pending_message *VAR_1, *VAR_2;
 VAR_1 = VAR_0;
 while (VAR_1) {
  VAR_2 = VAR_1;
  VAR_1 = VAR_1->next;
  FUNC_1(VAR_2->msg);
  FUNC_0(VAR_2);
 }
}
