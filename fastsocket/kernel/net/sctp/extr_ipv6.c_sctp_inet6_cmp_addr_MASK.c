
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sa_family; } ;
union sctp_addr {TYPE_1__ sa; } ;
struct sock {int dummy; } ;
struct sctp_sock {int dummy; } ;
struct sctp_af {int (* cmp_addr ) (union sctp_addr const*,union sctp_addr const*) ;} ;


 scalar_t__ FUNC_0 (struct sock*) ;
 struct sctp_af* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct sock*,union sctp_addr const*) ;
 struct sock* FUNC_3 (struct sctp_sock*) ;
 int FUNC_4 (union sctp_addr const*,union sctp_addr const*) ;

__attribute__((used)) static int FUNC_5(const union sctp_addr *VAR_0,
          const union sctp_addr *VAR_1,
          struct sctp_sock *VAR_2)
{
 struct sctp_af *VAR_3, *VAR_4;
 struct sock *VAR_5 = FUNC_3(VAR_2);

 VAR_3 = FUNC_1(VAR_0->sa.sa_family);
 VAR_4 = FUNC_1(VAR_1->sa.sa_family);

 if (!VAR_3 || !VAR_4)
  return 0;


 if (FUNC_0(VAR_5) && VAR_3 != VAR_4)
  return 0;


 if (FUNC_2(VAR_5, VAR_0) || FUNC_2(VAR_5, VAR_1))
  return 1;

 if (VAR_0->sa.sa_family != VAR_1->sa.sa_family)
  return 0;

 return VAR_3->cmp_addr(VAR_0, VAR_1);
}
