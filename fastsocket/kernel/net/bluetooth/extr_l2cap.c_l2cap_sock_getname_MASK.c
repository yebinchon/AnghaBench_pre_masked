
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sockaddr_l2 {void* l2_cid; int l2_bdaddr; int l2_psm; } ;
struct sockaddr {int sa_family; } ;
struct sock {int dummy; } ;
struct TYPE_4__ {int src; int dst; } ;
struct TYPE_3__ {int scid; int sport; int dcid; int psm; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct socket*,struct sock*) ;
 int FUNC_1 (int *,int *) ;
 TYPE_2__* FUNC_2 (struct sock*) ;
 void* FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sockaddr_l2*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct socket *VAR_1, struct sockaddr *VAR_2, int *VAR_3, int VAR_4)
{
 struct sockaddr_l2 *VAR_5 = (struct sockaddr_l2 *) VAR_2;
 struct sock *VAR_6 = VAR_1->sk;

 FUNC_0("sock %p, sk %p", VAR_1, VAR_6);

 FUNC_5(VAR_5, 0, sizeof(struct sockaddr_l2));
 VAR_2->sa_family = VAR_0;
 *VAR_3 = sizeof(struct sockaddr_l2);

 if (VAR_4) {
  VAR_5->l2_psm = FUNC_4(VAR_6)->psm;
  FUNC_1(&VAR_5->l2_bdaddr, &FUNC_2(VAR_6)->dst);
  VAR_5->l2_cid = FUNC_3(FUNC_4(VAR_6)->dcid);
 } else {
  VAR_5->l2_psm = FUNC_4(VAR_6)->sport;
  FUNC_1(&VAR_5->l2_bdaddr, &FUNC_2(VAR_6)->src);
  VAR_5->l2_cid = FUNC_3(FUNC_4(VAR_6)->scid);
 }

 return 0;
}
