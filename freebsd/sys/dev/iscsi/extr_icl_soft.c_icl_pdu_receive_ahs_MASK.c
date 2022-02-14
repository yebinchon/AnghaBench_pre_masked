
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icl_pdu {scalar_t__ ip_ahs_len; int * ip_ahs_mbuf; int ip_conn; } ;


 int FUNC_0 (char*) ;
 int * FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (struct icl_pdu*) ;

__attribute__((used)) static int
FUNC_3(struct icl_pdu *VAR_0, size_t *VAR_1)
{

 VAR_0->ip_ahs_len = FUNC_2(VAR_0);
 if (VAR_0->ip_ahs_len == 0)
  return (0);

 VAR_0->ip_ahs_mbuf = FUNC_1(VAR_0->ip_conn,
     VAR_0->ip_ahs_len);
 if (VAR_0->ip_ahs_mbuf == ((void*)0)) {
  FUNC_0("failed to receive AHS");
  return (-1);
 }

 *VAR_1 -= VAR_0->ip_ahs_len;
 return (0);
}
