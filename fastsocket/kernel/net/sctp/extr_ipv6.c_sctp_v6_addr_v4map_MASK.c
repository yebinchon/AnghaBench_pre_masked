
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sa_family; } ;
union sctp_addr {TYPE_1__ sa; } ;
struct sctp_sock {scalar_t__ v4mapped; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (union sctp_addr*) ;

__attribute__((used)) static void FUNC_1(struct sctp_sock *VAR_1, union sctp_addr *VAR_2)
{
 if (VAR_1->v4mapped && VAR_0 == VAR_2->sa.sa_family)
  FUNC_0(VAR_2);
}
