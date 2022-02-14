
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef union sctp_addr {int dummy; } sctp_addr ;
struct sock {int dummy; } ;
struct sctp_af {int (* addr_valid ) (union sctp_addr*,TYPE_2__*,int *) ;} ;
struct TYPE_7__ {TYPE_1__* pf; } ;
struct TYPE_6__ {int (* send_verify ) (TYPE_2__*,union sctp_addr*) ;} ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct sock*) ;
 struct sctp_af* FUNC_1 (TYPE_2__*,union sctp_addr*,int) ;
 int FUNC_2 (union sctp_addr*,TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_2__*,union sctp_addr*) ;

__attribute__((used)) static inline int FUNC_4(struct sock *VAR_1, union sctp_addr *VAR_2,
       int VAR_3)
{
 struct sctp_af *VAR_4;


 VAR_4 = FUNC_1(FUNC_0(VAR_1), VAR_2, VAR_3);
 if (!VAR_4)
  return -VAR_0;


 if (!VAR_4->addr_valid(VAR_2, FUNC_0(VAR_1), ((void*)0)))
  return -VAR_0;

 if (!FUNC_0(VAR_1)->pf->send_verify(FUNC_0(VAR_1), (VAR_2)))
  return -VAR_0;

 return 0;
}
