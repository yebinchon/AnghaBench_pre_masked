
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int se_process; } ;
typedef TYPE_1__ session_t ;
struct TYPE_9__ {scalar_t__ (* del ) (TYPE_3__*,TYPE_2__*,int ) ;} ;
struct TYPE_8__ {int size; int * data; } ;
typedef TYPE_2__ DBT ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_3__*,TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_3(session_t *VAR_2)
{
 DBT VAR_3;

 VAR_3.data = &VAR_2->se_process;
 VAR_3.size = sizeof VAR_2->se_process;

 if ((*VAR_1->del)(VAR_1, &VAR_3, 0))
  FUNC_0("delete %d: %s", VAR_2->se_process, FUNC_1(VAR_0));
}
