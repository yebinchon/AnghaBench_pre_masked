
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sockaddr_l2 {scalar_t__ l2_cid; scalar_t__ l2_psm; void* l2_family; int l2_bdaddr; } ;
struct sockaddr {int dummy; } ;
struct sock {int dummy; } ;
struct rfcomm_session {int initiator; } ;
typedef int bdaddr_t ;
typedef int addr ;
struct TYPE_2__ {int imtu; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct socket*,struct sockaddr*,int) ;
 int FUNC_5 (struct socket*,struct sockaddr*,int,int ) ;
 int VAR_6 ;
 TYPE_1__* FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (struct socket**) ;
 struct rfcomm_session* FUNC_10 (struct socket*,int ) ;
 int FUNC_11 (struct rfcomm_session*) ;
 int FUNC_12 (struct socket*) ;

__attribute__((used)) static struct rfcomm_session *FUNC_13(bdaddr_t *VAR_7, bdaddr_t *VAR_8, int *VAR_9)
{
 struct rfcomm_session *VAR_10 = ((void*)0);
 struct sockaddr_l2 VAR_11;
 struct socket *VAR_12;
 struct sock *VAR_13;

 FUNC_0("%s %s", FUNC_2(VAR_7), FUNC_2(VAR_8));

 *VAR_9 = FUNC_9(&VAR_12);
 if (*VAR_9 < 0)
  return ((void*)0);

 FUNC_1(&VAR_11.l2_bdaddr, VAR_7);
 VAR_11.l2_family = VAR_0;
 VAR_11.l2_psm = 0;
 VAR_11.l2_cid = 0;
 *VAR_9 = FUNC_4(VAR_12, (struct sockaddr *) &VAR_11, sizeof(VAR_11));
 if (*VAR_9 < 0)
  goto failed;


 VAR_13 = VAR_12->sk;
 FUNC_7(VAR_13);
 FUNC_6(VAR_13)->imtu = VAR_6;
 FUNC_8(VAR_13);

 VAR_10 = FUNC_10(VAR_12, VAR_1);
 if (!VAR_10) {
  *VAR_9 = -VAR_3;
  goto failed;
 }

 VAR_10->initiator = 1;

 FUNC_1(&VAR_11.l2_bdaddr, VAR_8);
 VAR_11.l2_family = VAR_0;
 VAR_11.l2_psm = FUNC_3(VAR_5);
 VAR_11.l2_cid = 0;
 *VAR_9 = FUNC_5(VAR_12, (struct sockaddr *) &VAR_11, sizeof(VAR_11), VAR_4);
 if (*VAR_9 == 0 || *VAR_9 == -VAR_2)
  return VAR_10;

 FUNC_11(VAR_10);
 return ((void*)0);

failed:
 FUNC_12(VAR_12);
 return ((void*)0);
}
