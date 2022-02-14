
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_bhs {int dummy; } ;
struct icl_pdu {int ip_bhs; int ip_conn; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct icl_pdu *VAR_0, size_t *VAR_1)
{

 if (FUNC_1(VAR_0->ip_conn,
     VAR_0->ip_bhs, sizeof(struct iscsi_bhs))) {
  FUNC_0("failed to receive BHS");
  return (-1);
 }

 *VAR_1 -= sizeof(struct iscsi_bhs);
 return (0);
}
