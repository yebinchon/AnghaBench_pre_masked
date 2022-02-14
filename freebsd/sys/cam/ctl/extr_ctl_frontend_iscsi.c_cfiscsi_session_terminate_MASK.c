
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfiscsi_session {int cs_terminating; int cs_login_cv; int cs_maintenance_cv; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct cfiscsi_session *VAR_0)
{

 VAR_0->cs_terminating = 1;
 FUNC_0(&VAR_0->cs_maintenance_cv);



}
