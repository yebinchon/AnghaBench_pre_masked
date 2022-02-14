
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int unmade; } ;
typedef TYPE_1__ GNode ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_2(void *VAR_0, void *VAR_1)
{
    GNode *VAR_2 = (GNode *)VAR_0;
    GNode *VAR_3 = (GNode *)VAR_1;

    (void)FUNC_0(VAR_2, 0);
    FUNC_1(VAR_3, VAR_2);
    VAR_3->unmade--;

    return (0);
}
