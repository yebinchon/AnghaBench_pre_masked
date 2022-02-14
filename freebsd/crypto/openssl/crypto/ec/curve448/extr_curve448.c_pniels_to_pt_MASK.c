
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* pniels_t ;
typedef int gf ;
typedef TYPE_3__* curve448_point_t ;
struct TYPE_8__ {int z; int y; int x; int t; } ;
struct TYPE_7__ {int z; TYPE_1__* n; } ;
struct TYPE_6__ {int a; int b; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(curve448_point_t VAR_0, const pniels_t VAR_1)
{
    gf VAR_2;

    FUNC_0(VAR_2, VAR_1->n->b, VAR_1->n->a);
    FUNC_3(VAR_0->y, VAR_1->n->b, VAR_1->n->a);
    FUNC_1(VAR_0->t, VAR_0->y, VAR_2);
    FUNC_1(VAR_0->x, VAR_1->z, VAR_0->y);
    FUNC_1(VAR_0->y, VAR_1->z, VAR_2);
    FUNC_2(VAR_0->z, VAR_1->z);
}
