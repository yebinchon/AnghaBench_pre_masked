
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tc_action {int order; struct tc_action* next; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int nlmsg_flags; int nlmsg_seq; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct tc_action*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct tc_action*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ,struct nlmsghdr*,struct tc_action*,int) ;
 struct sk_buff* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct tc_action*) ;
 int VAR_10 ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct nlattr**,int,struct nlattr*,int *) ;
 int FUNC_7 (struct sk_buff*,int *,int ,int ,int) ;
 int FUNC_8 (struct nlattr*,struct nlmsghdr*,int ) ;
 scalar_t__ FUNC_9 (struct sk_buff*,struct tc_action*,int ,int ,int ,int,int ,int) ;
 int FUNC_10 (struct tc_action*,int ) ;
 struct tc_action* FUNC_11 (struct nlattr*,struct nlmsghdr*,int ) ;

__attribute__((used)) static int
FUNC_12(struct nlattr *VAR_11, struct nlmsghdr *VAR_12, u32 VAR_13, int VAR_14)
{
 int VAR_15, VAR_16;
 struct nlattr *VAR_17[VAR_9+1];
 struct tc_action *VAR_18 = ((void*)0), *VAR_19, *VAR_20 = ((void*)0);

 VAR_16 = FUNC_6(VAR_17, VAR_9, VAR_11, ((void*)0));
 if (VAR_16 < 0)
  return VAR_16;

 if (VAR_14 == VAR_6 && VAR_12->nlmsg_flags&VAR_5) {
  if (VAR_17[1] != ((void*)0))
   return FUNC_8(VAR_17[1], VAR_12, VAR_13);
  else
   return -VAR_0;
 }

 for (VAR_15 = 1; VAR_15 <= VAR_9 && VAR_17[VAR_15]; VAR_15++) {
  VAR_19 = FUNC_11(VAR_17[VAR_15], VAR_12, VAR_13);
  if (FUNC_0(VAR_19)) {
   VAR_16 = FUNC_1(VAR_19);
   goto err;
  }
  VAR_19->order = VAR_15;

  if (VAR_18 == ((void*)0))
   VAR_18 = VAR_19;
  else
   VAR_20->next = VAR_19;
  VAR_20 = VAR_19;
 }

 if (VAR_14 == VAR_7)
  VAR_16 = FUNC_2(VAR_13, VAR_12, VAR_18, VAR_14);
 else {
  struct sk_buff *VAR_21;

  VAR_21 = FUNC_3(VAR_3, VAR_2);
  if (!VAR_21) {
   VAR_16 = -VAR_1;
   goto err;
  }

  if (FUNC_9(VAR_21, VAR_18, VAR_13, VAR_12->nlmsg_seq, 0, VAR_14,
     0, 1) <= 0) {
   FUNC_5(VAR_21);
   VAR_16 = -VAR_0;
   goto err;
  }


  FUNC_10(VAR_18, 0);
  VAR_16 = FUNC_7(VAR_21, &VAR_10, VAR_13, VAR_8,
         VAR_12->nlmsg_flags&VAR_4);
  if (VAR_16 > 0)
   return 0;
  return VAR_16;
 }
err:
 FUNC_4(VAR_18);
 return VAR_16;
}
