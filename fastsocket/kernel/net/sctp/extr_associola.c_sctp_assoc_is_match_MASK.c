
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ sin_port; } ;
union sctp_addr {TYPE_3__ v4; } ;
struct sctp_transport {int dummy; } ;
struct TYPE_8__ {int port; } ;
struct TYPE_5__ {int sk; TYPE_4__ bind_addr; } ;
struct TYPE_6__ {int port; } ;
struct sctp_association {TYPE_1__ base; TYPE_2__ peer; } ;


 scalar_t__ FUNC_0 (int ) ;
 struct sctp_transport* FUNC_1 (struct sctp_association*,union sctp_addr const*) ;
 scalar_t__ FUNC_2 (TYPE_4__*,union sctp_addr const*,int ) ;
 int FUNC_3 (int ) ;

struct sctp_transport *FUNC_4(struct sctp_association *VAR_0,
        const union sctp_addr *VAR_1,
        const union sctp_addr *VAR_2)
{
 struct sctp_transport *VAR_3;

 if ((FUNC_0(VAR_0->base.bind_addr.port) == VAR_1->v4.sin_port) &&
     (FUNC_0(VAR_0->peer.port) == VAR_2->v4.sin_port)) {
  VAR_3 = FUNC_1(VAR_0, VAR_2);
  if (!VAR_3)
   goto out;

  if (FUNC_2(&VAR_0->base.bind_addr, VAR_1,
      FUNC_3(VAR_0->base.sk)))
   goto out;
 }
 VAR_3 = ((void*)0);

out:
 return VAR_3;
}
