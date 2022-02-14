
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union sctp_addr {int dummy; } sctp_addr ;
struct sockaddr_storage {int dummy; } ;
struct sk_buff {int dummy; } ;
struct sctp_ulpevent {int dummy; } ;
struct sctp_paddr_change {int spc_length; int spc_state; int spc_error; int spc_aaddr; int spc_assoc_id; scalar_t__ spc_flags; int spc_type; } ;
struct TYPE_4__ {TYPE_2__* sk; } ;
struct sctp_association {TYPE_1__ base; } ;
typedef int gfp_t ;
struct TYPE_6__ {int (* addr_v4map ) (int ,union sctp_addr*) ;} ;
struct TYPE_5__ {int sk_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct sockaddr_storage const*,int) ;
 int FUNC_1 (struct sctp_association const*) ;
 struct sk_buff* FUNC_2 (struct sctp_ulpevent*) ;
 TYPE_3__* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 struct sctp_ulpevent* FUNC_5 (int,int ,int ) ;
 int FUNC_6 (struct sctp_ulpevent*,struct sctp_association const*) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (int ,union sctp_addr*) ;

struct sctp_ulpevent *FUNC_9(
 const struct sctp_association *VAR_2,
 const struct sockaddr_storage *VAR_3,
 int VAR_4, int VAR_5, int VAR_6, gfp_t VAR_7)
{
 struct sctp_ulpevent *VAR_8;
 struct sctp_paddr_change *VAR_9;
 struct sk_buff *VAR_10;

 VAR_8 = FUNC_5(sizeof(struct sctp_paddr_change),
      VAR_0, VAR_7);
 if (!VAR_8)
  goto fail;

 VAR_10 = FUNC_2(VAR_8);
 VAR_9 = (struct sctp_paddr_change *)
  FUNC_7(VAR_10, sizeof(struct sctp_paddr_change));
 VAR_9->spc_type = VAR_1;
 VAR_9->spc_length = sizeof(struct sctp_paddr_change);







 VAR_9->spc_flags = 0;
 VAR_9->spc_state = VAR_5;
 VAR_9->spc_error = VAR_6;
 FUNC_6(VAR_8, VAR_2);
 VAR_9->spc_assoc_id = FUNC_1(VAR_2);
 FUNC_0(&VAR_9->spc_aaddr, VAR_3, sizeof(struct sockaddr_storage));


 FUNC_3(VAR_2->base.sk->sk_family)->addr_v4map(
     FUNC_4(VAR_2->base.sk),
     (union sctp_addr *)&VAR_9->spc_aaddr);

 return VAR_8;

fail:
 return ((void*)0);
}
