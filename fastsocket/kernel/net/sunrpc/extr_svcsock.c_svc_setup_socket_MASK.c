
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_sock {struct sock* sk_sk; struct socket* sk_sock; int sk_owspace; int sk_odata; int sk_ostate; } ;
struct svc_serv {int sv_max_mesg; } ;
struct socket {scalar_t__ type; struct sock* sk; } ;
struct sock {int sk_write_space; int sk_data_ready; int sk_state_change; struct svc_sock* sk_user_data; int sk_protocol; int sk_family; } ;
struct TYPE_2__ {int sport; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,...) ;
 TYPE_1__* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct svc_sock*) ;
 struct svc_sock* FUNC_3 (int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct svc_serv*,int ,int ,int ) ;
 int FUNC_6 (struct socket*,int,int) ;
 int FUNC_7 (struct svc_sock*,struct svc_serv*) ;
 int FUNC_8 (struct svc_sock*,struct svc_serv*) ;

__attribute__((used)) static struct svc_sock *FUNC_9(struct svc_serv *VAR_4,
      struct socket *VAR_5,
      int *VAR_6, int VAR_7)
{
 struct svc_sock *VAR_8;
 struct sock *VAR_9;
 int VAR_10 = !(VAR_7 & VAR_3);

 FUNC_0("svc: svc_setup_socket %p\n", VAR_5);
 if (!(VAR_8 = FUNC_3(sizeof(*VAR_8), VAR_1))) {
  *VAR_6 = -VAR_0;
  return ((void*)0);
 }

 VAR_9 = VAR_5->sk;


 if (*VAR_6 >= 0 && VAR_10)
  *VAR_6 = FUNC_5(VAR_4, VAR_9->sk_family, VAR_9->sk_protocol,
         FUNC_4(FUNC_1(VAR_9)->sport));

 if (*VAR_6 < 0) {
  FUNC_2(VAR_8);
  return ((void*)0);
 }

 VAR_9->sk_user_data = VAR_8;
 VAR_8->sk_sock = VAR_5;
 VAR_8->sk_sk = VAR_9;
 VAR_8->sk_ostate = VAR_9->sk_state_change;
 VAR_8->sk_odata = VAR_9->sk_data_ready;
 VAR_8->sk_owspace = VAR_9->sk_write_space;


 if (VAR_5->type == VAR_2)
  FUNC_8(VAR_8, VAR_4);
 else {



  FUNC_6(VAR_8->sk_sock, 4 * VAR_4->sv_max_mesg,
     4 * VAR_4->sv_max_mesg);
  FUNC_7(VAR_8, VAR_4);
 }

 FUNC_0("svc: svc_setup_socket created %p (inet %p)\n",
    VAR_8, VAR_8->sk_sk);

 return VAR_8;
}
