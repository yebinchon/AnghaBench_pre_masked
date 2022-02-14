
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ** c; } ;
typedef TYPE_1__ jacobian ;
struct TYPE_7__ {int * p; } ;
typedef TYPE_2__ curve_params ;


 int FUNC_0 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void
FUNC_1(jacobian *VAR_0, const curve_params *VAR_1)
{
 FUNC_0(VAR_0, 0, sizeof *VAR_0);
 VAR_0->c[0][0] = VAR_0->c[1][0] = VAR_0->c[2][0] = VAR_1->p[0];
}
