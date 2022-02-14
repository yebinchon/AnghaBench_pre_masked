
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {struct TYPE_9__* se_process; } ;
typedef TYPE_1__ session_t ;
struct TYPE_11__ {scalar_t__ (* put ) (TYPE_3__*,TYPE_2__*,TYPE_2__*,int ) ;} ;
struct TYPE_10__ {int size; TYPE_1__** data; } ;
typedef TYPE_2__ DBT ;


 int FUNC_0 (char*,TYPE_1__*,int ) ;
 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_3__*,TYPE_2__*,TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_3(session_t *VAR_2)
{
 DBT VAR_3;
 DBT VAR_4;

 VAR_3.data = &VAR_2->se_process;
 VAR_3.size = sizeof VAR_2->se_process;
 VAR_4.data = &VAR_2;
 VAR_4.size = sizeof VAR_2;

 if ((*VAR_1->put)(VAR_1, &VAR_3, &VAR_4, 0))
  FUNC_0("insert %d: %s", VAR_2->se_process, FUNC_1(VAR_0));
}
