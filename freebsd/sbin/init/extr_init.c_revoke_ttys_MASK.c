
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int se_device; int se_process; int se_flags; struct TYPE_3__* se_next; } ;
typedef TYPE_1__ session_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void
FUNC_2(void)
{
 session_t *VAR_3;

 for (VAR_3 = VAR_2; VAR_3; VAR_3 = VAR_3->se_next) {
  VAR_3->se_flags |= VAR_0;
  FUNC_0(VAR_3->se_process, VAR_1);
  FUNC_1(VAR_3->se_device);
 }
}
