
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union sctp_addr {int dummy; } sctp_addr ;
struct sock {int dummy; } ;
struct sctp_af {int sockaddr_len; int (* inaddr_any ) (union sctp_addr*,int ) ;} ;
typedef int __be16 ;
struct TYPE_6__ {int num; } ;
struct TYPE_5__ {TYPE_1__* pf; } ;
struct TYPE_4__ {struct sctp_af* af; } ;


 int FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,union sctp_addr*,int ) ;
 TYPE_2__* FUNC_3 (struct sock*) ;
 int FUNC_4 (union sctp_addr*,int ) ;

__attribute__((used)) static int FUNC_5(struct sock *VAR_0)
{
 union sctp_addr VAR_1;
 struct sctp_af *VAR_2;
 __be16 VAR_3;


 VAR_2 = FUNC_3(VAR_0)->pf->af;

 VAR_3 = FUNC_0(FUNC_1(VAR_0)->num);
 VAR_2->inaddr_any(&VAR_1, VAR_3);

 return FUNC_2(VAR_0, &VAR_1, VAR_2->sockaddr_len);
}
