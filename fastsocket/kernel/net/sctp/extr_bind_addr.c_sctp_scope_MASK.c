
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sa_family; } ;
union sctp_addr {TYPE_1__ sa; } ;
struct sctp_af {int (* scope ) (union sctp_addr*) ;} ;
typedef int sctp_scope_t ;


 int VAR_0 ;
 struct sctp_af* FUNC_0 (int ) ;
 int FUNC_1 (union sctp_addr*) ;

sctp_scope_t FUNC_2(const union sctp_addr *VAR_1)
{
 struct sctp_af *VAR_2;

 VAR_2 = FUNC_0(VAR_1->sa.sa_family);
 if (!VAR_2)
  return VAR_0;

 return VAR_2->scope((union sctp_addr *)VAR_1);
}
