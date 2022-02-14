
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ip_vs_service {scalar_t__ af; } ;
struct TYPE_2__ {int ip; int in6; } ;
struct ip_vs_dest_user_kern {int weight; int conn_flags; scalar_t__ u_threshold; int l_threshold; TYPE_1__ addr; } ;
struct ip_vs_dest {scalar_t__ u_threshold; int l_threshold; int flags; int stats; struct ip_vs_service* svc; int conn_flags; int weight; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct ip_vs_dest*,struct ip_vs_service*) ;
 int VAR_10 ;
 int FUNC_2 (struct ip_vs_dest*) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int VAR_11 ;
 int FUNC_5 (struct ip_vs_dest*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(struct ip_vs_service *VAR_12,
      struct ip_vs_dest *VAR_13, struct ip_vs_dest_user_kern *VAR_14)
{
 int VAR_15;


 FUNC_3(&VAR_13->weight, VAR_14->weight);
 VAR_15 = VAR_14->conn_flags & VAR_1;
 VAR_15 |= VAR_3;
  if (FUNC_4(&VAR_11, VAR_14->addr.ip) == VAR_9) {
   VAR_15 = (VAR_15 & ~VAR_2)
    | VAR_4;
  }


 if ((VAR_15 & VAR_2) != VAR_5) {
  VAR_15 |= VAR_6;
 } else {




  FUNC_7(&VAR_10);
  FUNC_5(VAR_13);
  FUNC_8(&VAR_10);
 }
 FUNC_3(&VAR_13->conn_flags, VAR_15);


 if (!VAR_13->svc) {
  FUNC_1(VAR_13, VAR_12);
 } else {
  if (VAR_13->svc != VAR_12) {
   FUNC_2(VAR_13);
   FUNC_6(&VAR_13->stats);
   FUNC_1(VAR_13, VAR_12);
  }
 }


 VAR_13->flags |= VAR_7;

 if (VAR_14->u_threshold == 0 || VAR_14->u_threshold > VAR_13->u_threshold)
  VAR_13->flags &= ~VAR_8;
 VAR_13->u_threshold = VAR_14->u_threshold;
 VAR_13->l_threshold = VAR_14->l_threshold;
}
