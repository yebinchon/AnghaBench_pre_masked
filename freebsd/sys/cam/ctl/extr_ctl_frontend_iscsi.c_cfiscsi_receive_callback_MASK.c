
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icl_pdu {int dummy; } ;
struct cfiscsi_session {int cs_login_cv; struct icl_pdu* cs_login_pdu; scalar_t__ cs_login_phase; scalar_t__ cs_waiting_for_ctld; } ;


 struct cfiscsi_session* FUNC_0 (struct icl_pdu*) ;
 int FUNC_1 (struct icl_pdu*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct icl_pdu*) ;

__attribute__((used)) static void
FUNC_4(struct icl_pdu *VAR_0)
{
 FUNC_1(VAR_0);
}
