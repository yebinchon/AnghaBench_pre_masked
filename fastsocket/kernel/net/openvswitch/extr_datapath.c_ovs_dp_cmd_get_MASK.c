
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int sk; } ;
struct genl_info {int snd_seq; int snd_pid; int attrs; int userhdr; } ;
struct datapath {int sk; } ;


 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,struct genl_info*) ;
 struct sk_buff* FUNC_3 (int ,int ,int ) ;
 struct sk_buff* FUNC_4 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_1, struct genl_info *VAR_2)
{
 struct sk_buff *VAR_3;
 struct datapath *VAR_4;
 int VAR_5;

 FUNC_5();
 VAR_4 = FUNC_3(FUNC_7(VAR_1->sk), VAR_2->userhdr, VAR_2->attrs);
 if (FUNC_0(VAR_4)) {
  VAR_5 = FUNC_1(VAR_4);
  goto unlock;
 }

 VAR_3 = FUNC_4(VAR_4, VAR_2->snd_pid,
          VAR_2->snd_seq, VAR_0);
 if (FUNC_0(VAR_3)) {
  VAR_5 = FUNC_1(VAR_3);
  goto unlock;
 }

 FUNC_6();
 return FUNC_2(VAR_3, VAR_2);

unlock:
 FUNC_6();
 return VAR_5;
}
