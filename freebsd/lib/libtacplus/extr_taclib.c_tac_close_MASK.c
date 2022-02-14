
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tac_handle {int fd; int num_servers; int * avs; int user_msg; int data; int rem_addr; int port; int user; TYPE_1__* servers; } ;
struct TYPE_2__ {struct tac_handle* secret; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct tac_handle*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tac_handle*,int ,int) ;
 int FUNC_4 (struct tac_handle*) ;

void
FUNC_5(struct tac_handle *VAR_1)
{
 int VAR_2, VAR_3;

 if (VAR_1->fd != -1)
  FUNC_0(VAR_1->fd);
 for (VAR_3 = 0; VAR_3 < VAR_1->num_servers; VAR_3++) {
  FUNC_3(VAR_1->servers[VAR_3].secret, 0,
      FUNC_4(VAR_1->servers[VAR_3].secret));
  FUNC_1(VAR_1->servers[VAR_3].secret);
 }
 FUNC_2(&VAR_1->user);
 FUNC_2(&VAR_1->port);
 FUNC_2(&VAR_1->rem_addr);
 FUNC_2(&VAR_1->data);
 FUNC_2(&VAR_1->user_msg);
 for (VAR_2=0; VAR_2<VAR_0; VAR_2++)
  FUNC_2(&(VAR_1->avs[VAR_2]));


 FUNC_3(VAR_1, 0, sizeof(struct tac_handle));
 FUNC_1(VAR_1);
}
