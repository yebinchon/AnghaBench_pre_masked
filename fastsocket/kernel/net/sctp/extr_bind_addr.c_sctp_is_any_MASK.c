
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned short sa_family; } ;
union sctp_addr {TYPE_1__ sa; } ;
struct sock {unsigned short sk_family; } ;
struct sctp_af {int (* is_any ) (union sctp_addr const*) ;} ;


 unsigned short VAR_0 ;
 struct sctp_af* FUNC_0 (unsigned short) ;
 int FUNC_1 (union sctp_addr const*) ;

int FUNC_2(struct sock *VAR_1, const union sctp_addr *VAR_2)
{
 unsigned short VAR_3 = 0;
 struct sctp_af *VAR_4;


 if (VAR_2->sa.sa_family != VAR_0)
  VAR_3 = VAR_2->sa.sa_family;
 else if (VAR_1)
  VAR_3 = VAR_1->sk_family;

 VAR_4 = FUNC_0(VAR_3);
 if (!VAR_4)
  return 0;

 return VAR_4->is_any(VAR_2);
}
