
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* se_type; struct TYPE_4__* se_window_argv; struct TYPE_4__* se_window_argv_space; struct TYPE_4__* se_window; struct TYPE_4__* se_getty_argv; struct TYPE_4__* se_getty_argv_space; struct TYPE_4__* se_getty; struct TYPE_4__* se_device; } ;
typedef TYPE_1__ session_t ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(session_t *VAR_0)
{
 FUNC_0(VAR_0->se_device);
 if (VAR_0->se_getty) {
  FUNC_0(VAR_0->se_getty);
  FUNC_0(VAR_0->se_getty_argv_space);
  FUNC_0(VAR_0->se_getty_argv);
 }
 if (VAR_0->se_window) {
  FUNC_0(VAR_0->se_window);
  FUNC_0(VAR_0->se_window_argv_space);
  FUNC_0(VAR_0->se_window_argv);
 }
 if (VAR_0->se_type)
  FUNC_0(VAR_0->se_type);
 FUNC_0(VAR_0);
}
