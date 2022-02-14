
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sin6_scope_id; int sin6_addr; } ;
struct TYPE_6__ {scalar_t__ sa_family; } ;
union sctp_addr {TYPE_1__ v6; TYPE_3__ sa; } ;
struct sctp_sock {TYPE_2__* pf; } ;
struct sctp_af {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_5__ {struct sctp_af* af; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct net_device* FUNC_0 (int *,int ) ;
 int FUNC_1 (struct net_device*) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 struct sctp_af* FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct sctp_sock *VAR_3, union sctp_addr *VAR_4)
{
 struct sctp_af *VAR_5 = ((void*)0);


 if (VAR_4->sa.sa_family != VAR_0)
  VAR_5 = FUNC_3(VAR_4->sa.sa_family);
 else {
  int VAR_6 = FUNC_2(&VAR_4->v6.sin6_addr);
  struct net_device *VAR_7;

  if (VAR_6 & VAR_1) {
   if (!VAR_4->v6.sin6_scope_id)
    return 0;
   VAR_7 = FUNC_0(&VAR_2, VAR_4->v6.sin6_scope_id);
   if (!VAR_7)
    return 0;
   FUNC_1(VAR_7);
  }
  VAR_5 = VAR_3->pf->af;
 }

 return VAR_5 != ((void*)0);
}
