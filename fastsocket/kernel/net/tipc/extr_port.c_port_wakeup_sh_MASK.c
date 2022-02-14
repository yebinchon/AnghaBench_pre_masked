
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* tipc_continue_event ) (void*,unsigned long) ;
struct user_port {void* usr_handle; int (* continue_event_cb ) (void*,unsigned long) ;} ;
struct port {struct user_port* user_port; } ;


 struct port* FUNC_0 (unsigned long) ;
 int FUNC_1 (struct port*) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_0)
{
 struct port *VAR_1;
 struct user_port *VAR_2;
 tipc_continue_event VAR_3 = ((void*)0);
 void *VAR_4 = ((void*)0);

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1) {
  VAR_2 = VAR_1->user_port;
  if (VAR_2) {
   VAR_3 = VAR_2->continue_event_cb;
   VAR_4 = VAR_2->usr_handle;
  }
  FUNC_1(VAR_1);
 }
 if (VAR_3)
  VAR_3(VAR_4, VAR_0);
}
