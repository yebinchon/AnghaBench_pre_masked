
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct listen_port {int dummy; } ;
struct config_strlist {char* str; struct config_strlist* next; } ;
struct TYPE_2__ {struct config_strlist* first; } ;
struct config_file {scalar_t__ control_port; scalar_t__ do_ip4; scalar_t__ do_ip6; TYPE_1__ control_ifs; scalar_t__ remote_control_enable; } ;


 int FUNC_0 (char*,scalar_t__,struct listen_port**,int,struct config_file*) ;
 int FUNC_1 (struct listen_port*) ;
 int FUNC_2 (int) ;

struct listen_port* FUNC_3(struct config_file* VAR_0)
{
 struct listen_port* VAR_1 = ((void*)0);
 FUNC_2(VAR_0->remote_control_enable && VAR_0->control_port);
 if(VAR_0->control_ifs.first) {
  struct config_strlist* VAR_2;
  for(VAR_2 = VAR_0->control_ifs.first; VAR_2; VAR_2 = VAR_2->next) {
   if(!FUNC_0(VAR_2->str, VAR_0->control_port, &VAR_1, 1, VAR_0)) {
    FUNC_1(VAR_1);
    return ((void*)0);
   }
  }
 } else {

  if(VAR_0->do_ip6 &&
   !FUNC_0("::1", VAR_0->control_port, &VAR_1, 0, VAR_0)) {
   FUNC_1(VAR_1);
   return ((void*)0);
  }
  if(VAR_0->do_ip4 &&
   !FUNC_0("127.0.0.1", VAR_0->control_port, &VAR_1, 1, VAR_0)) {
   FUNC_1(VAR_1);
   return ((void*)0);
  }
 }
 return VAR_1;
}
