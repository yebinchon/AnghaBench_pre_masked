
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
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct sk_buff* FUNC_1 (int,int ) ;
 int FUNC_2 (struct sk_buff*,int ,int ,struct sock*,int ) ;
 int FUNC_3 (struct sadb_msg*,struct sadb_msg*) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 (struct sock*) ;

__attribute__((used)) static int FUNC_6(struct sadb_msg *VAR_8, int VAR_9, struct sock *VAR_10)
{
 struct sk_buff *VAR_11 = FUNC_1(sizeof(struct sadb_msg) + 16, VAR_7);
 struct sadb_msg *VAR_12;

 if (!VAR_11)
  return -VAR_3;




 VAR_9 = -VAR_9;
 if (VAR_9 == VAR_6 ||
     VAR_9 == VAR_4 ||
     VAR_9 == VAR_5)
  VAR_9 = VAR_1;
 if (VAR_9 >= 512)
  VAR_9 = VAR_2;
 FUNC_0(VAR_9 <= 0 || VAR_9 >= 256);

 VAR_12 = (struct sadb_msg *) FUNC_4(VAR_11, sizeof(struct sadb_msg));
 FUNC_3(VAR_12, VAR_8);
 VAR_12->sadb_msg_errno = (uint8_t) VAR_9;
 VAR_12->sadb_msg_len = (sizeof(struct sadb_msg) /
        sizeof(uint64_t));

 FUNC_2(VAR_11, VAR_7, VAR_0, VAR_10, FUNC_5(VAR_10));

 return 0;
}
