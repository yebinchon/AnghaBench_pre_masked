
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct genl_info {int snd_seq; int snd_pid; struct cfg80211_registered_device** user_ptr; } ;
struct cfg80211_registered_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*,struct genl_info*) ;
 scalar_t__ FUNC_1 (struct cfg80211_registered_device*,struct sk_buff*,int ,int ,int ,int,int *,int *,int *) ;
 int FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_3, struct genl_info *VAR_4)
{
 struct sk_buff *VAR_5;
 struct cfg80211_registered_device *VAR_6 = VAR_4->user_ptr[0];

 VAR_5 = FUNC_3(4096, VAR_2);
 if (!VAR_5)
  return -VAR_1;

 if (FUNC_1(VAR_6, VAR_5, VAR_4->snd_pid, VAR_4->snd_seq, 0,
          0, ((void*)0), ((void*)0), ((void*)0)) < 0) {
  FUNC_2(VAR_5);
  return -VAR_0;
 }

 return FUNC_0(VAR_5, VAR_4);
}
