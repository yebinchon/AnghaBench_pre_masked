
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sock {int dummy; } ;
struct sk_buff {scalar_t__ len; scalar_t__ data; } ;
struct l2cap_pinfo {scalar_t__ remote_max_tx; int req_seq; scalar_t__ fcs; int conn; } ;
struct TYPE_2__ {int tx_seq; scalar_t__ retries; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct sock*) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,int*,scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct sock*,struct sk_buff*) ;
 struct l2cap_pinfo* FUNC_5 (struct sock*) ;
 int FUNC_6 (int ,struct sock*) ;
 int FUNC_7 (int,scalar_t__) ;
 struct sk_buff* FUNC_8 (struct sk_buff*,int ) ;
 struct sk_buff* FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,struct sk_buff*) ;
 struct sk_buff* FUNC_11 (int ,struct sk_buff*) ;

__attribute__((used)) static int FUNC_12(struct sock *VAR_5, u8 VAR_6)
{
 struct l2cap_pinfo *VAR_7 = FUNC_5(VAR_5);
 struct sk_buff *VAR_8, *VAR_9;
 u16 VAR_10, VAR_11;
 int VAR_12;

 VAR_8 = FUNC_9(FUNC_0(VAR_5));
 do {
  if (FUNC_1(VAR_8)->tx_seq != VAR_6) {
   if (FUNC_10(FUNC_0(VAR_5), VAR_8))
    break;
   VAR_8 = FUNC_11(FUNC_0(VAR_5), VAR_8);
   continue;
  }

  if (VAR_7->remote_max_tx &&
    FUNC_1(VAR_8)->retries == VAR_7->remote_max_tx) {
   FUNC_6(VAR_7->conn, VAR_5);
   break;
  }

  VAR_9 = FUNC_8(VAR_8, VAR_0);
  FUNC_1(VAR_8)->retries++;
  VAR_10 = FUNC_3(VAR_9->data + VAR_4);
  VAR_10 |= (VAR_7->req_seq << VAR_1)
    | (VAR_6 << VAR_2);
  FUNC_7(VAR_10, VAR_9->data + VAR_4);

  if (FUNC_5(VAR_5)->fcs == VAR_3) {
   VAR_11 = FUNC_2(0, (u8 *)VAR_9->data, VAR_9->len - 2);
   FUNC_7(VAR_11, VAR_9->data + VAR_9->len - 2);
  }

  VAR_12 = FUNC_4(VAR_5, VAR_9);
  if (VAR_12 < 0) {
   FUNC_6(VAR_7->conn, VAR_5);
   return VAR_12;
  }
  break;
 } while(1);
 return 0;
}
