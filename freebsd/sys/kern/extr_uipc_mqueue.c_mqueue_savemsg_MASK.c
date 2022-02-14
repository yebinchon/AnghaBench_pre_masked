
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mqueue_msg {int msg_size; char msg_prio; } ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static int
FUNC_1(struct mqueue_msg *VAR_0, char *VAR_1, int *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(((char *)VAR_0) + sizeof(*VAR_0), VAR_1,
  VAR_0->msg_size);
 if (VAR_3 == 0 && VAR_2 != ((void*)0))
  VAR_3 = FUNC_0(&VAR_0->msg_prio, VAR_2, sizeof(int));
 return (VAR_3);
}
