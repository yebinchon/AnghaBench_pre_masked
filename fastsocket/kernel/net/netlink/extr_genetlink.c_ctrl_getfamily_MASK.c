
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {int dummy; } ;
struct genl_info {int snd_seq; int snd_pid; scalar_t__* attrs; } ;
struct genl_family {int netnsok; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (struct genl_family*,int ,int ,int ) ;
 struct genl_family* FUNC_3 (int ) ;
 struct genl_family* FUNC_4 (char*) ;
 int FUNC_5 (struct genl_info*) ;
 int FUNC_6 (struct sk_buff*,struct genl_info*) ;
 int VAR_5 ;
 int FUNC_7 (int ,int *) ;
 char* FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct sk_buff *VAR_6, struct genl_info *VAR_7)
{
 struct sk_buff *VAR_8;
 struct genl_family *VAR_9 = ((void*)0);
 int VAR_10 = -VAR_3;

 if (VAR_7->attrs[VAR_0]) {
  u16 VAR_11 = FUNC_9(VAR_7->attrs[VAR_0]);
  VAR_9 = FUNC_3(VAR_11);
  VAR_10 = -VAR_4;
 }

 if (VAR_7->attrs[VAR_1]) {
  char *VAR_12;

  VAR_12 = FUNC_8(VAR_7->attrs[VAR_1]);
  VAR_9 = FUNC_4(VAR_12);
  VAR_10 = -VAR_4;
 }

 if (VAR_9 == ((void*)0))
  return VAR_10;

 if (!VAR_9->netnsok && !FUNC_7(FUNC_5(VAR_7), &VAR_5)) {

  return -VAR_4;
 }

 VAR_8 = FUNC_2(VAR_9, VAR_7->snd_pid, VAR_7->snd_seq,
        VAR_2);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 return FUNC_6(VAR_8, VAR_7);
}
