
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint64_t ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct sadb_msg {int sadb_msg_len; scalar_t__ sadb_msg_errno; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (int,int ) ;
 int FUNC_1 (struct sadb_msg*,struct sadb_msg*,int) ;
 int FUNC_2 (struct sk_buff*,int ,int ,struct sock*,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (struct sock*) ;

__attribute__((used)) static int FUNC_5(struct sock *VAR_3, struct sadb_msg *VAR_4)
{
 struct sk_buff *VAR_5;
 struct sadb_msg *VAR_6;

 VAR_5 = FUNC_0(sizeof(struct sadb_msg) + 16, VAR_2);
 if (!VAR_5)
  return -VAR_1;

 VAR_6 = (struct sadb_msg *) FUNC_3(VAR_5, sizeof(struct sadb_msg));
 FUNC_1(VAR_6, VAR_4, sizeof(struct sadb_msg));
 VAR_6->sadb_msg_errno = (uint8_t) 0;
 VAR_6->sadb_msg_len = (sizeof(struct sadb_msg) / sizeof(uint64_t));

 return FUNC_2(VAR_5, VAR_2, VAR_0, VAR_3, FUNC_4(VAR_3));
}
