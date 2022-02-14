
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int sin6_addr; int sin6_scope_id; } ;
struct TYPE_4__ {scalar_t__ sa_family; } ;
union sctp_addr {TYPE_2__ v6; TYPE_1__ sa; } ;
struct sctp_sock {TYPE_3__* pf; int v4mapped; } ;
struct sctp_af {int (* available ) (union sctp_addr*,struct sctp_sock*) ;} ;
struct net_device {int dummy; } ;
struct TYPE_6__ {struct sctp_af* af; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct net_device* FUNC_0 (int *,int ) ;
 int FUNC_1 (struct net_device*) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,struct net_device*,int ) ;
 struct sctp_af* FUNC_4 (scalar_t__) ;
 int FUNC_5 (union sctp_addr*,struct sctp_sock*) ;

__attribute__((used)) static int FUNC_6(struct sctp_sock *VAR_4, union sctp_addr *VAR_5)
{
 struct sctp_af *VAR_6;


 if (VAR_5->sa.sa_family != VAR_0)
  VAR_6 = FUNC_4(VAR_5->sa.sa_family);
 else {
  int VAR_7 = FUNC_2(&VAR_5->v6.sin6_addr);
  struct net_device *VAR_8;

  if (VAR_7 & VAR_1) {
   if (!VAR_5->v6.sin6_scope_id)
    return 0;
   VAR_8 = FUNC_0(&VAR_3, VAR_5->v6.sin6_scope_id);
   if (!VAR_8)
    return 0;
   if (!FUNC_3(&VAR_3, &VAR_5->v6.sin6_addr,
        VAR_8, 0)) {
    FUNC_1(VAR_8);
    return 0;
   }
   FUNC_1(VAR_8);
  } else if (VAR_7 == VAR_2) {
   if (!VAR_4->v4mapped)
    return 0;
  }

  VAR_6 = VAR_4->pf->af;
 }
 return VAR_6->available(VAR_5, VAR_4);
}
