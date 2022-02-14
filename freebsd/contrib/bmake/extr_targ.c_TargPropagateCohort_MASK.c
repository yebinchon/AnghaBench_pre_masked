
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
typedef TYPE_1__ GNode ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(void *VAR_1, void *VAR_2)
{
    GNode *VAR_3 = (GNode *)VAR_1;
    GNode *VAR_4 = (GNode *)VAR_2;

    VAR_3->type |= VAR_4->type & ~VAR_0;
    return (0);
}
