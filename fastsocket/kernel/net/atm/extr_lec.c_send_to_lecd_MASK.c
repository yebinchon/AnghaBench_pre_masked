
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int (* sk_data_ready ) (struct sock*,int) ;int sk_receive_queue; } ;
struct sk_buff {int len; int truesize; scalar_t__ data; } ;
struct lec_priv {int lecd; } ;
struct TYPE_3__ {int targetless_le_arp; int atm_addr; int mac_addr; } ;
struct TYPE_4__ {TYPE_1__ normal; } ;
struct atmlec_msg {int sizeoftlvs; TYPE_2__ content; int type; } ;
typedef int atmlec_msg_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,unsigned char const*,int ) ;
 int FUNC_3 (struct atmlec_msg*,int ,int) ;
 int FUNC_4 (char*,int) ;
 struct sock* FUNC_5 (int ) ;
 int FUNC_6 (int *,struct sk_buff*) ;
 int FUNC_7 (struct sock*,int) ;
 int FUNC_8 (struct sock*,int) ;

__attribute__((used)) static int
FUNC_9(struct lec_priv *VAR_3, atmlec_msg_type VAR_4,
      const unsigned char *VAR_5, const unsigned char *VAR_6,
      struct sk_buff *VAR_7)
{
 struct sock *VAR_8;
 struct sk_buff *VAR_9;
 struct atmlec_msg *VAR_10;

 if (!VAR_3 || !VAR_3->lecd) {
  return -1;
 }
 VAR_9 = FUNC_0(sizeof(struct atmlec_msg), VAR_2);
 if (!VAR_9)
  return -1;
 VAR_9->len = sizeof(struct atmlec_msg);
 VAR_10 = (struct atmlec_msg *)VAR_9->data;
 FUNC_3(VAR_10, 0, sizeof(struct atmlec_msg));
 VAR_10->type = VAR_4;
 if (VAR_7 != ((void*)0))
  VAR_10->sizeoftlvs = VAR_7->len;
 if (VAR_5)
  FUNC_2(&VAR_10->content.normal.mac_addr, VAR_5, VAR_1);
 else
  VAR_10->content.normal.targetless_le_arp = 1;
 if (VAR_6)
  FUNC_2(&VAR_10->content.normal.atm_addr, VAR_6, VAR_0);

 FUNC_1(VAR_3->lecd, VAR_9->truesize);
 VAR_8 = FUNC_5(VAR_3->lecd);
 FUNC_6(&VAR_8->sk_receive_queue, VAR_9);
 VAR_8->sk_data_ready(VAR_8, VAR_9->len);

 if (VAR_7 != ((void*)0)) {
  FUNC_4("lec: about to send %d bytes of data\n", VAR_7->len);
  FUNC_1(VAR_3->lecd, VAR_7->truesize);
  FUNC_6(&VAR_8->sk_receive_queue, VAR_7);
  VAR_8->sk_data_ready(VAR_8, VAR_9->len);
 }

 return 0;
}
