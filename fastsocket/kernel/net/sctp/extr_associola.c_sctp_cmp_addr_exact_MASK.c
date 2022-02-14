
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sa_family; } ;
union sctp_addr {TYPE_1__ sa; } ;
struct sctp_af {int (* cmp_addr ) (union sctp_addr const*,union sctp_addr const*) ;} ;


 struct sctp_af* FUNC_0 (int ) ;
 int FUNC_1 (union sctp_addr const*,union sctp_addr const*) ;
 scalar_t__ FUNC_2 (int) ;

int FUNC_3(const union sctp_addr *VAR_0,
   const union sctp_addr *VAR_1)
{
 struct sctp_af *VAR_2;

 VAR_2 = FUNC_0(VAR_0->sa.sa_family);
 if (FUNC_2(!VAR_2))
  return 0;

 return VAR_2->cmp_addr(VAR_0, VAR_1);
}
