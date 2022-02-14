
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sin6_addr; } ;
union sctp_addr {TYPE_1__ v6; } ;
struct sk_buff {int dummy; } ;
struct sctp_sock {int v4mapped; } ;
struct TYPE_4__ {int (* addr_valid ) (union sctp_addr*,struct sctp_sock*,struct sk_buff const*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int ) ;
 int FUNC_3 (struct sctp_sock*) ;
 int FUNC_4 (union sctp_addr*) ;
 int FUNC_5 (union sctp_addr*,struct sctp_sock*,struct sk_buff const*) ;

__attribute__((used)) static int FUNC_6(union sctp_addr *VAR_3,
         struct sctp_sock *VAR_4,
         const struct sk_buff *VAR_5)
{
 int VAR_6 = FUNC_0(&VAR_3->v6.sin6_addr);


 if (VAR_6 == VAR_1) {



  if (!VAR_4 || !VAR_4->v4mapped)
   return 0;
  if (VAR_4 && FUNC_1(FUNC_3(VAR_4)))
   return 0;
  FUNC_4(VAR_3);
  return FUNC_2(VAR_0)->addr_valid(VAR_3, VAR_4, VAR_5);
 }


 if (!(VAR_6 & VAR_2))
  return 0;

 return 1;
}
