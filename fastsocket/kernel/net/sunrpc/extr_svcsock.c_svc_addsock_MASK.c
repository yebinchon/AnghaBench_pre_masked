
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int xpt_list; int xpt_flags; } ;
struct svc_sock {TYPE_2__ sk_xprt; int sk_sock; } ;
struct svc_serv {int sv_lock; int sv_permsocks; } ;
struct socket {scalar_t__ state; TYPE_1__* sk; } ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
struct TYPE_4__ {scalar_t__ sk_family; scalar_t__ sk_protocol; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int ,struct sockaddr*,int*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ) ;
 struct socket* FUNC_4 (int const,int*) ;
 int FUNC_5 (struct socket*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct svc_sock*,char*,size_t const) ;
 struct svc_sock* FUNC_9 (struct svc_serv*,struct socket*,int*,int ) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*,struct sockaddr*,int) ;
 int FUNC_12 (int ) ;

int FUNC_13(struct svc_serv *VAR_12, const int VAR_13, char *VAR_14,
  const size_t VAR_15)
{
 int VAR_16 = 0;
 struct socket *VAR_17 = FUNC_4(VAR_13, &VAR_16);
 struct svc_sock *VAR_18 = ((void*)0);

 if (!VAR_17)
  return VAR_16;
 if ((VAR_17->sk->sk_family != VAR_6) && (VAR_17->sk->sk_family != VAR_7))
  VAR_16 = -VAR_0;
 else if (VAR_17->sk->sk_protocol != VAR_4 &&
     VAR_17->sk->sk_protocol != VAR_5)
  VAR_16 = -VAR_3;
 else if (VAR_17->state > VAR_8)
  VAR_16 = -VAR_1;
 else {
  if (!FUNC_12(VAR_10))
   VAR_16 = -VAR_2;
  else
   VAR_18 = FUNC_9(VAR_12, VAR_17, &VAR_16,
      VAR_9);
  if (VAR_18) {
   struct sockaddr_storage VAR_19;
   struct sockaddr *VAR_20 = (struct sockaddr *)&VAR_19;
   int VAR_21;
   if (FUNC_1(VAR_18->sk_sock, VAR_20, &VAR_21) == 0)
    FUNC_11(&VAR_18->sk_xprt, VAR_20, VAR_21);
   FUNC_0(VAR_11, &VAR_18->sk_xprt.xpt_flags);
   FUNC_6(&VAR_12->sv_lock);
   FUNC_2(&VAR_18->sk_xprt.xpt_list, &VAR_12->sv_permsocks);
   FUNC_7(&VAR_12->sv_lock);
   FUNC_10(&VAR_18->sk_xprt);
   VAR_16 = 0;
  } else
   FUNC_3(VAR_10);
 }
 if (VAR_16) {
  FUNC_5(VAR_17);
  return VAR_16;
 }
 return FUNC_8(VAR_18, VAR_14, VAR_15);
}
