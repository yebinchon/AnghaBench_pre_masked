
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icl_pdu {scalar_t__ ip_data_mbuf; } ;
struct icl_conn {int dummy; } ;


 int FUNC_0 (void*,scalar_t__,size_t) ;

void
FUNC_1(struct icl_conn *VAR_0, struct icl_pdu *VAR_1,
         size_t VAR_2, void *VAR_3, size_t VAR_4)
{

 if (VAR_1->ip_data_mbuf)
  FUNC_0(VAR_3, VAR_1->ip_data_mbuf + VAR_2, VAR_4);
}
