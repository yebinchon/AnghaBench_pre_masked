
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tc_action {struct tc_action* next; } ;
struct nlmsghdr {int nlmsg_flags; int nlmsg_seq; } ;
struct nlattr {int dummy; } ;


 scalar_t__ FUNC_0 (struct tc_action*) ;
 int FUNC_1 (struct tc_action*) ;
 int VAR_0 ;
 int FUNC_2 (struct tc_action*) ;
 struct tc_action* FUNC_3 (struct nlattr*,int *,int *,int,int ) ;
 int FUNC_4 (struct tc_action*,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct nlattr *VAR_1, struct nlmsghdr *VAR_2, u32 VAR_3, int VAR_4)
{
 int VAR_5 = 0;
 struct tc_action *VAR_6;
 struct tc_action *VAR_7;
 u32 VAR_8 = VAR_2->nlmsg_seq;

 VAR_6 = FUNC_3(VAR_1, ((void*)0), ((void*)0), VAR_4, 0);
 if (VAR_6 == ((void*)0))
  goto done;
 if (FUNC_0(VAR_6)) {
  VAR_5 = FUNC_1(VAR_6);
  goto done;
 }




 VAR_5 = FUNC_4(VAR_6, VAR_3, VAR_8, VAR_0, VAR_2->nlmsg_flags);
 for (VAR_7 = VAR_6; VAR_7; VAR_7 = VAR_6) {
  VAR_6 = VAR_7->next;
  FUNC_2(VAR_7);
 }
done:
 return VAR_5;
}
