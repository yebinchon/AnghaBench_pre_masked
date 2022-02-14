
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union sctp_addr {int dummy; } sctp_addr ;
struct sockaddr_storage {int dummy; } ;
struct sock {int sk_family; } ;
struct sctp_transport {int dummy; } ;
struct sctp_association {int dummy; } ;
typedef int sctp_assoc_t ;
struct TYPE_5__ {int (* addr_v4map ) (TYPE_1__*,union sctp_addr*) ;} ;
struct TYPE_4__ {int ep; } ;


 struct sctp_association* FUNC_0 (int ,union sctp_addr*,struct sctp_transport**) ;
 TYPE_3__* FUNC_1 (int ) ;
 struct sctp_association* FUNC_2 (struct sock*,int ) ;
 TYPE_1__* FUNC_3 (struct sock*) ;
 int FUNC_4 (TYPE_1__*,union sctp_addr*) ;

__attribute__((used)) static struct sctp_transport *FUNC_5(struct sock *VAR_0,
           struct sockaddr_storage *VAR_1,
           sctp_assoc_t VAR_2)
{
 struct sctp_association *VAR_3 = ((void*)0), *VAR_4 = ((void*)0);
 struct sctp_transport *VAR_5;
 union sctp_addr *VAR_6 = (union sctp_addr *)VAR_1;

 VAR_3 = FUNC_0(FUNC_3(VAR_0)->ep,
            VAR_6,
            &VAR_5);

 if (!VAR_3)
  return ((void*)0);

 VAR_4 = FUNC_2(VAR_0, VAR_2);
 if (VAR_4 && (VAR_4 != VAR_3))
  return ((void*)0);

 FUNC_1(VAR_0->sk_family)->addr_v4map(FUNC_3(VAR_0),
      (union sctp_addr *)VAR_1);

 return VAR_5;
}
