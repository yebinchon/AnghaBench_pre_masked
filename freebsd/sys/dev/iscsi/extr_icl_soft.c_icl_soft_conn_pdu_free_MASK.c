
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icl_pdu {int ip_data_mbuf; int ip_ahs_mbuf; int ip_bhs_mbuf; } ;
struct icl_conn {int ic_outstanding_pdus; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct icl_pdu*) ;

__attribute__((used)) static void
FUNC_3(struct icl_conn *VAR_1, struct icl_pdu *VAR_2)
{

 FUNC_0(VAR_2->ip_bhs_mbuf);
 FUNC_0(VAR_2->ip_ahs_mbuf);
 FUNC_0(VAR_2->ip_data_mbuf);
 FUNC_2(VAR_0, VAR_2);



}
