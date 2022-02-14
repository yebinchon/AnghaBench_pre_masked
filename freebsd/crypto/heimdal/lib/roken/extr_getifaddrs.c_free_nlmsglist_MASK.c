
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlmsg_list {struct nlmsg_list* nlm_next; struct nlmsg_list* nlh; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct nlmsg_list*) ;

__attribute__((used)) static void
FUNC_2(struct nlmsg_list *VAR_1)
{
  struct nlmsg_list *VAR_2, *VAR_3;
  int VAR_4;
  if (!VAR_1)
    return;
  VAR_4 = VAR_0;
  for (VAR_2=VAR_1; VAR_2; VAR_2=VAR_3){
    if (VAR_2->nlh)
      FUNC_1(VAR_2->nlh);
    VAR_3=VAR_2->nlm_next;
    FUNC_1(VAR_2);
  }
  FUNC_0(VAR_4);
}
