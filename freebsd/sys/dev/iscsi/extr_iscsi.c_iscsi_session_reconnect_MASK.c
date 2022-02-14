
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_session {int is_reconnecting; int is_maintenance_cv; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct iscsi_session *VAR_0)
{






 if (VAR_0->is_reconnecting)
  return;

 VAR_0->is_reconnecting = 1;
 FUNC_0(&VAR_0->is_maintenance_cv);
}
