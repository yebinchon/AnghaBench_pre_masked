
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union sctp_addr {int dummy; } sctp_addr ;
struct sctp_transport {int dummy; } ;
struct sctp_association {int dummy; } ;


 int FUNC_0 (struct sctp_association*) ;
 struct sctp_association* FUNC_1 (union sctp_addr const*,union sctp_addr const*,struct sctp_transport**) ;

int FUNC_2(const union sctp_addr *VAR_0,
    const union sctp_addr *VAR_1)
{
 struct sctp_association *VAR_2;
 struct sctp_transport *VAR_3;

 if ((VAR_2 = FUNC_1(VAR_0, VAR_1, &VAR_3))) {
  FUNC_0(VAR_2);
  return 1;
 }

 return 0;
}
