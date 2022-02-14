
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ sin_port; } ;
struct TYPE_5__ {int sa_family; } ;
union sctp_addr {TYPE_3__ v4; TYPE_2__ sa; } ;
struct sockaddr {int dummy; } ;
struct sock {int dummy; } ;
struct sctp_sock {struct sctp_endpoint* ep; } ;
struct sctp_bind_addr {int port; int address_list; } ;
struct TYPE_4__ {struct sctp_bind_addr bind_addr; } ;
struct sctp_endpoint {TYPE_1__ base; } ;
struct sctp_af {int sockaddr_len; int (* addr_valid ) (union sctp_addr*,struct sctp_sock*,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,struct sock*,struct sockaddr*,int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct sock*,struct sockaddr*,int) ;
 int FUNC_4 (struct sctp_bind_addr*,union sctp_addr*) ;
 struct sctp_af* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *) ;
 struct sctp_sock* FUNC_7 (struct sock*) ;
 int FUNC_8 (union sctp_addr*,struct sctp_sock*,int *) ;

__attribute__((used)) static int FUNC_9(struct sock *VAR_3, struct sockaddr *VAR_4, int VAR_5)
{
 struct sctp_sock *VAR_6 = FUNC_7(VAR_3);
 struct sctp_endpoint *VAR_7 = VAR_6->ep;
 int VAR_8;
 struct sctp_bind_addr *VAR_9 = &VAR_7->base.bind_addr;
 int VAR_10 = 0;
 void *VAR_11;
 union sctp_addr *VAR_12;
 struct sctp_af *VAR_13;

 FUNC_0("sctp_bindx_rem (sk: %p, addrs: %p, addrcnt: %d)\n",
     VAR_3, VAR_4, VAR_5);

 VAR_11 = VAR_4;
 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {




  if (FUNC_2(&VAR_9->address_list) ||
      (FUNC_6(&VAR_9->address_list))) {
   VAR_10 = -VAR_1;
   goto err_bindx_rem;
  }

  VAR_12 = (union sctp_addr *)VAR_11;
  VAR_13 = FUNC_5(VAR_12->sa.sa_family);
  if (!VAR_13) {
   VAR_10 = -VAR_2;
   goto err_bindx_rem;
  }

  if (!VAR_13->addr_valid(VAR_12, VAR_6, ((void*)0))) {
   VAR_10 = -VAR_0;
   goto err_bindx_rem;
  }

  if (VAR_12->v4.sin_port &&
      VAR_12->v4.sin_port != FUNC_1(VAR_9->port)) {
   VAR_10 = -VAR_2;
   goto err_bindx_rem;
  }

  if (!VAR_12->v4.sin_port)
   VAR_12->v4.sin_port = FUNC_1(VAR_9->port);
  VAR_10 = FUNC_4(VAR_9, VAR_12);

  VAR_11 += VAR_13->sockaddr_len;
err_bindx_rem:
  if (VAR_10 < 0) {

   if (VAR_8 > 0)
    FUNC_3(VAR_3, VAR_4, VAR_8);
   return VAR_10;
  }
 }

 return VAR_10;
}
