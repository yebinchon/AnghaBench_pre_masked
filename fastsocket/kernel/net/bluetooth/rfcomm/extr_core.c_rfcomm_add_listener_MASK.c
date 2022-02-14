
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sockaddr_l2 {scalar_t__ l2_cid; int l2_psm; int l2_family; int l2_bdaddr; } ;
struct sockaddr {int dummy; } ;
struct sock {int dummy; } ;
struct rfcomm_session {int dummy; } ;
typedef int bdaddr_t ;
typedef int addr ;
struct TYPE_2__ {int imtu; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct socket*,struct sockaddr*,int) ;
 int FUNC_4 (struct socket*,int) ;
 int VAR_3 ;
 TYPE_1__* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (struct socket**) ;
 struct rfcomm_session* FUNC_9 (struct socket*,int ) ;
 int FUNC_10 (struct rfcomm_session*) ;
 int FUNC_11 (struct socket*) ;

__attribute__((used)) static int FUNC_12(bdaddr_t *VAR_4)
{
 struct sockaddr_l2 VAR_5;
 struct socket *VAR_6;
 struct sock *VAR_7;
 struct rfcomm_session *VAR_8;
 int VAR_9 = 0;


 VAR_9 = FUNC_8(&VAR_6);
 if (VAR_9 < 0) {
  FUNC_0("Create socket failed %d", VAR_9);
  return VAR_9;
 }


 FUNC_1(&VAR_5.l2_bdaddr, VAR_4);
 VAR_5.l2_family = VAR_0;
 VAR_5.l2_psm = FUNC_2(VAR_2);
 VAR_5.l2_cid = 0;
 VAR_9 = FUNC_3(VAR_6, (struct sockaddr *) &VAR_5, sizeof(VAR_5));
 if (VAR_9 < 0) {
  FUNC_0("Bind failed %d", VAR_9);
  goto failed;
 }


 VAR_7 = VAR_6->sk;
 FUNC_6(VAR_7);
 FUNC_5(VAR_7)->imtu = VAR_3;
 FUNC_7(VAR_7);


 VAR_9 = FUNC_4(VAR_6, 10);
 if (VAR_9) {
  FUNC_0("Listen failed %d", VAR_9);
  goto failed;
 }


 VAR_8 = FUNC_9(VAR_6, VAR_1);
 if (!VAR_8)
  goto failed;

 FUNC_10(VAR_8);
 return 0;
failed:
 FUNC_11(VAR_6);
 return VAR_9;
}
