
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; } ;
typedef TYPE_1__ GNode ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (char*) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static GNode *
FUNC_1(void)
{

    if (!VAR_1) {
 VAR_1 = FUNC_0("Realpath");

 VAR_1->flags = VAR_0;

    }

    return VAR_1;
}
