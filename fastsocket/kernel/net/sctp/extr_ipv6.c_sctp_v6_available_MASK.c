
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sin6_addr; } ;
union sctp_addr {TYPE_1__ v6; } ;
struct sctp_sock {int v4mapped; } ;
struct in6_addr {int dummy; } ;
struct TYPE_4__ {int (* available ) (union sctp_addr*,struct sctp_sock*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct in6_addr*) ;
 int FUNC_1 (int *,struct in6_addr*,int *,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (int ) ;
 int FUNC_4 (struct sctp_sock*) ;
 int FUNC_5 (union sctp_addr*) ;
 int FUNC_6 (union sctp_addr*,struct sctp_sock*) ;

__attribute__((used)) static int FUNC_7(union sctp_addr *VAR_5, struct sctp_sock *VAR_6)
{
 int VAR_7;
 struct in6_addr *VAR_8 = (struct in6_addr *)&VAR_5->v6.sin6_addr;

 VAR_7 = FUNC_0(VAR_8);
 if (VAR_1 == VAR_7)
  return 1;
 if (VAR_7 == VAR_2) {
  if (VAR_6 && !VAR_6->v4mapped)
   return 0;
  if (VAR_6 && FUNC_2(FUNC_4(VAR_6)))
   return 0;
  FUNC_5(VAR_5);
  return FUNC_3(VAR_0)->available(VAR_5, VAR_6);
 }
 if (!(VAR_7 & VAR_3))
  return 0;

 return FUNC_1(&VAR_4, VAR_8, ((void*)0), 0);
}
