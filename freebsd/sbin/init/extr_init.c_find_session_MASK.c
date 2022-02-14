
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int session_t ;
typedef int ret ;
typedef int pid_t ;
struct TYPE_7__ {scalar_t__ (* get ) (TYPE_2__*,TYPE_1__*,TYPE_1__*,int ) ;} ;
struct TYPE_6__ {int size; int * data; } ;
typedef TYPE_1__ DBT ;


 int FUNC_0 (int *,char*,int) ;
 TYPE_2__* VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_1__*,TYPE_1__*,int ) ;

__attribute__((used)) static session_t *
FUNC_2(pid_t VAR_1)
{
 DBT VAR_2;
 DBT VAR_3;
 session_t *VAR_4;

 VAR_2.data = &VAR_1;
 VAR_2.size = sizeof VAR_1;
 if ((*VAR_0->get)(VAR_0, &VAR_2, &VAR_3, 0) != 0)
  return 0;
 FUNC_0(VAR_3.data, (char *)&VAR_4, sizeof(VAR_4));
 return VAR_4;
}
