
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nsp_conn_init_msg {int msgflg; int segsize; int info; int services; int srcaddr; int dstaddr; } ;
struct TYPE_2__ {int opt_data; int opt_optl; } ;
struct dn_scp {int persist_fxn; int persist; TYPE_1__ conndata_out; int segsize_loc; int info_loc; int services_loc; int addrloc; int addrrem; } ;
typedef int gfp_t ;
typedef int __u8 ;


 struct dn_scp* FUNC_0 (struct sock*) ;
 int FUNC_1 (int ) ;
 struct sk_buff* FUNC_2 (struct sock*,int,int ) ;
 int FUNC_3 (struct sock*) ;
 int VAR_0 ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int*,int ,int) ;
 int* FUNC_7 (struct sk_buff*,int) ;

void FUNC_8(struct sock *VAR_1, gfp_t VAR_2)
{
 struct dn_scp *VAR_3 = FUNC_0(VAR_1);
 struct sk_buff *VAR_4 = ((void*)0);
 struct nsp_conn_init_msg *VAR_5;
 __u8 VAR_6 = (__u8)FUNC_5(VAR_3->conndata_out.opt_optl);

 if ((VAR_4 = FUNC_2(VAR_1, 50 + VAR_6, VAR_2)) == ((void*)0))
  return;

 VAR_5 = (struct nsp_conn_init_msg *)FUNC_7(VAR_4, sizeof(*VAR_5));
 VAR_5->msgflg = 0x28;
 VAR_5->dstaddr = VAR_3->addrrem;
 VAR_5->srcaddr = VAR_3->addrloc;
 VAR_5->services = VAR_3->services_loc;
 VAR_5->info = VAR_3->info_loc;
 VAR_5->segsize = FUNC_1(VAR_3->segsize_loc);

 *FUNC_7(VAR_4,1) = VAR_6;

 if (VAR_6 > 0)
  FUNC_6(FUNC_7(VAR_4, VAR_6), VAR_3->conndata_out.opt_data, VAR_6);


 FUNC_4(VAR_4);

 VAR_3->persist = FUNC_3(VAR_1);
 VAR_3->persist_fxn = VAR_0;
}
