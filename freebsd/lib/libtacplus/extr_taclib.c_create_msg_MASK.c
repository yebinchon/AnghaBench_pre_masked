
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tac_msg {int type; scalar_t__ flags; int version; } ;
struct tac_handle {int * avs; int user_msg; int data; int rem_addr; int port; int user; struct tac_msg request; scalar_t__ last_seq_no; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int,int) ;

__attribute__((used)) static void
FUNC_2(struct tac_handle *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 struct tac_msg *VAR_5;
 int VAR_6;

 VAR_1->last_seq_no = 0;

 VAR_5 = &VAR_1->request;
 VAR_5->type = VAR_2;
 VAR_5->version = FUNC_1(VAR_2, VAR_3, VAR_4);
 VAR_5->flags = 0;

 FUNC_0(&VAR_1->user);
 FUNC_0(&VAR_1->port);
 FUNC_0(&VAR_1->rem_addr);
 FUNC_0(&VAR_1->data);
 FUNC_0(&VAR_1->user_msg);

 for (VAR_6=0; VAR_6<VAR_0; VAR_6++)
  FUNC_0(&(VAR_1->avs[VAR_6]));
}
