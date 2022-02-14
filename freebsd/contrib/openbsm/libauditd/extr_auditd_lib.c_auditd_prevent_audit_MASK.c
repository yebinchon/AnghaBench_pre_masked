
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ai_asid; } ;
typedef TYPE_1__ auditinfo_t ;
typedef int ai ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;

int
FUNC_3(void)
{
 auditinfo_t VAR_2;
 FUNC_0(&VAR_2, sizeof(VAR_2));
 VAR_2.ai_asid = FUNC_1();
 if (FUNC_2(&VAR_2) != 0)
  return (VAR_1);
 return (VAR_0);
}
