
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2cap_cmd_rej {int reason; } ;
typedef struct l2cap_cmd_rej u8 ;
typedef int u16 ;
struct sk_buff {int len; struct l2cap_cmd_rej* data; } ;
struct l2cap_conn {int dummy; } ;
struct l2cap_cmd_hdr {int code; int ident; int len; } ;
typedef int rej ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct l2cap_conn*,struct l2cap_cmd_hdr*,struct l2cap_cmd_rej*) ;
 int FUNC_5 (struct l2cap_conn*,struct l2cap_cmd_hdr*,int,struct l2cap_cmd_rej*) ;
 int FUNC_6 (struct l2cap_conn*,struct l2cap_cmd_hdr*,struct l2cap_cmd_rej*) ;
 int FUNC_7 (struct l2cap_conn*,struct l2cap_cmd_hdr*,struct l2cap_cmd_rej*) ;
 int FUNC_8 (struct l2cap_conn*,struct l2cap_cmd_hdr*,struct l2cap_cmd_rej*) ;
 int FUNC_9 (struct l2cap_conn*,struct l2cap_cmd_hdr*,struct l2cap_cmd_rej*) ;
 int FUNC_10 (struct l2cap_conn*,struct l2cap_cmd_hdr*,struct l2cap_cmd_rej*) ;
 int FUNC_11 (struct l2cap_conn*,struct l2cap_cmd_hdr*,struct l2cap_cmd_rej*) ;
 int FUNC_12 (struct l2cap_conn*,struct l2cap_cmd_hdr*,struct l2cap_cmd_rej*) ;
 int FUNC_13 (struct l2cap_conn*,struct sk_buff*) ;
 int FUNC_14 (struct l2cap_conn*,int ,int const,int,struct l2cap_cmd_rej*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (struct l2cap_cmd_hdr*,struct l2cap_cmd_rej*,int) ;

__attribute__((used)) static inline void FUNC_17(struct l2cap_conn *VAR_2, struct sk_buff *VAR_3)
{
 u8 *VAR_4 = VAR_3->data;
 int VAR_5 = VAR_3->len;
 struct l2cap_cmd_hdr VAR_6;
 int VAR_7 = 0;

 FUNC_13(VAR_2, VAR_3);

 while (VAR_5 >= VAR_1) {
  u16 VAR_8;
  FUNC_16(&VAR_6, VAR_4, VAR_1);
  VAR_4 += VAR_1;
  VAR_5 -= VAR_1;

  VAR_8 = FUNC_15(VAR_6.len);

  FUNC_0("code 0x%2.2x len %d id 0x%2.2x", VAR_6.code, VAR_8, VAR_6.ident);

  if (VAR_8 > VAR_5 || !VAR_6.ident) {
   FUNC_0("corrupted command");
   break;
  }

  switch (VAR_6.code) {
  case 138:
   FUNC_4(VAR_2, &VAR_6, VAR_4);
   break;

  case 135:
   VAR_7 = FUNC_7(VAR_2, &VAR_6, VAR_4);
   break;

  case 134:
   VAR_7 = FUNC_8(VAR_2, &VAR_6, VAR_4);
   break;

  case 137:
   VAR_7 = FUNC_5(VAR_2, &VAR_6, VAR_8, VAR_4);
   break;

  case 136:
   VAR_7 = FUNC_6(VAR_2, &VAR_6, VAR_4);
   break;

  case 133:
   VAR_7 = FUNC_9(VAR_2, &VAR_6, VAR_4);
   break;

  case 132:
   VAR_7 = FUNC_10(VAR_2, &VAR_6, VAR_4);
   break;

  case 131:
   FUNC_14(VAR_2, VAR_6.ident, 130, VAR_8, VAR_4);
   break;

  case 130:
   break;

  case 129:
   VAR_7 = FUNC_11(VAR_2, &VAR_6, VAR_4);
   break;

  case 128:
   VAR_7 = FUNC_12(VAR_2, &VAR_6, VAR_4);
   break;

  default:
   FUNC_1("Unknown signaling command 0x%2.2x", VAR_6.code);
   VAR_7 = -VAR_0;
   break;
  }

  if (VAR_7) {
   struct l2cap_cmd_rej VAR_9;
   FUNC_0("error %d", VAR_7);


   VAR_9.reason = FUNC_2(0);
   FUNC_14(VAR_2, VAR_6.ident, 138, sizeof(VAR_9), &VAR_9);
  }

  VAR_4 += VAR_8;
  VAR_5 -= VAR_8;
 }

 FUNC_3(VAR_3);
}
