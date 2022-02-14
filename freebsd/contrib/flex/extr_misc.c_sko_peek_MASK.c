
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dc; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_1(bool *VAR_2)
{
    if(VAR_0 <= 0)
        FUNC_0("peek attempt when sko stack is empty");
    if(VAR_2)
        *VAR_2 = VAR_1[VAR_0-1].dc;
}
