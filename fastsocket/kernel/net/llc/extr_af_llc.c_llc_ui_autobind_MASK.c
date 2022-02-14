
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sockaddr_llc {int sllc_arphrd; } ;
struct sock {int dummy; } ;
struct TYPE_3__ {int * mac; int lsap; } ;
struct llc_sock {int addr; TYPE_2__* dev; TYPE_1__ laddr; } ;
struct llc_sap {int dummy; } ;
struct TYPE_4__ {struct sockaddr_llc* dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_0 (int *,int ) ;
 int VAR_6 ;
 int FUNC_1 (struct llc_sap*,struct sock*) ;
 struct llc_sap* FUNC_2 (int ,int *) ;
 struct llc_sock* FUNC_3 (struct sock*) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,struct sockaddr_llc*,int) ;
 int FUNC_6 (struct sock*,int ) ;
 int FUNC_7 (struct sock*,int ) ;

__attribute__((used)) static int FUNC_8(struct socket *VAR_7, struct sockaddr_llc *VAR_8)
{
 struct sock *VAR_9 = VAR_7->sk;
 struct llc_sock *VAR_10 = FUNC_3(VAR_9);
 struct llc_sap *VAR_11;
 int VAR_12 = -VAR_1;

 if (!FUNC_6(VAR_9, VAR_5))
  goto out;
 VAR_12 = -VAR_2;
 VAR_10->dev = FUNC_0(&VAR_6, VAR_8->sllc_arphrd);
 if (!VAR_10->dev)
  goto out;
 VAR_12 = -VAR_3;
 VAR_10->laddr.lsap = FUNC_4();
 if (!VAR_10->laddr.lsap)
  goto out;
 VAR_12 = -VAR_0;
 VAR_11 = FUNC_2(VAR_10->laddr.lsap, ((void*)0));
 if (!VAR_11)
  goto out;
 FUNC_5(VAR_10->laddr.mac, VAR_10->dev->dev_addr, VAR_4);
 FUNC_5(&VAR_10->addr, VAR_8, sizeof(VAR_10->addr));

 FUNC_1(VAR_11, VAR_9);
 FUNC_7(VAR_9, VAR_5);
 VAR_12 = 0;
out:
 return VAR_12;
}
