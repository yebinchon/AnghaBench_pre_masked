
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tac_handle {scalar_t__ fd; int num_servers; int single_connect; size_t cur_server; TYPE_1__* servers; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct tac_handle*) ;
 int FUNC_1 (struct tac_handle*,char*) ;

__attribute__((used)) static int
FUNC_2(struct tac_handle *VAR_1)
{
 int VAR_2;

 if (VAR_1->fd >= 0)
  return 0;
 if (VAR_1->num_servers == 0) {
  FUNC_1(VAR_1, "No TACACS+ servers specified");
  return -1;
 }





 for (VAR_2 = 0; VAR_2 < VAR_1->num_servers; VAR_2++) {
  if (FUNC_0(VAR_1) == 0) {
   VAR_1->single_connect = (VAR_1->servers[VAR_1->cur_server].flags &
       VAR_0) != 0;
   return 0;
  }
  if (++VAR_1->cur_server >= VAR_1->num_servers)
   VAR_1->cur_server = 0;
 }

 return -1;
}
