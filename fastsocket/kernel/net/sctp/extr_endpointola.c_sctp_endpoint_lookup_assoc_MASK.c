
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union sctp_addr {int dummy; } sctp_addr ;
struct sctp_transport {int dummy; } ;
struct sctp_endpoint {int dummy; } ;
struct sctp_association {int dummy; } ;


 struct sctp_association* FUNC_0 (struct sctp_endpoint const*,union sctp_addr const*,struct sctp_transport**) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

struct sctp_association *FUNC_3(
 const struct sctp_endpoint *VAR_0,
 const union sctp_addr *VAR_1,
 struct sctp_transport **VAR_2)
{
 struct sctp_association *VAR_3;

 FUNC_1();
 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_2();

 return VAR_3;
}
