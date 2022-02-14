
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VICMD ;
struct TYPE_6__ {TYPE_1__* cmd; } ;
struct TYPE_5__ {int (* fn ) (int *,TYPE_2__*) ;} ;
typedef int SCR ;
typedef TYPE_2__ EXCMD ;


 int FUNC_0 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_1 (int *,int *) ;

__attribute__((used)) static int
FUNC_2(SCR *VAR_0, VICMD *VAR_1, EXCMD *VAR_2)
{
 int VAR_3;

 VAR_3 = VAR_2->cmd->fn(VAR_0, VAR_2);
 return (FUNC_1(VAR_0, VAR_1) || VAR_3);
}
