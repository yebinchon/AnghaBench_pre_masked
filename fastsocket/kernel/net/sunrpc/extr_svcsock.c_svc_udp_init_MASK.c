
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int xpt_flags; TYPE_1__* xpt_server; } ;
struct svc_sock {int sk_sock; TYPE_2__* sk_sk; TYPE_3__ sk_xprt; } ;
struct svc_serv {int dummy; } ;
typedef int one ;
struct TYPE_5__ {int sk_family; int sk_write_space; int sk_data_ready; } ;
struct TYPE_4__ {int sv_max_mesg; } ;




 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int ,int,int,char*,int) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int *,TYPE_3__*,struct svc_serv*) ;

__attribute__((used)) static void FUNC_7(struct svc_sock *VAR_10, struct svc_serv *VAR_11)
{
 int VAR_12, VAR_13, VAR_14, VAR_15 = 1;

 FUNC_6(&VAR_7, &VAR_10->sk_xprt, VAR_11);
 FUNC_1(VAR_4, &VAR_10->sk_xprt.xpt_flags);
 VAR_10->sk_sk->sk_data_ready = VAR_8;
 VAR_10->sk_sk->sk_write_space = VAR_9;





 FUNC_5(VAR_10->sk_sock,
       3 * VAR_10->sk_xprt.xpt_server->sv_max_mesg,
       3 * VAR_10->sk_xprt.xpt_server->sv_max_mesg);


 FUNC_4(VAR_6, &VAR_10->sk_xprt.xpt_flags);
 FUNC_4(VAR_5, &VAR_10->sk_xprt.xpt_flags);


 switch (VAR_10->sk_sk->sk_family) {
 case 129:
  VAR_13 = VAR_2;
  VAR_14 = VAR_1;
  break;
 case 128:
  VAR_13 = VAR_3;
  VAR_14 = VAR_0;
  break;
 default:
  FUNC_0();
 }
 VAR_12 = FUNC_3(VAR_10->sk_sock, VAR_13, VAR_14,
     (char *)&VAR_15, sizeof(VAR_15));
 FUNC_2("svc: kernel_setsockopt returned %d\n", VAR_12);
}
