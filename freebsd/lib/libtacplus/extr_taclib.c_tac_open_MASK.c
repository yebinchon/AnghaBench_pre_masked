
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tac_handle {int fd; char* errmsg; int srvr_data; int srvr_msg; int * srvr_avs; int * avs; int user_msg; int data; int rem_addr; int port; int user; scalar_t__ cur_server; scalar_t__ num_servers; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 () ;

struct tac_handle *
FUNC_4(void)
{
 int VAR_1;
 struct tac_handle *VAR_2;

 VAR_2 = (struct tac_handle *)FUNC_2(sizeof(struct tac_handle));
 if (VAR_2 != ((void*)0)) {
  VAR_2->fd = -1;
  VAR_2->num_servers = 0;
  VAR_2->cur_server = 0;
  VAR_2->errmsg[0] = '\0';
  FUNC_0(&VAR_2->user);
  FUNC_0(&VAR_2->port);
  FUNC_0(&VAR_2->rem_addr);
  FUNC_0(&VAR_2->data);
  FUNC_0(&VAR_2->user_msg);
  for (VAR_1=0; VAR_1<VAR_0; VAR_1++) {
   FUNC_0(&(VAR_2->avs[VAR_1]));
   FUNC_1(&(VAR_2->srvr_avs[VAR_1]));
  }
  FUNC_1(&VAR_2->srvr_msg);
  FUNC_1(&VAR_2->srvr_data);
  FUNC_3();
 }
 return VAR_2;
}
