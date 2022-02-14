
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union sctp_addr {int dummy; } sctp_addr ;
struct sctp_chunk {int dest; int source; } ;


 int FUNC_0 (int *,union sctp_addr*,int) ;

void FUNC_1(struct sctp_chunk *VAR_0, union sctp_addr *VAR_1,
       union sctp_addr *VAR_2)
{
 FUNC_0(&VAR_0->source, VAR_1, sizeof(union sctp_addr));
 FUNC_0(&VAR_0->dest, VAR_2, sizeof(union sctp_addr));
}
