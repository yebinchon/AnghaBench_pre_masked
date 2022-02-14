
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int unmade; int parents; int children; } ;
typedef TYPE_1__ GNode ;


 int FUNC_0 (int ,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_1(void *VAR_0, void *VAR_1)
{
    GNode *VAR_2 = VAR_0;
    GNode *VAR_3 = VAR_1;

    FUNC_0(VAR_3->children, VAR_2);
    FUNC_0(VAR_2->parents, VAR_3);
    VAR_3->unmade++;
    return 0;
}
