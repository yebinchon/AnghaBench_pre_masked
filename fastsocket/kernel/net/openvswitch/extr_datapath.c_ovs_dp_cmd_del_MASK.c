
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
 int FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (int ,int ,int ) ;
 struct sk_buff* FUNC_4 (struct sk_buff*,int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_5 () ;
 int FUNC_6 (struct sk_buff*,struct genl_info*,int *) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_2, struct genl_info *VAR_3)
{
 struct sk_buff *VAR_4;
 struct datapath *VAR_5;
 int VAR_6;

 FUNC_5();
 VAR_5 = FUNC_3(FUNC_8(VAR_2->sk), VAR_3->userhdr, VAR_3->attrs);
 VAR_6 = FUNC_1(VAR_5);
 if (FUNC_0(VAR_5))
  goto unlock;

 VAR_4 = FUNC_4(VAR_5, VAR_3->snd_pid,
          VAR_3->snd_seq, VAR_0);
 VAR_6 = FUNC_1(VAR_4);
 if (FUNC_0(VAR_4))
  goto unlock;

 FUNC_2(VAR_5);
 FUNC_7();

 FUNC_6(VAR_4, VAR_3, &VAR_1);

 return 0;
unlock:
 FUNC_7();
 return VAR_6;
}
