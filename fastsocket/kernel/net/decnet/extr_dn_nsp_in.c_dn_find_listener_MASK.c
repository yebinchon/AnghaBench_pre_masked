
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_dn {int dummy; } ;
struct sock {int dummy; } ;
struct sk_buff {unsigned char* data; int len; } ;
struct nsp_conn_init_msg {int segsize; int info; int services; int dstaddr; int srcaddr; } ;
struct dn_skb_cb {int segsize; int info; int services; int dst_port; int src_port; } ;
struct TYPE_2__ {unsigned short reason; int text; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 struct dn_skb_cb* FUNC_0 (struct sk_buff*) ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_1 (unsigned char**,int*,int,int) ;
 int FUNC_2 (struct sk_buff*,int ) ;
 struct sock* FUNC_3 (struct sockaddr_dn*) ;
 int FUNC_4 (unsigned char*,int,struct sockaddr_dn*,unsigned char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sockaddr_dn*,int ,int) ;
 int FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (struct sk_buff*,int) ;

__attribute__((used)) static struct sock *FUNC_9(struct sk_buff *VAR_3, unsigned short *VAR_4)
{
 struct dn_skb_cb *VAR_5 = FUNC_0(VAR_3);
 struct nsp_conn_init_msg *VAR_6 = (struct nsp_conn_init_msg *)VAR_3->data;
 struct sockaddr_dn VAR_7;
 struct sockaddr_dn VAR_8;
 unsigned char VAR_9 = 0;
 int VAR_10;
 int VAR_11;
 unsigned char *VAR_12;
 int VAR_13;
 int VAR_14 = 0;
 unsigned char VAR_15;

 FUNC_6(&VAR_7, 0, sizeof(struct sockaddr_dn));
 FUNC_6(&VAR_8, 0, sizeof(struct sockaddr_dn));




 VAR_5->src_port = VAR_6->srcaddr;
 VAR_5->dst_port = VAR_6->dstaddr;
 VAR_5->services = VAR_6->services;
 VAR_5->info = VAR_6->info;
 VAR_5->segsize = FUNC_5(VAR_6->segsize);

 if (!FUNC_7(VAR_3, sizeof(*VAR_6)))
  goto err_out;

 FUNC_8(VAR_3, sizeof(*VAR_6));

 VAR_13 = VAR_3->len;
 VAR_12 = VAR_3->data;




 VAR_10 = FUNC_4(VAR_12, VAR_13, &VAR_7, &VAR_9);
 VAR_14++;
 if (VAR_10 < 0)
  goto err_out;

 VAR_14++;
 if (VAR_9 > 1)
  goto err_out;

 VAR_13 -= VAR_10;
 VAR_12 += VAR_10;




 VAR_11 = FUNC_4(VAR_12, VAR_13, &VAR_8, &VAR_9);
 VAR_14++;
 if (VAR_11 < 0)
  goto err_out;

 VAR_13 -= VAR_11;
 VAR_12 += VAR_11;
 VAR_14++;
 if (VAR_13 < 1)
  goto err_out;

 VAR_15 = *VAR_12;
 VAR_12++;
 VAR_13--;




 VAR_14++;
 if ((VAR_15 & (VAR_0 | VAR_1)) && (VAR_13 < 1))
  goto err_out;




 VAR_14++;
 if (VAR_15 & VAR_0) {
  if (FUNC_1(&VAR_12, &VAR_13, 39, 1))
   goto err_out;
  if (FUNC_1(&VAR_12, &VAR_13, 39, 1))
   goto err_out;
  if (FUNC_1(&VAR_12, &VAR_13, 39, (VAR_15 & VAR_1) ? 1 : 0))
   goto err_out;
 }




 VAR_14++;
 if (VAR_15 & VAR_1) {
  if (FUNC_1(&VAR_12, &VAR_13, 16, 0))
   goto err_out;
 }




 return FUNC_3(&VAR_7);
err_out:
 FUNC_2(VAR_3, VAR_2[VAR_14].text);
 *VAR_4 = VAR_2[VAR_14].reason;
 return ((void*)0);
}
