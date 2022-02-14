
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* niels_t ;
typedef TYPE_2__* curve448_point_t ;
struct TYPE_6__ {int z; int x; int y; int t; } ;
struct TYPE_5__ {int a; int b; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(curve448_point_t VAR_1, const niels_t VAR_2)
{
    FUNC_0(VAR_1->y, VAR_2->b, VAR_2->a);
    FUNC_3(VAR_1->x, VAR_2->b, VAR_2->a);
    FUNC_2(VAR_1->t, VAR_1->y, VAR_1->x);
    FUNC_1(VAR_1->z, VAR_0);
}
