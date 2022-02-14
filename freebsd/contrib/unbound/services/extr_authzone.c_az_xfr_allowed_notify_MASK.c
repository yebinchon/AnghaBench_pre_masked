
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct auth_xfer {struct auth_master* allow_notify_list; } ;
struct auth_master {struct auth_master* next; } ;
typedef int socklen_t ;


 scalar_t__ FUNC_0 (struct auth_master*,struct sockaddr_storage*,int ,struct auth_master**) ;

__attribute__((used)) static int
FUNC_1(struct auth_xfer* VAR_0, struct sockaddr_storage* VAR_1,
 socklen_t VAR_2, struct auth_master** VAR_3)
{
 struct auth_master* VAR_4;
 for(VAR_4=VAR_0->allow_notify_list; VAR_4; VAR_4=VAR_4->next) {
  if(FUNC_0(VAR_4, VAR_1, VAR_2, VAR_3)) {
   return 1;
  }
 }
 return 0;
}
