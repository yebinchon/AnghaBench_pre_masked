
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ argc; } ;
typedef int SCR ;
typedef TYPE_1__ EXCMD ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*,int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;

int
FUNC_3(SCR *VAR_1, EXCMD *VAR_2)
{
 if (FUNC_1(VAR_1, VAR_2, VAR_0))
  return (1);
 if (FUNC_2(VAR_1, 0))
  return (1);


 VAR_2->argc = 0;

 return (FUNC_0(VAR_1, VAR_2));
}
